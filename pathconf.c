#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("_PC_LINK_MAX -nombre max de liens- %ld\n",pathconf("file",_PC_LINK_MAX));
 //   printf("_PC_MAX_CANON  %ld\n",pathconf("terminal name",));
 //   printf("_PC_MAX_INPUT  %ld\n",pathconf("terminal name",));
    printf("_PC_NAME_MAX -longueur max du nom de fichier- %ld\n",pathconf("file",_PC_NAME_MAX));
    printf("_PC_PATH_MAX -longueur max du chemin d'acces relatif- %ld\n",pathconf("file",_PC_PATH_MAX));

    return EXIT_SUCCESS;
}
