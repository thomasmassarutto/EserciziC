//Scrivere un programma che stampi tutti i suffissi di una stringa ricevuta in input.
#include <stdio.h>

#define max 20

int main(){
    //stringa di massimo 20 elementi
    char stringa[max];

    int length = 0;//stringa utilizzata
    int ch;// getchar

//riempire stringa
while((ch = getchar()) != '\n' && ch != EOF ){
    stringa[length]= ch;
    length++;
}
stringa[length]='\0';//carattere terminazione


for(int j= 0; j<= length;j++){//j: conta l'inizio della nuova stringa 

    for(int i= j; i<=length ;i++){// stampa dall'inizio stringa fino a fine stringa
        printf("%c", stringa[i]);
    }
    printf("\n");
}

    return 0;
}