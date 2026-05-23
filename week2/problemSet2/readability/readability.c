#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int checkInput(string index);

void grade(string result);

int main(void)
{
    string text = get_string("Text: ");
    
    grade(text);

}

int checkInput(string index)
{
    int letters = 0, words = 0, sentence = 0;
    for (int i = 0, n = strlen(index); i < n; i++)
    {
        if (isalpha(index[i]))
        {
            letters++;
        }
        else if (isspace(index[i]))
        {
            words++;
        }
        else if (index[i] == '.' || index[i] == '!' || index[i] == '?')
        {
            sentence++;
        }
    }
    words ++;
    float L = (letters / (float)words) * 100;
    float S = (sentence / (float)words) * 100;
    float result = 0.0588 * L - 0.296 * S - 15.8;
    return round(result);
}

void grade(string result)
{
    int n = checkInput(result);
    if (n < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (n >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", n);
    }
}