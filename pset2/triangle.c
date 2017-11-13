//Version 1: creating and calling functions example

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string valid_triangle(int a, int b, int c);

int main (void)
{
    printf("Side 1: ");
    int a = get_int();

    printf("Side 2: ");
    int b = get_int();

    printf("Side 3: ");
    int c = get_int();

    string result = valid_triangle(a, b, c);
    printf("%s\n", result);
}





string valid_triangle(int a, int b, int c)
{
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}
