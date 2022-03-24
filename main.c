#include <stdio.h>

int main(void) {

char s[]= "OlaOleOli";

  for(int i=0; s[i] != '\0'; i++){
    printf("s[%d]: %c(end: %d)\n" , i, s[i], &s[i]);
    }
    printf("s:%d\n" , s);

  char *ptr= s;

  /*
 ptr= ptr + 2;
printf("%c :%d\n" ,*ptr, ptr);
  
  ptr= ptr + 3;
printf("%c :%d\n" , *ptr, ptr);

   ptr= ptr + 3;
printf("%c :%d\n" , *ptr , ptr);
  
  */
   printf("*(ptr + 2): %c(end: %d)\n" , *(ptr + 2) , ptr + 2) ;
   printf("*(ptr + 5): %c(end: %d)\n" , *(ptr + 5) , ptr + 5) ;
   printf("*(ptr + 8): %c(end: %d)\n" , *(ptr + 8) , ptr + 8) ;

   printf("*(s + 2): %c(end: %d)\n" , *(s + 2) , s + 2) ;
   printf("*(s + 5): %c(end: %d)\n" , *(s + 5) , s + 5) ;
   printf("*(s + 8): %c(end: %d)\n" , *(s + 8) , s + 8) ;

  int m[2][2] = {
  {1,2},
  {3,4}
  };

//   [  1|  2|  3|  4]
//    100 104 108 112

  int *ptr_m;
  ptr_m= m;

  for(int i=0; i<2*2; i++){
    printf("ptr_m[%d]: %d\n", i, ptr_m[i]);
  }
  
  return 0;
}