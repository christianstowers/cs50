/*
WORK IN PROGRESS; NOT FINISHED
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h> // provides atoi
#include <string.h>
#include <ctype.h> // provides toupper

#define _XOPEN_SOURCE
#include <unistd.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("More than one argument given, exiting...");
        return 1;
    }

    string p = argv[1];

    //crypt takes two arguments: key, salt
    //salt is the first 2 characters of the password
    // DO WHAT ZAMAYLA SAYS

    //iterate over a 1-character array first and figure
    //out how to encrypt it, etc.

    for (int i = 0; i < strlen(p); i++)
    {
        printf ("%c\n", toupper(p[i]));
    }
}