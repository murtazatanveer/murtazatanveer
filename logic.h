#include<stdlib.h>
#include<stdio.h>
void fraction();

void fraction(int a,int b){

int sml;
if(a==b){

    printf("\nIn Lowest Terms : 1/1 ");
    exit(1);
}

if(a>b){

    sml=b;
    
}

else{

    sml=a;
}

for(int i=1;i<=sml;i++)
for(int j=1; j<=sml; j++){

    if(a%j==0 && b%j==0){

a=a/j;
b=b/j;

if((j>a) || (j>b)){

    break;
}
     
  }
}

printf("\n In Lowest Terms : %d/%d",a,b);

}