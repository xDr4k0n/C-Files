#include <stdio.h>
int main()
{
    FILE *file_pointer;
    int carattere_singolo;
    char nome_file[40];
    printf("Inserisci nome del file : \n");
    scanf("%s",nome_file);
    file_pointer = fopen(nome_file,"r");
    if(file_pointer == NULL)
    {
        printf("Errore nella lettura del File 'mio_file.txt'\n");
        return (-1);
    }
    //Lettura file charattere per carattere
    while((carattere_singolo=getc(file_pointer)) != EOF)
    {
        printf("%c", carattere_singolo);
    }
    fclose(file_pointer);
    file_pointer=NULL;
    return 0;
}

