#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void pr_pathconf(char *path, int name, char * message)
{
        printf("%s\n",message);
        long i = pathconf(path,name);
        if(i == -1)
        {
                perror("pathconf");
                return;
        }

        else 
        {
                printf("%ld\n",i);
                return;
        }
}

int main(int argc, char **argv)
{

        char * chemin;
        chemin = (char*) malloc(256);
        printf("chemin . . .\n");
        scanf("%s",chemin);
        pr_pathconf(chemin,_PC_LINK_MAX,"nombre de lien maximal");
        free(chemin);
        return EXIT_SUCCESS;
}    


