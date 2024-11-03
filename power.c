#include<stdio.h>
#include<math.h>

void power(int n);

int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  power(n);
  return 0;
}

void power(int n){
  if (n == 0) {
    printf("1\n");
  }
  else{
    int value = pow(n,2);
    printf("%d\n", value);
  }
}