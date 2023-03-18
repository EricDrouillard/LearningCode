#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Prompting the  user for a starting number of llamas
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // Prompting user for an ending number of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    
    // How many years it will take to get to the goal
    int years = 0;
    while (start < end)
    {
        start += start/12;
        years++;
    }
    printf("Years: %i\n", years);
}
