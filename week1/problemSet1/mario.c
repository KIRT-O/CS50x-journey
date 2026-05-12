#include <stdio.h>
#include <cs50.h>

void block(int h);
void space(int s);

int main(void)
{
    int height ;
    do
    {
     height = get_int("height (from 1-8): ") ;
    }
    while (height > 8 || height < 0) ;
    int j = 1;
    int blank = height ;
    blank -- ;
    while (height >= j) 
    { 
    
     space(blank);
     block(j);
     space(2);
     block(j);
     printf("\n");
     j++ ;
     blank-- ;
    }
}

void block(int h)
{
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
}

void space(int s)
{
    for (int i = 0; i < s; i++)
    {
        printf(" ");
    }
}