#include <stdio.h>
#define MAX 10
int main (){
    int array[MAX];
    //riempie array
    for (int i=0;i<MAX;i++){
        scanf("%d", &array[i]);
    }

    int start;//INDICE DA CUI PARTIRE A FARE LA MOLTIPLICAZIONE
    printf("\nindice inizio\n");
    scanf("%d", &start);
    int finish;//INDICE IN CUI FINIRE FARE LA MOLTIPLICAZIONE
    printf("indice inizio\n");
    scanf("%d", &finish);

    /*
        vado a creare una matrice di dati 
        la matrice contiene valori validi nella diagonale alto sx -> basso dx
        *  *  *  *  *  *
        * SI SI SI SI  *
        * NO SI SI SI  *
        * NO NO SI SI  *
        * NO NO NO SI  *
        *  *  *  *  *  *
        i valori della diagonale corrispondono ai valori del primo array
        gli altri sono la serie moltiplicativa buffer [][-1] * array[j]
        NB: I valori contrassegnati come no sono non validi: non vengono mai assegnati
        il valore di inizio deve essere quindi sempre minore (o uguale) di quello di fine   
    */

   int buffer[MAX] [MAX];// la famosa matrice

    for (int i=0;i<MAX;i++){//indice che scorre le righe
        for (int j=i;j<MAX;j++){//indice che scorre le colonne

            if (i==j){//questo if potri invertirlo per ottimizzare il programma in quanto so che verra TRUE solo 1 volta...
            buffer [i][j]= array [j];
            }else{
            buffer [i][j]= buffer[i][j-1] * array[j];
            }
        }
    }

    int res= buffer[start][finish];
    printf("\n%d", res);
    
    return 0;
}