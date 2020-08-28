#include <stdio.h>

int main(){

    int id1,id2,u1,u2;
    float p1,p2,total;

    scanf("%d%d%f",&id1,&u1,&p1);
    scanf("%d%d%f",&id2,&u2,&p2);


    total = (u1*p1)+(u2*p2);

    printf("VALOR A PAGAR: R$ %.2f\n",total);


    return 0;
}