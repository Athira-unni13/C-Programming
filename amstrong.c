#include<stdio.h>
#include<math.h>

void main(){

  int number,N,r,sum=0;
  printf("Enter a number: ");
  scanf("%d",&number);
  N=number;
  r=0;
  while(N>0){
    r = N%10;
    sum = sum +(r*r*r);
    N=N/10;
  }
  if(sum == number){
    printf("%d is a amstrong number",number);
  }
  else{
    printf("%d is not a amstrong number",number);
  }


}