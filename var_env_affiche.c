#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
        char *valeur;
        if(argc > 0)
        {

                valeur = getenv(argv[argc-1]);
                printf("%s=%s\n",argv[argc-1],valeur);

        }
        else("nombre de parametres incorrecte");

        return EXIT_SUCCESS;
}
