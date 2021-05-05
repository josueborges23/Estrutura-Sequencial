#include <stdio.h>
#include <stdlib.h>


int main(){
  
  float metros; 
  printf("Entre com o valor em metros: ");
  scanf("%f", &metros);  
  printf("O valor de centrimetros e: %i\n ", (int)(metros*100)); 
  return 0;
}