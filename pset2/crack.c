/*
WORK IN PROGRESS; NOT FINISHED
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h> // provides atoi
#include <string.h>
#include <ctype.h> // provides toupper
#include <crypt.h>

#define _XOPEN_SOURCE
#include <unistd.h>

/*
READ:
crypt() function: http://pubs.opengroup.org/onlinepubs/009695399/functions/crypt.html
    :   http://www.gnu.org/software/libc/manual/html_node/crypt.html
salt: random data as an additional input to a one-way function that hashes a password or passphrase
one-way function:
    :one-to-one:
    :computational complexity theory:
    :
nonce:
dictionary attacks:
cryptographic hash function:
rainbow tables:
key stretching:
*/


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