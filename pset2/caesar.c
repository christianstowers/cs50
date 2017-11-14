/*
cs50 pset2 Caesar
11/13/2017 15:20
currently adds 1 to each ascii number then prints
the cipher. still needs the arg check at the beginning
and the logic for keeping things alphabetical.
*/

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main( int argc,string argv[])
{
    if (argc != 2)
    {
        printf("Less or more than 2 arguments given, exiting...\n");
        return 1;
    }
    ////////other dude's code////////
    int k;

    if (argc == 2)
    {
        k = atoi(argv[1]);
        printf("argv = %i\n", k);
    }
    else
    {
        printf("Usage: ./caesar k\n");
    }
    /////////end of other dude's code/////////

    printf("Plaintext: ");
    string a = get_string();
    int ascii[strlen(a)];
    printf("ASCII numbers: ");

    //ASCII numbers loop
    for(int i = 0; i < strlen(a); i++)
    {
        ascii[i] = a[i];
        printf("%i ", ascii[i]);
    }
    printf("\n");

/* *****need to use isupper() or islower()
        then subtract 65 or 97 respectively (why?)

1. Subtract your ASCII character by 65. It'll lead to output between 0 to 25 (inclusive).
2. Add the displacement (shift distance).
3. Take a modulo 26, to wrap around your result.
4. Add 65 back again.

*/

    char n[' '];

    printf("Conversion: ");
    //Dummy cipher loop
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == ' ') //preserves spaces
        {
            n[i] = a[i];
        }
        else
        {
            n[i] = a[i] + 1;
            printf("%i ", n[i]);
        }
    }
    printf("\n");

    printf("Ciphertext: ");
    for(int i = 0; i < strlen(a); i++)
    {
        printf("%c", n[i]);
    }
    printf("\n");
}

