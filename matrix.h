#ifndef MATRIX_H_
#define MATRIX_H_

typedef struct {
    float m[4][4];
}matrix;

matrix addm(matrix a,matrix b);
matrix subm(matrix a,matrix b);
matrix mulnum(float f,matrix m);
matrix mulmatr(matrix a,matrix b);
void set_identity(matrix *m);
void set_zero(matrix *m);



#endif