#include <stdio.h>

int main(){

    int A,B,C,Maior1,abs,abs2,Maior2;
    scanf("%d%d%d",&A,&B,&C);

    if(A-B < 0)
        abs = (A-B)*-1;
    else
        abs = (A-B);

    Maior1 = (A + B + abs)/2;

    if(Maior1 - C < 0)
        abs2 = (Maior1 - C)*-1;
    else
        abs2 = (Maior1 - C);

    Maior2 = (Maior1 + C + abs2)/2;


    printf("%d eh o maior\n",Maior2);


    return 0;
}