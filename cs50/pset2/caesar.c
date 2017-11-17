/*
This code takes in a command line argument and uses that as a key
for generating ciphertext for the string given by the user.
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

    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("No negative keys, please.\n");
        return 1;
    }

    printf("plaintext: ");
    string a = get_string();

    printf("ciphertext: ");
    int cipher[strlen(a)];
    for(int i = 0; i < strlen(a); i++)
    {
        if(isalpha(a[i]))
        {
            if(a[i] == ' ')
            {
                cipher[i] = 32;
            }

            if(isupper(a[i]))
            {
                a[i] = (((a[i] - 65) + k) % 26) + 65;
                cipher[i] = a[i];
                printf("%c", cipher[i]);
                //printf("A");
            }

            if(islower(a[i]))
            {
                a[i] = (((a[i] - 97) + k) % 26) + 97;
                cipher[i] = a[i];
                printf("%c", cipher[i]);
                //printf("a");
            }
        }
        else
        {
            printf("%c", a[i]);
        }
    }
    printf("\n");
}

