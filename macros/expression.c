#include<stdio.h>
#define cal(a,b) ( (a*a) +  (b*b) ) + a
int main(){

    #ifdef cal
int x = 5, y = 10;

int result = cal(x,y);

printf("\nResult : %d",result);

#endif
}