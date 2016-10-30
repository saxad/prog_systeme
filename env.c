#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    extern char ** environ;
    
    while(environ != NULL )
    {
            printf("%s\n",*environ);
            environ++;
    }
    

    return EXIT_SUCCESS;
}
