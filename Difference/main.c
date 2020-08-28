#include <stdio.h>

int main(){

    int A,B,C,D,product;
    scanf("%d%d%d%d",&A,&B,&C,&D);

    product = (A * B - C * D);

    printf("DIFERENCA = %d\n",product);

    return 0;
}