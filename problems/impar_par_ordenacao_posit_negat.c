#include <stdio.h>

int main(void) {
    int inteiros[3];
    int nums;

    int maior, menor;

    puts("\nSOMENTE 3 NUMS");
    for (int i = 0; i < 3; i++) {
        printf("digite num [%d]: ", i);
        scanf("%d", &nums);

        inteiros[i] = nums;
    }

    // 9 8 7
    // 8, 9, 7
    // 8, 7, 9

    // 7, 8, 9
    puts("\nORDENAR ARRAY");
    int auxiliar = inteiros[0];
    for (int x = 0; x < 2; x++) {
        for (int z = 0; z < 2; z++) {
            if (inteiros[z] > inteiros[z + 1]) {
                auxiliar = inteiros[z];
                inteiros[z] = inteiros[z + 1];
                inteiros[z + 1] = auxiliar;
            }
        }
    }
    for (int ord = 0; ord < 3; ord++) {
        printf("%d", inteiros[ord]);

    }
    puts("\n");

    maior = inteiros[0];
    menor = inteiros[0];

    puts("MAIORES NUMEROS");
    for (int j = 0; j < 2; j++) {
        // printf("%d", inteiros[j]);

        if (maior < inteiros[j + 1]) {
            maior = inteiros[j + 1];
        }
    }
    printf("maior: %d\n", maior);

    puts("\nMENORES NUMEROS");
    for (int k = 0; k < 2; k++) {
        // printf("%d", inteiros[k]);

        if (menor > inteiros[k + 1]) {
            menor = inteiros[k + 1];
        }
    }
    printf("menor: %d\n", menor);

    puts("\nNEGATIVOS");
    for (int neg = 0; neg < 3; neg++) {
        if (inteiros[neg] < 0) {
            printf("num negativo: %d\n", inteiros[neg]);
        }
    }

    puts("\nPOSITIVOS");
    for (int positivos = 0; positivos < 3; positivos++) {
        if (inteiros[positivos] > 0) {
            printf("num positivos: %d\n", inteiros[positivos]);
        }
    }

    puts("\nPARES E IMPARES");
    for (int par_impar = 0; par_impar < 3; par_impar++) {
        if (inteiros[par_impar] % 2 == 0) {
            printf("num par: %d\n", inteiros[par_impar]);
        }

        if (inteiros[par_impar] < 0) {
            if ((inteiros[par_impar] * -1) % 2 == 1) {
                printf("num impar: %d\n", inteiros[par_impar]);
            }
        } else if (inteiros[par_impar] % 2 == 1) {
            printf("num impar: %d\n", inteiros[par_impar]);
        }
        
    }


    return 0;
}