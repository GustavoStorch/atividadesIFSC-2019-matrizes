#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3] = {1,2,1,3,7,2,4,1,5};
    int i, j;
    int acMedia = 0;
    float soma, media;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma = soma + mat[i][j];
        }
    }

    media = soma / 9;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] >= media){
                acMedia = acMedia + 1;
            }
        }
    }


    printf("Soma.....: %.0f\n", soma);
    printf("Media....: %f\n", media);
    printf("Qtd>Media: %d", acMedia);
}
