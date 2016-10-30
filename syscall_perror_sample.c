#include <stdio.h>
#include <sys/syscall.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


int main(int argc, char **argv)
{

        long i;
        i = syscall(SYS_write,6,"hello\n",6);

        if(i == -1)
        {
         //   perror("syscall");
    
            char *error_msg;

            error_msg = strerror(errno);

            printf("message d'erreur: %s\n",error_msg);
        }

        return EXIT_SUCCESS;
}
