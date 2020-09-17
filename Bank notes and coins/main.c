#include <stdio.h>

int main(){

    double valor;
    int val100,val50,val20,val10,val5,val2;
    int valm1,valm50,valm25,valm10,valm5,valm01;
    int cedula, moedas;

    scanf("%lf",&valor);

    cedula = (int)valor;
    moedas = (valor - cedula) * 100;



    val100 = cedula/100;
    cedula = cedula%100;
    val50 = cedula/50;
    cedula = cedula%50;
    val20 = cedula/20;
    cedula = cedula%20;
    val10 = cedula/10;
    cedula = cedula%10;
    val5 = cedula/5;
    cedula = cedula%5;
    val2 = cedula/2;
    cedula = cedula%2;
    valm1 = cedula/1;
    cedula = cedula%1;
    valm50 = moedas/50;
    moedas = moedas%50;
    valm25 = moedas/25;
    moedas = moedas%25;
    valm10 = moedas/10;
    moedas = moedas%10;
    valm5 = moedas/5;
    moedas = moedas%5;
    valm01 = moedas/1;



    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",val100,val50,val20,val10,val5,val2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",valm1,valm50,valm25,valm10,valm5,valm01);

    return 0;
}