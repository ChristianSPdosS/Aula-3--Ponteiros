#include <stdio.h>

//Utilizando notação de ponteiros, escreva um algoritmo que percorra uma string e substitua vogais por #.

int main(){

char s[]={"TheWay"};
char *ptr= s;

  for(int i=0; ptr[i] != '\0'; i++){
    switch(*ptr){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      
      *ptr = '#';
      printf("%s" , *ptr);
      }
  }
  





return 0;
}