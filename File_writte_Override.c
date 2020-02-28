#include <stdio.h>
#include <string.h>
#include <time.h>
#define FN "new_file.txt"
#define L 20
int main()
{
    //rename("mio_file2.txt", "mio_file.txt");
    char writte[3000];
    FILE *fk=NULL;
    //int answer=0;
    fk=fopen(FN,"w+");
    if(fk==NULL)
    {
        printf("Error in apertura!\n");
        return 1;
    }
    printf("Inserisci text (Max 3000): ");
    gets(writte);
    fputs(writte,fk);
    printf("\n");
    //answer = menu_scrittura();
    rename("xxx","mio_file.txt");
    fclose(fk);
    fk=NULL;
    return 0;
}
