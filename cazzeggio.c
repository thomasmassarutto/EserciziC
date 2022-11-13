
#include<stdio.h>
//creo al volo un nuovo tipo di dato
//sara il nodo di una lista
typedef struct nodo_lista {
    int value;//valore
    struct nodo_lista *next;//puntatore a prossimo nodo
} mio_nodo;//nome

int main(){
    //primo nodo della lista
    mio_nodo nodo1;
    nodo1.value= 1;
    nodo1.next= NULL;

    
    return 0;
}