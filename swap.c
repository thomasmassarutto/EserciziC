#include <stdio.h>

//implementazione funzione swap con puntatori
void swap (int *x, int *y){//puntatori
    int tmp;// var temporanea in the middle
    tmp= *x;// valori dei puntatori, non il puntatore
    *x= *y;
    *y= tmp;
}

int main(){
    //implementare una funzione che scambia il valore di due interi
    int x=5;
    int y=3;

    printf("%d\t%d\n", x, y);

    swap(&x, &y);// passo gli indirizzi di memoria

    printf("%d\t%d", x, y);
    return 0;
}