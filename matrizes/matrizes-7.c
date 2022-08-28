#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5] = {
        3,4,5,8,9,
        4,5,9,1,2,
        7,3,1,1,7,
        6,3,9,8,0,
        5,1,4,3,9 };
    int i, j, principal = 0, secundaria = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                principal = principal + mat[i][j];
            }
            if(i == 5 - 1 - j){
                secundaria = secundaria + mat[i][j];
            }
        }
    }
    printf("Diag.Principal..: %d\n", principal);
    printf("Diag.Secundaria.: %d\n", secundaria);
}
