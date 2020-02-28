#include <stdio.h>
#include <string.h>
#define L 20
int main()
{
    FILE *fn = NULL;
    char nome[L];
    int character;
    int count=0;
    long int lunghezza;
    printf("Inserisci nome dell file : ");
    scanf("%s",nome);
    printf("\n");
    
    fn = fopen(nome,"r");
    if (fn == NULL){
        printf("Errore nell aprire il file \n");
        return -1;
    }
    while ((character = fgetc(fn)) != EOF)
    {
        if(character == 10)
            count++;
    }
    rewind(fn);
    fseek(fn,0,SEEK_END);
    lunghezza = ftell(fn);
    rewind(fn);
    
    printf("Il tuo file e lungo %ld [charatteri/byte]\n",lunghezza);
    printf("Ha %d righe!\n",count);

    return 0;
}

