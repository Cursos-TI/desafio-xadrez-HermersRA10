#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void torrerecursiva(int casas){
    if (casas > 0)
    {
        printf("direita\n");
        torrerecursiva(casas - 1);
    }
    
}

void rainharecursiva(int casas){
    if (casas > 0)
    {
        printf("esquerda\n");
        rainharecursiva(casas - 1);
    }
}

void bisporecursivo(int casas){
    if (casas > 0)
    {
        //loop vertical externo
        for (int v = 0; v < 1; v++)
        {
            printf("cima\n");

            //loop horizontal interno
            for (int h = 0; h < 1; h++)
            {
                printf("direita\n");

            }
            
        }
        bisporecursivo(casas - 1);
    }
    
}

void cavalorecursivo(int casas){
    if (casas > 0)
    {
        for (int v = 0, h = 0; v < 2 || h < 1; )
        {
            if (v < 2)
            {
                printf("cima\n");
                v++;
                continue;
            }
            if (h < 1)
            {
                printf("direita\n");
                h++;
            }
            
        }
        cavalorecursivo(casas - 1);
    }
    
}
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
//int torre = 0,bispo = 0,rainha = 0 ;
//int cavalo = 0;
//int movimentovertical = 0, movimentohorizontal = 0;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\n--- Torre ---\n");
    torrerecursiva(5);
    printf("\n--- Rainha ---\n");
    rainharecursiva(8);
    printf("\n--- Bispo ---\n");
    bisporecursivo(5);
    printf("\n--- Cavalo ---\n");
    cavalorecursivo(1);
//while (bispo <= 4)
    //{
      // printf ("Cima, direita\n");
       
       
        //bispo++; 
   // }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
//for ( torre = 0; torre <= 4; torre++)
   // {
   //     printf("direita\n");
   // }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
//do 
//{printf ("esquerda\n");
    //rainha++;
//}

//while (rainha <= 7);

    


    // Nível Aventureiro - Movimentação do Cavalo
    //for (cavalo = 0; cavalo < 1; cavalo++)
    //{
        
       // while (movimentovertical <= 1)
       // {
        //    printf("baixo\n");
       //     movimentovertical++;
       // }
        //do
        //{
       //     printf ("esquerda\n");
        //    movimentohorizontal++;
        //} while (movimentohorizontal < 1);
           
   // }
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
