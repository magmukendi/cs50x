#include <cs50.h>
#include <stdio.h>
#include <string.h>

int twoDigit(long a, int *count);
string checkCard(int firstDigit, int count);
void addDigit(int count, long num, int *sumOdd, int *sumEven);

int main(void)
{
    long card;
    int totalSum, sumOdd, sumEven, count = 0;
    int firstDigit;
    card = get_long("Number: ");
    long num = card;

    // this is a loop through all the digit of the credit card number until the last number.
    while (num != 0)
    {
        // this block of code take the two first digit of the card number and save it to the firstDigit variable
        if (num >= 10 && num <= 99)
        {
            firstDigit = num;
        }
        addDigit(count, num, &sumOdd, &sumEven);
        num = num / 10;
        count ++;
    }

    totalSum = sumOdd + sumEven;

    // check if the card is valid
    if (totalSum % 10 == 0)
    {
        printf("%s\n", checkCard(firstDigit, count));
    }
    else
    {
        printf("INVALID\n");
    }
}


void addDigit(int count, long num, int *sumOdd, int *sumEven)
{
    //A function that sums the digits of the credit card numbers.

    // printf( "Num: %ld\n", num );
    // printf( "count: %d\n", count );

    if (count % 2 == 0)
    {
        *sumEven += num % 10;
    }

    else
    {
        int c = (num % 10) * 2;
        while (c != 0)
        {
            *sumOdd += c % 10;
            c = c / 10;
        }

    }
}

string checkCard(int firstDigit, int count)
{
    // This function check if the card number is a valid AMEX, MASTER, VISA card or is invalid.
    string result ;
    if ((count == 13 || count == 16) && (firstDigit >= 40 && firstDigit <= 49))
    {

        result = "VISA";
    }
    else if (count == 16 && (firstDigit >= 51 && firstDigit <= 55))
    {
        result = "MASTERCARD";
    }
    else if (count == 15 && (firstDigit == 34 || firstDigit == 37))
    {
        result = "AMEX";
    }
    else
    {
        result = "INVALID";
    }
    // return the detail about the card.
    return result;
}

