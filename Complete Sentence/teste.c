#include <stdio.h>
#include <string.h>


void flush_in(){

    int ch;

    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){

    }
}


int main(){
	

	int n,count,tamfrase,i;
	char frase[1100],alpha[124];

	scanf("%d",&n);
    flush_in();

	while(n > 0){

		count = 0;

		for(i = 0; i < 123; i++){
			alpha[i] = 0;
		}

		fgets(frase,1100,stdin);
        tamfrase = strlen(frase);

		for(i = 0; i < tamfrase; i++){
			alpha[frase[i]] = 1;
		}

		for(i = 97; i < 123; i++){
			if(alpha[i] > 0)
				count++;
		}


		if(count == 26)
            printf("frase completa\n");
        else if(count >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
		n--;
	}


	return 0;
}
