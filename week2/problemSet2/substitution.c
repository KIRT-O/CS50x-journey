#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void replaceLetters(string key, string userInput);

// To make the user input a key
int main(int argc, string argv[])
{
    //getting the message we need to ecrypt
    string userInput;
    // to force the user to use a key with 26 letters
    if (argc != 2 )
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    // to count the length of the letters
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    for (int i = 0; i < 26; i++)
    {
        // to stop the program if the key has invalid letters
        if (!isalpha(key[i]))
        {
            return 1;
        }
        // to stop the program if the key include duplicate letters
        for (int j = i + 1; j < 26; j++)
        {
            if (tolower(key[i]) == tolower(key[j]))
            {
                return 1;
            }
        }
    }
    // getting the message
    userInput = get_string("plaintest: ");
    // crypting it
    printf("ciphertext: ");
    replaceLetters(key, userInput);
}

void replaceLetters(string key, string userInput)
{
    // we will count the user length
    int n = strlen(userInput);
    // we will take every letter the user has entered
    for (int i = 0; i < n; i++)
    {
        int index = userInput[i];
        // seeing if the letter is uppercase so we can know the letter from the ASCII
        if (isupper(userInput[i]))
        {
            // "- A" to see the letter's order in Alphabet (65 - number of the letter = order in alphabet)
            index = userInput[i] -'A';
            printf("%c", toupper(key[index]));
        }
        // the same but for lowercase
        else if (islower(userInput[i]))
        {
            // "- a" to see the letter's order in Alphabet (97 - number of the letter = order in alphabet)
            index = userInput[i] - 'a';
            printf("%c", tolower(key[index]));
        }
        else
        {
            // if the user enter something like "*^%^$#@" it will be printed as it is without ecrypting
            printf("%c", userInput[i]);
        }
    }
    printf("\n");
}