#include <stdio.h>
 
int main() {

// Movimento da torre 

printf("== MOVIMENTAÇÃO DAS PEÇAS ==\n");
  
// Vou usar (for) para criar o movimento da torre (5 casas para a direita!)

printf("== TORRE ==\n");

for (int i = 0; i < 5; i++) {
  printf("Direita\n");
}

printf("\n");

// Movimento do bispo 

// Vou usar (while) para criar o movimento do bispo (5 casas na diagonal ou seja diagonal = cima + direita)

printf("== BISPO ==\n");

int casas = 0;

while(casas < 5){
printf("Cima Direita\n");
casas ++;
}

printf("\n");

// Movimento da rainha

// Vou usar (Do while) para criar o movimento da rainha (ex: 8 casas a esquerda)

printf("== RAINHA ==\n");

int i = 0;

do{
    printf("Esquerda\n");
    i++;

}while (i < 8);



  return 0; 

}