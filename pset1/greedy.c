/*
CS50 Pset1: Greedy
This program finds the least number of coins to return for the input change expected.
*/
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;

    do
    {
    printf("How much change is owed? ");
    change = get_float();
    //printf("Change: %f\n", change); //test line
    }
    while(change < 0);
    
    /***IMPORTANT***
        this next line is the crux of this pset. floats aren't represented correctly by
        a computer (READ: base 10(real life) vs base 2). For example, 4.2 may actually 
        be stored as 4.199999987 or something similar, meaning your math will be slightly
        off. Since our current problem deals in dollars and cents, rounding takes care 
        of any imprecision found in base 2 storing and whatnot. Storing our newly rounded 
        "change" in an int allows the coin value representations to also be ints. Cheers.
    */
    int x = roundf(change * 100); 
    //printf("x = %i\n", x); //test line

    while(x > 0)
    {
        //quarters
        while(x >= 25)
        {
            x = x - 25;
            coins++;
            //printf("quarter: %i\n", x); //test line
        }

        //dimes
        while(x >= 10)
        {
            x = x - 10;
            coins++;
            //printf("dime: %i\n", x); //test line
        }

        //nickels
        while(x >= 5)
        {
            x = x - 5;
            coins++;
            //printf("nickel: %i\n", x); //test line
        }

        //pennies
        while(x <= 4 && x > 0)
        {
            x = x - 1;
            coins++;
            //printf("penny: %i\n", x); //test line
        }
        break;
    }

    printf("%i\n", coins);
}