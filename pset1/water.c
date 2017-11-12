#include <stdio.h>
#include <cs50.h>

int n;
int bottles;

int main(void)
{
    printf("Minutes: ");
    do
    {
        n = get_int();
        bottles = (n * 192) / 16;
        printf("Bottles: %i \n", bottles);
    }
    while (n < 0);
}
