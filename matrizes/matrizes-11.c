#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][3] = {3,4,5,4,5,9,1,2,4,7,2,2};
    int slin[4];
    int scol[3];
    int i, j;
    memset(slin, 0, sizeof(slin));
    memset(scol, 0, sizeof(scol));

    for(i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            slin[i] = slin[i] + mat[i][j];
            scol[j] = scol[j] + mat[i][j];
        }
    }

    for(i = 0; i < 4; i++){
        printf("Soma linhas.: %d\n", slin[i]);
    }
    printf("\n");
    for(j = 0; j < 3; j++){
        printf("Soma colunas: %d\n", scol[j]);
    }
}


