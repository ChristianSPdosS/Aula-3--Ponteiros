#include <stdio.h>

//Utilizando notação de ponteiros, escreva um algoritmo que percorra uma string e substitua vogais por #.

int main(){

char s[]={"TheWay"};
char *ptr= s;
  int i=0;

  while(*(ptr + i) != '\0') {
    
    switch(*(ptr + i)) {
      case 'A':  
      case 'a':  
      case 'E':  
      case 'e':  
      case 'I':  
      case 'i':  
      case 'O':  
      case 'o':        
      case 'u':  
       *(ptr + i)='#';
    }
  i++;
  }

  printf("%s\n" , s);
 
return 0;
}