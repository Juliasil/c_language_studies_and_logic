/*
Exercício 1: Soma de Array
Descrição: Escreva uma função que recebe um array de números e retorna a soma de todos os elementos.

Regra: Não utilize funções de bibliotecas que façam a soma diretamente

Input: [1, 2, 3, 4, 5]

Output: 15

Input: [-1, 1, 0, 5, -5]

Output: 0
*/

#include <stdio.h>
int soma (int arry1[], int quantidadeElementos) {
  if(quantidadeElementos == 0)
      return 0;
  else
  return arry1[quantidadeElementos - 1] + soma(arry1, quantidadeElementos - 1);
}
int main () {
  int arry1[] = {1,2, 3, 4, 5};
  int quantidadeElementos1 = sizeof(arry1) / sizeof(arry1[0]);
  printf("Soma: %d\n", soma(arry1, quantidadeElementos1));

  int arry2[] = {-1, 1, 0, 5, -5};
  int quantidadeElementos2 = sizeof(arry2) / sizeof(arry2[0]);
  printf("Soma: %d\n", soma(arry2, quantidadeElementos2));

  return 0;
}