#include<stdio.h>
#include<string.h>

void IndianorFrench();

int main(){
  IndianorFrench();
}

void IndianorFrench(){
  char str[20] = " ";
  printf("Enter whether you are indian or French: ");
  scanf("%s",str);

  if(strcmp(str, "Indian") == 0 || strcmp(str, "indian") == 0){
    printf("Namasthe");
  }
  else if(strcmp(str, "French") == 0 || strcmp(str, "french") == 0){
    printf("Bonjour");
  }

}

