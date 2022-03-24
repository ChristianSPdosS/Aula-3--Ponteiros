#include <stdio.h>
int main(){

//Utilizando notação de ponteiros, escreva um algoritmo que percorra um array de inteiros e identifique o maior e menor valor desse array

int arr[5] = {3,2,1,5,8};
int *ptr= arr;

  int maior= *ptr;
 for(int i=0; i<5; i++){
   if(maior < *(ptr+i)){
     maior = *(ptr+i);
   }
 }
printf("O maior valor é: %d\n" , maior);

   int menor= *ptr;
 for(int i=0; i<5; i++){
   if(menor > *(ptr+i)){
     menor = *(ptr+i);
   }
 }
printf("O menor valor é: %d\n" , menor);





  return 0;
}