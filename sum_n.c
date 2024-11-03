#include<stdio.h>

int sum(int n);

int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sumof = sum(n);
  printf("Sum of %d natural number is %d", n,sumof);
  return 0;
}

int sum(int n){

  if(n == 0){
    return 0;
  }
  else{
    return n + sum(n-1);
  }

}