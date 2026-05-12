#include <stdio.h>
#include <cs50.h>
// to count the average of the scores inside of the array
float getAvg(int size, int grade[]);
// to make the user enter an ammount of scores inside of the array
void getScores(int size, int grades[]);
// to get the highest score in the array
int getMax(int theMark, int isMax[]);

int main(void) 
{
    int n = get_int("Enter the number of the Students: ");
    int marks;
    int scores[n];

    getScores(n, scores);

   printf("The average is: %f\n", getAvg(n, scores));
   printf("The highest score is : %i\n", getMax(n, scores));
}

float getAvg(int size , int grade[]) 
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += grade[i];
    }
    return sum / (float) size;
}

void getScores(int size, int grades[])
{
    for (int i = 0; i < size; i++)
    {
        grades[i] = get_int("Enter the score of the student %i: ", i + 1);
    }
}

int getMax(int size, int isMax[])
{
   
    int max = isMax[0];
    for (int n = 0; n < size; n++)
    {
        if (max < isMax[n]) 
        {
            max = isMax[n];
        }
    }
    return max;
}