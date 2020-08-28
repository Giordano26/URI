#include <stdio.h>
#include <stdbool.h>

int main() {
    int H1, M1, H2, M2,R;
    bool sentinel = false;
    do{
    scanf("%d%d%d%d", &H1, &M1, &H2, &M2);

       if(H1 == 0 && H2 == 0 && M1 == 0 && M2 == 0){
        }else{

        if(H1 == 0)
            H1 = 24;
        if(H2 == 0)
            H2 = 24;

        R = ((H2*60) + M2) - ((H1 * 60) + M1);
        if ( R <= 0 ) R += 1440; 
        printf("%d\n",R);
        }
        if(H1 == 0 & M1 == 0 & H2 == 0 & M2 == 0)
            sentinel = true;
            
    }while(!sentinel);

    return 0;
}