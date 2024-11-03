#include<stdio.h>

int celsiustoFahrenheit(int celsius);

int main(){

  int celsius;
  printf("Enter temperature in celsius: ");
  scanf("%d", &celsius);
  printf("Temperature in fahrenheit: %d\n", celsiustoFahrenheit(celsius));

  return 0;
}

int celsiustoFahrenheit(int celsius){

  if(celsius == 0){
    return 32;
  }

  int fahrenheit = celsius * (9/5) + 32;
  return fahrenheit;

}