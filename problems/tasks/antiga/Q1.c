// Qual o valor de saida?

#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int *b){       // receba endereco de int de x y em -> *a *b

    *a = *a + *b;       // valor de *a que é x recebe valor de a + valor de b que é y

    return *a;          // retorne o valor atribuido em a que é o novo valor em x

}

int main()
{
    int x = 5, y = 3;

    /** ao passar para a funcao x recebe valor por meio de endereco
     * *a = &x -> x
     * *b = &y -> y
     * 
     * *a = *a + *b;    ->  x recebe 8 e retorna 8 da funcao
    */
    y = soma(&x, &y);       // passe endereco x y

    // apos terminar a funcao y recebe o novo valor retornado = 8

    printf("%d\n", x + y);      // imprima x = 8; y = 8, logo imprime 16

    return 0;
}
