#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //this is a variable that store the input from the user;
    string name = get_string("Whats your name? ");

    //this prints Hello followed by the name of the user
    printf("hello, %s\n", name);
}
