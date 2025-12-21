#include "write_file.h"
#include <stdio.h>

void writefile(){
    FILE *pFile = fopen("files/c-file.txt", "w");

    char file[] = "This Is a txt File.\n ";
    
    fprintf(pFile, "%s", file );
    printf("New file created");
    fclose(pFile);
}