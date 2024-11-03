//find the entered charachetr is uppercase or lowercase

#include<stdio.h>

void main(){

  char c;
  printf("Enter a character: ");
  scanf("%c", &c);
  if(c>='A' && c<='Z'){
    printf("%c is uppercase.", c);
  }
  else if(c >= 'a' && c <= 'z'){
    printf("%c is lowercase.", c);
  }
  else{
    printf("%c is neither uppercase nor lowercase.", c);
  }

}