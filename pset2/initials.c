
        /*
        the idea is to detect spaces between words and print
        the following index, i.e. letter. This is assuming
        index following a space is a letter.
        */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //get user input
    string name = get_string();

    //print the first initial
    printf ("%c", toupper(name[0]));

    //store string length in a variable
    int len = strlen (name); //saves memory instead of counting every loop

    //loops i times equal to the string length
    for (int i = 0; i < len; i++)
    {
        //finds the first letter of each new word
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            //prints the identified letter
            printf ("%c", toupper(name[i + 1]));
        }
    }
    //clear the line at after printing all necessary letter
    printf("\n");
}