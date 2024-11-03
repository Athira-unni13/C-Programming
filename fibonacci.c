#include<stdio.h>

void fibonacci(int n);

int main(){

  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  fibonacci(n);

  return 0;
}

void fibonacci(int n){
  int a = 0, b = 1, i;
  printf("%d\n",a);
  printf("%d\n",b);
  for(i = 1; i<n; i++){
    int c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
}