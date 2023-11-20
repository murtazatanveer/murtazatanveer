#include<stdio.h>
#include"logic.h"

int main(){

int x,y;

printf("\nEnter Fraction in the format (1/2) : ");
scanf("%d/%d",&x,&y);

fraction(x,y);
}