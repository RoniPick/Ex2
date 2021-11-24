#include <stdio.h>
#include "my_mat.h"

int mat[10][10];
int min(int, int);

//this function entering the numbers into a matrix
void entermat(int mat[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    floyd_warshall_algo(mat);
}

void floyd_warshall_algo(int mat[10][10]){
    for(int k=0; k<10; k++){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(mat[i][j] != 0 && mat[i][k] != 0 && mat[k][j] !=0)
                    mat[i][j]= min(mat[i][j],mat[i][k] + mat[k][j]);
                if(i!=j && mat[i][j] ==0 && mat[i][k]!=0 && mat[k][j]!=0)
                    mat[i][j] = mat[i][k] + mat[k][j];
            }
        }
    }
}

int min(int a, int b){
    if(a>b)
        return b;
    else
        return a;
}

int pathExists(int mat[10][10], int i, int j){
    if(mat[i][j]>0)
        return 1; //for true
    else
        return 0; //for false
}

int shortestPath(int mat[10][10], int i, int j){
    if(mat[i][j]>0)
        return mat[i][j];
    else
        return 0;
}

