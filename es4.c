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

    for(int j=length-1; j>=0; j--){
        for(int i=0; i<j;i++){
                printf("%c", stringa[i]);
        }
     printf("\n");
    }


    return 0;
}