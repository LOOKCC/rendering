#include<stdio.h>
#include"vector.h"
#include<math.h>
float length(vector v){
     return sqrt(v.x*v.x+v.y*v.y+v.z*v.z);
}
vector add(vector a,vector b){
    vector res;
    res.x=a.x+b.x;
    res.y=a.y+b.y;
    res.z=a.z+b.z;
    res.w=1.0f;
    return res;
}
vector sub(vector a,vector b){
    vector res;
    res.x=a.x-b.x;
    res.y=a.y-b.y;
    res.z=a.z-b.z;
    res.w=1.0f;
    return res;
}
float pointmultiply(vector a,vector b){
    return a.x*b.x+a.y*b.y+a.z*b.z;
}
vector crossmultiply(vector a,vector b){
    vector res;
    res.x=a.y*b.z-a.z*b.y;
    res.y=a.x*b.z-a.z*b.x;
    res.z=a.x*b.y-a.y*b.x;
    res.w=1.0f;
    return res;
}
void unitize(vector *v){
    float l=length(*v);
    if(l!=0.0f){
        v->x/=l;
        v->y/=l;
        v->z/=l;
    }
}
