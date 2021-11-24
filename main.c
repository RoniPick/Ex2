#include <stdio.h>
#include "my_mat.h"

//declarations
int mat[10][10];
int i, j;

int main(void){
    char dec = getchar(); //the decision of the user
    while(dec != 'D'){
        scanf("%d", &dec);
        switch (dec) {
            case 'A':
                entermat(mat);

            case 'B':
                scanf("%d%d", &i, &j);
                if(pathExists(mat,i,j)==1){
                    printf("True\n");
                }
                else{
                    printf("False\n");
                }


            case 'C':
                scanf("%d%d", &i, &j);
                if(shortestPath(mat, i, j)>0){
                    printf("%d", &mat[i][j]);
                    printf("\n");
                }
                else{
                    printf("-1\n");
                }
        }
    }
    return 0;
}