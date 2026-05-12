#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person ;

int main(void)
{
    person people[3];

    people[0].name = "Kelly";
    people[0].number = "+1-356-632-2100";

    people[1].name = "David";
    people[1].number = "+1-234-345-3455";

    people[2].name = "John";
    people[2].number = "+1-234-321-2345";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}