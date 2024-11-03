//Find the average of two number

#include<stdio.h>
#include<math.h>

int main(){

  float a,b,c,average;
  printf("Enter First number: ");
  scanf("%f",&a);
  printf("Enter Second number: ");
  scanf("%f",&b);
  printf("Enter Third number: ");
  scanf("%f",&c);

  average = (a+b+c)/3;

  printf("Average of numbers: %f",average);
}