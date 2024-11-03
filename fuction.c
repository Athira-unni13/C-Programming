#include<stdio.h>

void Hello();
void goodbye();
int main(){
  Hello();
  goodbye();
}

void Hello(){
  printf("Hello, world!\n");
}

void goodbye(){
  printf("Goodbye, world!\n");
}