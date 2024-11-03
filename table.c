#include<stdio.h>

int main(){
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);

  for (int i = 10; i >= 1; i--)
  {
    
    printf("%d X %d = %d\n",i,number,i*number);
  }
  
}