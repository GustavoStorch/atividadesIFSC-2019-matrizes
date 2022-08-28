#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3] = {1,2,1,3,7,2,4,1,5};
    int i, j, ipar = 0, iimpar = 0;
    int par[9], impar[9];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] % 2 != 0){
                impar[iimpar] = mat[i][j];
                iimpar++;
            } else{
                par[ipar] = mat[i][j];
                ipar++;
            }
        }
    }

    for(i = 0; i < iimpar; i++){
        printf("Impares: %d\n", impar[i]);
    }

    printf("\n");

    for(i = 0; i < ipar; i++){
        printf("Pares..: %d\n", par[i]);
    }
}
