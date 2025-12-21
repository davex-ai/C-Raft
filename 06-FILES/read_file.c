#include "read_file.h"
#include <stdio.h>

void readfile(){
   
    FILE *pFile = fopen("files/poem.txt", "r");
    char buffer[1024] = {0};


    do
    {
        printf("%s", buffer);
    } while (fgets(buffer, sizeof(buffer), pFile) != NULL);
    

    fclose(pFile);
}