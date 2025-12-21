#include "write_file.h"
#include <stdio.h>

void writefile(){
    FILE *pFile = fopen("files/poem.txt", "w");

    char file[] = "THIS IS A POEM\nIT'S NOT A DUET\nSO WEPT NOT??";
    
    fprintf(pFile, "%s", file );
    printf("New file created\n");
    fclose(pFile);
}