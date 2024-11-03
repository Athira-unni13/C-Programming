#include<stdio.h>
#include<math.h>

void square(int n);

int main(){

  square(4);
  return 0;

}

void square(int n){

  if(n == 0){
    return;
  }

  int power = pow(n,2);

  printf("%d\n",power);
  square(n-1);

}