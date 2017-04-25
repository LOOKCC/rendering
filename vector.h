#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct {float x,y,z,w;} vector;
typedef vector point;
float length(vector v);
vector add(vector a,vector b);
vector sub(vector a,vector b);
float pointmultiply(vector a,vector b);
vector crossmultiply(vector a,vector b);
void unitize(vector *v);
#endif