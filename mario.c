#include <stdio.h>
#include <cs50.h>

int main(void)
{


    int input;

    do
    {
        input = get_int("Please input number:\n ");
    }
    while (input < 1 || input > 8);

    //overall loop
    for (int i = 1; i <= input; i++)
    {

        for (int j = input; j > i; j--)
        {
            printf(" ");
        }
        for (int g = 0; g < i; g++)
        {
            printf("#");
        }
        printf("  "); //middle of triangle

        for (int g = 0; g < i; g++)
        {
            printf("#");
        }
        for (int j = input; j > i; j--)
        {
            printf("");

        }
        printf("\n"); //line is now complete, time for next overall iteration
    }
}