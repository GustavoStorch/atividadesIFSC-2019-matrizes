#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matA[2][3] = {3,4,5,4,5,9};
    int matB[3][2] = {3,4,4,5,6,3};
    int matResultado[2][2] = {0,0,0,0};
    int i, j, k;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            for (k = 0; k < 3; k++){
                matResultado[i][j] = matResultado[i][j] + matA[i][k] * matB[k][j];
            }
        }
    }

    for(i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%2d ", matResultado[i][j]);
        }
        printf("\n");
    }
}
