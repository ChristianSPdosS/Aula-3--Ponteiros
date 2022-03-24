#include <stdio.h>

int main(){

char s[] = "Maria", *ptr= s;

  printf(" *(s+2): %c\n" , *(s+2));
   printf(" *(ptr+2): %c\n" , *(ptr+2));

  printf("s: %d\n" , s);
  printf("ptr: %d\n" , ptr);

  printf("s + 1: %d\n" , s + 1);
  printf("ptr + 1: %d\n" , ptr + 1);

  printf("s + 4000: %d\n" , s + 4000);
  printf("ptr + 4000: %d\n" , ptr + 4000);
  














  return 0;
}