#include <stdio.h>
#include <stdlib.h> //provides atoi
#include <cs50.h>
#include <ctype.h> //provides toupper etc.
#include <string.h>

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
    int k = 0;


    //check the case combinations for plaintext and the key

    //8:10am : only printing three characters :(
    //6:58pm : ...oh. use strlen(plaintext), not strlen(argv[1]) in for loop. oops.
    int l = strlen(plaintext);

    printf("ciphertext: ");

    for (int i = 0; i < l; i++)
    {
        //loops through the key continuously
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
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
