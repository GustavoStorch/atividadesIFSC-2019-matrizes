#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][7];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
            if(mat[i][j] != mat[0][4] && mat[i][j] != mat[0][5] && mat[i][j] != mat[0][6] && mat[i][j] != mat[1][5] &&
                mat[i][j] != mat[1][6] && mat[i][j] != mat[2][6]){
                printf("* ");
        }else {
            printf("  ");
            }
        }
        printf("\n");
    }
}
