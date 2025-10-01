#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *fp;

    fp = fopen("myfile.txt", "r");
    
    if (fp == NULL) 
        printf("Error: Cannot open file! (%s)\n", strerror(errno));
    } else {
        printf("File opened successfully!\n");
        fclose(fp);
    }

    return 0;
}
