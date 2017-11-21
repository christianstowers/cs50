#include <stdio.h>
#include <stdlib.h> //provides atoi
#include <cs50.h>
#include <ctype.h> //provides toupper etc.
#include <string.h>

//WORK IN PROGRESS//

/*
 must accept a single command-line argument: a keyword, k,
 composed entirely of alphabetical characters.

 if executed with no command-line arg or with more than one
 or contains non-alphabetical characters, print an error and
 return 1.

 otherwise, prompt user for plaintext string, encrypt per
 Vigenère’s cipher with k, and print result.

 concerning characters in k, treat upper and lower cases as
 representing the same number from 0-25 (A and a = 0, etc.)

 only apply the encryption to alphabetical characters, meaning
 preserve spaces, punctuation, and case.

*/

//caesar.c code for reference
int main(int argc,string argv[])
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
