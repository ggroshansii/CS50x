#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declaring name variable
    string name = "";

    //prompting user for his/her name
    name = get_string("What is your name?\n");

    //printing user's name
    printf("hello, %s\n", name);
}