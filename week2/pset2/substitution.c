// Code to  encode a message by proving a key a a CLI argument.

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validate(string argv, int argc);

int main(int argc, string argv[])
{


    if (validate(argv[1], argc) == 1)
    {
        return 1;
    }
    string message = get_string("plaintext: ");
    int length = strlen(message);
    char cypher[length];
    //printf("%s\n", cypher);





    // This convert the key into upper case, if the user inputs it as lower case.
    for (int m = 0, n = strlen(argv[1]); m < n; m++)
    {
        if (islower(argv[1][m]))
        {
            argv[1][m] = toupper(argv[1][m]);
        }
    }

    // Encode the cypher character by character
    for (int i = 0; i <= strlen(message); i++)
    {
        // check if the character is a letter
        if (isalpha(message[i]) > 0)
        {
            // check if t he character is a lowercase
            if (islower(message[i]))
            {
                cypher[i] = argv[1][message[i] % 97] + 32;
            }
            // check if the character is a uppercase
            else if (isupper(message[i]))
            {
                cypher[i] = argv[1][message[i] % 65];
            }
        }
        // handle the character by keeping it the same if it is not a alphabetic character at all.
        else
        {
            cypher[i] = message[i];
        }
    };

    /// Print the cypher
    printf("ciphertext: ");


    for (int i = 0; i < length; i++)
    {
        // print the cypher character by character
        printf("%c", cypher[i]);
    }

    // print a new line.
    printf("\n");
}



// This function checks whether the key is valid.
int validate(string argv, int argc)
{
    // In case the user does not input any key or input more than one argument.
    if (argc != 2)
    {
        printf("Use ./substitution KEY\n");
        return 1;
    }
    else if (argc == 2)
    {
        // in case the user input less or more than 26 characters.
        if (strlen(argv) != 26)
        {
            printf("Key should have 26 characters\n");
            return 1;
        }


        else
        {

            for (int i = 0, n = strlen(argv); i < n; i++)
            {
                // In case one of the character is not a letter
                if (!isalpha(argv[i]))
                {
                    printf("%c: Check the key again\n", argv[i]);
                    return 1;
                }
                int count = 0;


                for (int j = 0; j <= n; j++)
                {
                    // In case there are some duplicate,
                    if (count > 1)
                    {
                        printf("there are some duplicate\n");
                        return 1;
                    }
                    if (argv[i] == argv[j])
                    {
                        count ++;
                    }
                }
            }
        }
    }
    return 0;
}

