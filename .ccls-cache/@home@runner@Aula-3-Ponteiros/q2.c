#include <stdio.h>

int main(){

//Utilizando notação de ponteiros, escreva um algoritmo que percorra uma string e imprima o comprimento dessa string.

  char s[]= {"Imblue"};  
  char *ptr= s;
  int comp= 0;

  for(int i=0; ptr[i] != '\0'; i++){
  comp++;
  }



  printf("O comprimento da string é: %d bytes\n" , comp);


















  return 0;
}