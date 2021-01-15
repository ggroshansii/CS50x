#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int startSize;
    int endSize;



    // TODO: Prompt for start size
    do
    {
        startSize = get_int("Start size? \n");
    }
    while (startSize < 9);



    // TODO: Prompt for end size
    do
    {
        endSize = get_int("End Size? \n");
    }
    while (endSize < startSize);



    // TODO: Calculate number of years until we reach threshold
    int born = startSize / 3;
    int passedAway = startSize / 4;

    int count = 0;



    while (startSize < endSize)
    {
        born = startSize / 3;
        passedAway = startSize / 4;
        startSize += born - passedAway;
        count++;
    }


    // TODO: Print number of years
    printf("Years: %i", count);

}