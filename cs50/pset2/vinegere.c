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
 representing the same number from 0-25 (A and a = 0, etc.).
 So, make all characters in k either upper or lower case,
 then provide the math from caesar to represent 0-25.

 only apply the encryption to alphabetical characters, meaning
 preserve spaces, punctuation, and case.

*/

//new code
int main (int argc, string argv[])
{
    //check if there are more or less than 2 arguments
    if (argc != 2)
    {
        printf("Input exactly one keycode. exiting...\n");
        return 1;
    }

    int j = strlen(argv[1]);

    //make sure each character is a letter
    for (int i = 0; i < j; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Letters only. exiting...\n");
            return 1;
        }
    }

    //get plaintext from user and store in a variable
    printf("Plaintext string: ");
    string plaintext = get_string();

    //now to print the cipher
    //make sure the argv[1] loop loops through each letter and wraps
    int k = 0;


    //check the case combinations for plaintext and the key
    for (int i = 0; i < j; i++)
    {
        //loops through the key
        k = k % strlen(argv[1]);

        if (isalpha(plaintext[i]))
        {

            if (islower(plaintext[i]) && islower(argv[1][k]))
            {
                printf("%c", (((plaintext[i] - 97) + (argv[1][k] - 97)) % 26) + 97);
                k++;
            }

            else if (isupper(plaintext[i]) && islower(argv[1][k]))
            {
                printf("%c", (((plaintext[i] - 65) + (argv[1][k] - 97)) % 26) + 65);
                k++;
            }

            else if (islower(plaintext[i]) && isupper(argv[1][k]))
            {
                printf("%c", (((plaintext[i] - 97) + (argv[1][k] - 65)) % 26) + 97);
                k++;
            }

            else if (isupper(plaintext[i]) && isupper(argv[1][k]))
            {
                printf("%c", (((plaintext[i] - 65) + (argv[1][k] - 65)) % 26) + 65);
                k++;
            }
        }

        else
        {
            printf("%c", argv[1][i]);
        }
    }
    printf("\n");
}

/*
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
*/


