#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][3] = {1,4,7,2,5,8};
    int i, j;

    for(j = 0; j < 3; j++){
        for(i = 0; i < 2; i++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
