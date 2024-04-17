#include <stdio.h>
#include <stdlib.h>

// recebe inteiro
int teste(int n){

    if(n <= 1){

        return n;   // retorne o valor de i -> n caso n <= 1

    }else{

        /** Retorne valor em formato de recursao
         * 
         * 
        */
        return teste(n-1) * 2 + (teste(n - 2) - 1);

        /** Passadas do valor até que ele retorne para a funcao main
         * 
         * teste(5-1)   ==  teste(4)    == 4 * 2 = 8
         * teste(5 - 2) ==  teste(3)    -->     teste(3 - 1) = teste(2 - 1) == 1; teste(2 - 2) == 0 ;;;;; 1 * 2 = 2 ;;;; 0 - 1 = -1 ;;;; 2 - 1 = 1
         * 
         * teste(4-1)   ==  teste(3)    == 3 * 2 = 6//
         * teste(4 - 2) ==  teste(2)    -->     teste(2 - 1)    ==  teste(1)    ==  1 * 2 = 2
         * 
         * teste(3-1)   ==  teste(2)    ==  2   * 2 == 4//
         * teste(3 - 2) ==  teste(1)    ==  1 - 1 = 0
         * 
         * teste(2-1)   ==  teste(1)    ==  1   * 2 = 2
         * teste(2 - 2) ==  teste(0)    ==  0   -1 = -1
         * 
         * 
         * 
         * 
         * executando as recursoes que sobram fazer por ultimo depois de um ciclo completo e que comeca a desempilhar fica sobrando somente essa
         * teste(5-1)   ==  teste(4)    == 4 * 2 = 8
         * 
         * essa de baixo é executada novamente com recursao apos o desempilhamento
         * teste(5 - 2) ==  teste(3)    -->     teste(3 - 1) = teste(2 - 1) == 1; teste(2 - 2) == 0 ;;;;; 1 * 2 = 2 ;;;; 0 - 1 = -1 ;;;; 2 - 1 = 1
         * 
         * o que resulta em 1
         * 
         * agora somando o teste(n - 1) e o teste(n - 2)
         * isso é == 8 + 1 que da retorno para a main como 9
        */

       // valor retornado == 9

    }
}

int main()
{
    int i = 5;          // atribuir 5 a i

    // passar i como funcao e retornar um valor para ser imprimido
    printf("%d\n", teste(i));     // imprima valor == 9

    return 0;
}
