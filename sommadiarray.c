#include <stdio.h>
#define MAX 10

int main (){
    int array[MAX];
    //riempie array
    for (int i=0;i<MAX;i++){
        scanf("%d", &array[i]);
    }
    //array che contiena la sommatoria
    int buffer[MAX];
    //riempie buffer[]
    for (int i=0, sum=0;i<MAX;i++){
        sum= sum + array[i];
        buffer[i]=sum;
    }

    int start;//INDICE DA CUI PARTIRE A FARE LA SOMMATORIA
    printf("\nindice inizio\n");
    scanf("%d", &start);
    int finish;//INDICE IN CUI FINIRE FARE LA SOMMATORIA
    printf("indice inizio\n");
    scanf("%d", &finish);

    int res= buffer[finish] - buffer[start] + array[start];

    printf("\n%d", res);
    return 0;
}