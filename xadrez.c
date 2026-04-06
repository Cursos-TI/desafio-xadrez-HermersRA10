#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
int torre = 0,bispo = 0,rainha = 0 ;
int cavalo = 0;
int movimentovertical = 0, movimentohorizontal = 0;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
while (bispo <= 4)
    {
       printf ("Cima, direita\n");
       
       
        bispo++; 
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
for ( torre = 0; torre <= 4; torre++)
    {
        printf("direita\n");
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
do 
{printf ("esquerda\n");
    rainha++;
}

while (rainha <= 7);

    


    // Nível Aventureiro - Movimentação do Cavalo
    for (cavalo = 0; cavalo < 1; cavalo++)
    {
        
        while (movimentovertical <= 1)
        {
            printf("baixo\n");
            movimentovertical++;
        }
        do
        {
            printf ("esquerda\n");
            movimentohorizontal++;
        } while (movimentohorizontal < 1);
           
    }
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
