#include <stdio.h>

int main() {
  int numero;
  printf("Digite o valor do numero: \n");
  scanf("%d" , &numero);


  switch (numero % 2)
  {
  case 0 : 
    printf("O numero é par\n");
    break;
  
  default : 
  printf("O numero é impar\n");
    break;
    
  }

  return 0;
}
