#include <stdio.h>

int main(){
// Declaração de variavéis
int t,b=0,r=0,opcao,opcao2;
// Menu de escolha do usuário da peça que deseja mover
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
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
                     // Estrutura de repetição 'for'
                     for(t=0;t<5;t++){
                            printf("Cima\n");
                     }
              break;
              case 2:
                     // Estrutura de repetição 'for'
                     for(t=0;t<5;t++){
                            printf("Esquerda\n");
                     }
              break;
              case 3:
                     // Estrutura de repetição 'for'
                     for(t=0;t<5;t++){
                            printf("Direita\n");
                     }
              break;
              case 4:
                     // Estrutura de repetição 'for'
                     for(t=0;t<5;t++){
                            printf("Baixo\n");
                     }
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
                     // Estrutura de repetição 'while'
                     while(b<5){
                            printf("Cima-direita\n");
                            b++;
                     }
              break;
              case 2:
                     // Estrutura de repetição 'while'
                     while(b<5){
                            printf("Cima-esquerda\n");
                            b++;
                     }
              break;
              case 3:
                     // Estrutura de repetição 'while'
                     while(b<5){
                            printf("Baixo-direita\n");
                            b++;
                     }
              break;
              case 4:
                     // Estrutura de repetição 'while'
                     while(b<5){
                            printf("Baixo-esquerda\n");
                            b++;
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
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Cima\n");
                            r++;
                     }while(r<8);
              break;
              case 2:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Esquerda\n");
                            r++;
                     }while(r<8);
              break;
              case 3:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Direita\n");
                            r++;
                     }while(r<8);
              break;
              case 4:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Baixo\n");
                            r++;
                     }while(r<8);
              break;
              case 5:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Cima-direita\n");
                            r++;
                     }while(r<8);
              break;
              case 6:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Cima-esquerda\n");
                            r++;
                     }while(r<8);
              break;
              case 7:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Baixo-direita\n");
                            r++;
                     }while(r<8);
              break;
              case 8:
                     // Estrutura de repetição 'do-while'
                     do{
                            printf("Baixo-esquerda\n");
                            r++;
                     }while(r<8);
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
