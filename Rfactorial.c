#include<stdio.h>

int factorial(int n);

int main(){

  int n;
  printf("Enter a number :");
  scanf("%d",&n);
  int factofn = factorial(n);
  printf("Factorial of %d = %d\n",n,factofn);

}

int factorial(int n){

  if (n == 0){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }

}