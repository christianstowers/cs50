
        /*
        the idea is to detect '\0's and print the
        following index, i.e. letter. This is assuming
        index following a \0 is a letter.

        @7:19: try two variables: one int for a counter
        in the while loop, and one string/int in the nested
        while/for loop for grabbing letters accorsing to
        the counter.
        */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf ("What is your name: ");
    string name = get_string();

    if (name != NULL)
    {
        //char initials[] = ""; //try adding each initial to this array
        printf ("%c", toupper(name[0]));
        int len = strlen (name); //saves memory instead of counting every loop
        int n = 0; //int counter in outer loop

        while (n < len)
        {
            if (name[n] == ' ')
            {
                printf ("%c", toupper(name[n + 1]));
            }
            n++;
        }
        printf("\n");
    }
}