#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
        char buffer1[8] = {'T','K','A','I','P','E','R','\0'};
        char buffer2[8] = {'T','K','A','I','P','E','2','\0'};

        strcpy(buffer2, argv[1]);
        printf("\nBuffer2: %s\n", buffer2);
        printf("Buffer1: %s\n\n", buffer1);

        system(buffer1);
        return 0;
}
