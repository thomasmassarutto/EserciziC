/*
    Scrivere un programma che riceva in input un array V ordinato di interi e, su una nuova riga, un ulteriore intero S.
    Il programma deve restituire una qualunque coppia ordinata (i,j) di posizioni nell'array V tale che i<j e V[i]+V[j]=S.
    Se una tale coppia (i,j) di interi non esiste, il programma deve segnalare il caso ritornando la coppia (−1,−1). 
*/
#include <stdio.h>
# define MAX 10


void monke (int array[], int somma){//array: puntatore
       //METODO STUPIDO
   /*   A[i1]+A[j1]= s
        A[i1]+A[j2]= s ...
        i, j sono indici che scorrono lungo l'array
   */
   for (int i=0;i<MAX;i++){
    for (int j=i;j<MAX;j++){
        if ( (array[i] + array[j]) == somma ){
        printf("%d, %d\n", i, j);  
        return 0;        
        }
    }
   }
   printf("-1, -1\n"); 
   return 0;

}

int main(){
    int array[MAX]={1,2,3,4,5,6,7,8,9,10};
    int s= 20;
    /* INPUT: COMMENTATI PER ORA
    //inserimento array
    for (int i= 0; i<MAX ;i++){
        scanf("%d", &array[i]);

    }
    
    //inserimanto indici
    scanf("%d", &s);
    */
    monke(array, s);


    return 0;
}