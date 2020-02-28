#include <stdio.h>

int main() {
    
    FILE *fn=NULL;
    int c_lines=0;
    char namef[20];
    int carattere;
    int cercato;
    long int positione = 0;
    int numero=0;
    // 48-0 . 57-9
    printf("Inserisci nome file : ");
    scanf("%s",namef);
    printf("Inserisci numero da cercare: ");
    scanf("%d",&cercato);
    // 48-0 . 57-9
    char numeri[10] = "0123456789";
    int da_trovare=0;
    da_trovare = cercato;
    
    
    
    
    fn = fopen(namef,"r");
    if (fn == NULL)
    {
        printf("Errore nell aprire il file!\n");
        return -1;
    }
    while ( ((carattere=fgetc(fn)) != EOF) && ( positione ==0 ) )
    {
        if(carattere == 10)
            c_lines=c_lines+1;
        if(carattere == ((int)numeri[da_trovare]))
            positione = ftell(fn); //tell position
    }
    if(positione == 0)
        printf("\nNumero cercato non trovato!\n");
    else
        printf("\nNumero cercato e stato trovato nella positione %ld,riga %d! \n",positione,c_lines);

    
    return 0;
}
