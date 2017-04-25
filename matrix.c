#include<stdio.h>
#include<math.h>
#include"matrix.h"

matrix addm(matrix a,matrix b){
    matrix res;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            res.m[i][j] = a.m[i][j] + b.m[i][j];
        }
    }
    return res;
}
matrix subm(matrix a,matrix b){
    matrix res;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            res.m[i][j] = a.m[i][j] - b.m[i][j];
        }
    }
    return res;
}
matrix mulnum(float f,matrix m){
    matrix res;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            res.m[i][j]=m.m[i][j] * f;
        }
    }
    return res;
}
matrix mulmatr(matrix a,matrix b){
    matrix res;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            res.m[i][j] = 0.0f;
            for(int k = 0; k < 4; k++){
                res.m[i][j] += a.m[i][k] * b.m[k][j];
            }
        }
    }
    return res;
}
void set_identity(matrix *m){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j)   m -> m[i][j] = 1.0f;
            else m -> m[i][j] = 0.0f;
        }
    }
}
void set_zero(matrix *m){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            m -> m[i][j] = 0.0f;
        }
    }
}
