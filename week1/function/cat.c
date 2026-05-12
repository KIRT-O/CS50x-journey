#include <stdio.h>
#include <cs50.h>
//prototype for cat function
void cat(int times);
int get_n(void);

int main(void)
{
    int n = get_n();

    cat(n);
}

int get_n(void)
{
    int n;
    do
    {
        n = get_int("what's n ? ");
    }
    while (n < 0);
    return n;
}

void cat (int times) 
{
    for (int i = 0; i < times; i++) 
    {
        printf("meow\n");
    }
}