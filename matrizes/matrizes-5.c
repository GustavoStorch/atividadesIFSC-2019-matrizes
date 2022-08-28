#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3] = {1,2,1,3,7,2,4,1,5};
    int i, j;

    printf("Impares\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] % 2 != 0){
                printf("%d  ", mat[i][j]);
            } else{
                printf("*  ");
            }
        }
        printf("\n");
    }
    printf("\nPares\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] % 2 == 0){
                printf("%d  ", mat[i][j]);
            } else{
                printf("*  ");
            }
        }
        printf("\n");
    }

}
