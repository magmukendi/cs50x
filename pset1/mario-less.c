#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }

    //While loop to check the user's input
    while (n < 1 || n > 8);


    for (int i = 0; i < n; i++)
    {
        //for loop to print the white space
        for (int l = n - 1; l > i; l--)
        {
            printf(" ");
        }

        //for loop to print the #
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        //printing a new line
        printf("\n");
    }

}
