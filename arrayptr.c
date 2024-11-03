#include<stdio.h>

int main(){

  int a[10];
  int i;
  int *ptr;
  ptr = a;

  for ( i = 0; i < 4; i++)
  {
    scanf("%d", ptr+i);
  }
  
  for ( i = 0; i < 4; i++)
  {
    printf("%d\n", *(ptr + i));
  }
  
  return 0;

}