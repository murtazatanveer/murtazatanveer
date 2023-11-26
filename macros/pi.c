#include<stdio.h>
#define pi 3.14
int main(){

#ifdef pi
    float r =5.4f;
    float area = pi * r * r;
    printf("\nAREA : %.2f ",area);
#endif
}