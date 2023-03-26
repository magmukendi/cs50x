#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


// This is a file that take the content of a digital camera and recover them into different image files.

typedef uint8_t BYTE;
int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{

    //check if the program is returned with one argument, else return 1
    if (argc != 2)
    {
        printf("Correct usage: ./recover [forensic image]\n");
        return 1;
    }

    FILE *forensic = fopen(argv[1], "r");

    //check if the given forensic file can be opened.

    if (forensic == NULL)
    {
        printf("Forensic image cannot be opened\n");
        return 1;
    }

    int file_count = 0;

    //create a pointer that hold the file name

    FILE *img = NULL;
    BYTE buffer[BLOCK_SIZE];

    char *filename;
    while (fread(buffer, BLOCK_SIZE, 1, forensic) == 1)
    {
        // check if it is the beginning of a jpeg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
         filename = malloc(9);
            // update the filename string
            sprintf(filename, "%03i.jpg", file_count);
            if (file_count != 0)
            {
                fclose(img);
                printf("%s is closed\n", filename);
            }
            // open the file
            img = fopen(filename, "w");
            fwrite(&buffer, BLOCK_SIZE, 1, img);
            free(filename);
            file_count++;
        }
        else
        {
            if (img != NULL)
            {
                fwrite(buffer, BLOCK_SIZE, 1, img);
            }
            printf("This is not a header\n");
        }
    }
    fclose(img);
    fclose(forensic);
    return 0;
}
