//Version 2: passing args at the command line

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string is_triangle(int a, int b, int c);

int main(int argc, char * argv[])
{
    printf("argc = %d\n", argc);

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    string x = is_triangle(a, b, c);
    printf("%s\n", x);

}



string is_triangle(int a, int b, int c)
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