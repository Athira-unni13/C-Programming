#include<stdio.h>

int main(){
  float radius;
  float pi = 3.14;
  float area;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  area = pi*radius*radius;
  printf("The area of the square is: %f", area);
}