#include <stdio.h>

void moverCima(int cima){
       if(cima>0){
              printf("Cima\n");
              moverCima(cima-1);
       }
}
void moverEsquerda(int esquerda){
       if(esquerda>0){
              printf("Esquerda\n");
              moverEsquerda(esquerda-1);
       }
}
void moverDireita(int direita){
       if(direita>0){
              printf("Direita\n");
              moverDireita(direita-1);
       }
}
void moverBaixo(int baixo){
       if(baixo>0){
              printf("Baixo\n");
              moverBaixo(baixo-1);
       }
}


int main(){
// Declaração de variavéis
int cavalo=1,torre=5,rainha=8,bispo=5,opcao,opcao2,j=1;
// Menu de escolha do usuário da peça que deseja mover
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n");
printf("Escolha a peca que deseja mover: ");
scanf("%i",&opcao);
switch(opcao){
       case 1:
       // Menu de escolha do usuário da direção que deseja mover a 'Torre'
       printf("1. Cima\n");
       printf("2. Esquerda\n");
       printf("3. Direita\n");
       printf("4. Baixo\n");
       printf("Escolha a direcao que deseja mover a peca: ");
       scanf("%i",&opcao2);
       switch(opcao2){
              case 1:
                     // Estrutura de repetição do movimento da 'Torre'
                     moverCima(torre);
              break;
              case 2:
                     // Estrutura de repetição do movimento da 'Torre'
                     moverEsquerda(torre);
              break;
              case 3:
                     // Estrutura de repetição do movimento da 'Torre'
                     moverDireita(torre);
              break;
              case 4:
                     // Estrutura de repetição do movimento da 'Torre'
                     moverBaixo(torre);
              break;
              default: printf("Opcao Invalida\n");
              break;
       }
       break;
       case 2:
       // Menu de escolha do usuário da direção que deseja mover o 'Bispo'
       printf("1. Cima-direita\n");
       printf("2. Cima-esquerda\n");
       printf("3. Baixo-direita\n");
       printf("4. Baixo-esquerda\n");
       printf("Escolha a direcao que deseja mover a peca: ");
       scanf("%i",&opcao2);
       switch(opcao2){
              case 1:
                     // Estrutura de repetição do movimento da 'Bispo'
                     moverCima(bispo);
                      while(j==1){
                            for(int i=0;i<5;i++){
                                   printf("Direita\n");
                            }
                            j++;
                      }
              break;
              case 2:
                     // Estrutura de repetição do movimento da 'Bispo'
                     moverCima(bispo);
                     while(j==1){
                            for(int i=0;i<5;i++){
                                   printf("Esquerda\n");
                            }
                            j++;
                      }
              break;
              case 3:
                     // Estrutura de repetição do movimento da 'Bispo'
                     moverBaixo(bispo);
                     while(j==1){
                            for(int i=0;i<5;i++){
                                   printf("Direita\n");
                            }
                            j++;
                      }
              break;
              case 4:
                     // Estrutura de repetição do movimento da 'Bispo'
                     moverBaixo(bispo);
                     while(j==1){
                            for(int i=0;i<5;i++){
                                   printf("Esquerda\n");
                            }
                            j++;
                      }
              break;
              default: printf("Opcao Invalida\n");
              break;
       }
       break;
       case 3:
       // Menu de escolha do usuário da direção que deseja mover a 'Rainha'
       printf("1. Cima\n");
       printf("2. Esquerda\n");
       printf("3. Direita\n");
       printf("4. Baixo\n");
       printf("5. Cima-direita\n");
       printf("6. Cima-esquerda\n");
       printf("7. Baixo-direita\n");
       printf("8. Baixo-esquerda\n");
       printf("Escolha a direcao que deseja mover a peca: ");
       scanf("%i",&opcao2);
       switch(opcao2){
              case 1:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverCima(rainha);
              break;
              case 2:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverEsquerda(rainha);
              break;
              case 3:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverDireita(rainha);
              break;
              case 4:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverBaixo(rainha);
              break;
              case 5:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverCima(rainha);
                     while(j==1){
                            for(int i=0;i<8;i++){
                                   printf("Direita\n");
                            }
                            j++;
                      }
              break;
              case 6:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverCima(rainha);
                     while(j==1){
                            for(int i=0;i<8;i++){
                                   printf("Esquerda\n");
                            }
                            j++;
                      }
              break;
              case 7:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverBaixo(rainha);
                     while(j==1){
                            for(int i=0;i<8;i++){
                                   printf("Direita\n");
                            }
                            j++;
                      }
              break;
              case 8:
                     // Estrutura de repetição do movimento da 'Rainha'
                     moverBaixo(rainha);
                     while(j==1){
                            for(int i=0;i<8;i++){
                                   printf("Esquerda\n");
                            }
                            j++;
                      }
              break;
              default: printf("Opcao Invalida\n");
              break;
       }
       break;
       case 4:
       // Menu de escolha do usuário da direçao que deseja mover o 'Cavalo'
       printf("1. Cima e Esquerda\n");
       printf("2. Cima e Direita\n");
       printf("3. Baixo e Esquerda\n");
       printf("4. Baixo e Direita\n");
       printf("Escolha a direcao que quer mover a peca: ");
       scanf("%i",&opcao2);
       switch(opcao2){
              case 1:
                     // Estrutura de repetição aninhada que imprime a direção do 'Cavalo'
                     for(int i=1;i<3;i++,cavalo++){
                            printf("Cima\n");
                            printf("Esquerda\n");
                     };
              break;
              case 2:
                     // Estrutura de repetição aninhada que imprime a direção do 'Cavalo'
                     for(int i=1;i<3;i++,cavalo++){
                            printf("Cima\n");
                            printf("Direita\n");
                     };
              break;
              case 3:
                     // Estrutura de repetição aninhada que imprime a direção do 'Cavalo'
                     for(int i=1;i<3;i++,cavalo++){
                            printf("Baixo\n");
                            printf("Esquerda\n");
                     };
              break;
              case 4:
                     // Estrutura de repetição aninhada que imprime a direção do 'Cavalo'
                     for(int i=1;i<3;i++,cavalo++){
                            printf("Baixo\n");
                            printf("Direita\n");
                     };
              break;
              default: printf("Opcao Invalida\n");
              break;
       }
       break;
       default: printf("Opcao Invalida\n");
       break;
      }
       return 0;
}
