#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long credit = get_long("Number: ");
    long tempCredit = credit;
    int sum = 0;
    bool alte = false ;
    int count = 0 ;

    while (tempCredit > 0)
    {
        int digit = tempCredit % 10 ;
        if (alte)
        {
            int product = digit * 2;
            sum += (product %10) + (product / 10);
        }
        else
        {
            sum += digit;
        }
        alte = !alte;
        tempCredit /=10 ;
            count ++;
    }
    if (sum % 10 == 0 )
    {
        long z ;
        string j ;
        long i = credit ;
        // check if it's American (15)
        while (i >= 100)
        {
            i /= 10;
        } 
        if ((i == 34 || i == 37) && count == 15)
        {
            j = "AMEX";
            printf("%s\n", j);
        }
        // check if it's master(16)
        else if ((i <= 55 && i >= 51) && count == 16)
        {
            j = "MASTERCARD";
            printf("%s\n", j);
        }
        else if ((i / 10 == 4) && (count == 13 || count == 16))
        {
            j = "VISA";
            printf("%s\n", j);
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
    printf("INVALID\n");
    }
}