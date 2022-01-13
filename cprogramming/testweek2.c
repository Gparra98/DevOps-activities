#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{

    int option;
    int n2;
    int random;
    string word1;
    string word2;
    int p;
    int tryagain = 0;


    while (option !=0 )
    {
    system("clear");
    if (p == 1)
    {
    printf("        ¡WELCOME!\n\n");
    printf("Please select an option:\n\n");
    printf("1. IP\n2. ASCII\n3. Random number\n4. Words\n5. Exit\n");
    }
    else if (p == 0)
    {
        break;
    }

    option = get_int(" ");

        system ("clear");

        if (option == 5)
        {
            break;
        }

        if (option == 1)
        {
            printf ("Usted es un pete\n");
            p = get_int("Do you want to continue? \nType 1 or 0 to exit");

                /*    printf("Do you want to continue? ");

        char end = get_char("Type E key to close or C key to continue "); 

        if (end == 'C' || end == 'c')
        {

        continue;
        }

        else if (end == 'E' || end == 'e')
        {
            break;
        }

        else 
        {
            printf("Type a correct key");
        }
*/

        }

        else if (option == 2)
        {

            n2 = get_int("Enter a number to convert it to ASCII: ");
            printf("\nThis %i number is equal to %c in ASCII\n", n2, n2);

                    p = get_int("Do you want to continue? \nType 1 or 0 to exit");

        //char end = get_char("Type E key to close or C key to continue "); 

        /*if (end == 'C' || end == 'c')
        {

        continue;
        }

        else if (end == 'E' || end == 'e')
        {
            break;
        }

        else 
        {
            printf("Type a correct key");
        }*/

        }

        else if (option == 3)
        {
            srand(time (NULL));
            random = rand() % 6;
            while (random == 0)
            {
                random = rand() % 6;
            }
            printf("Your randonm number is %i: ", random);

             /*       printf("Do you want to continue? ");

        char end = get_char("Type E key to close or C key to continue "); 

        if (end == 'C' || end == 'c')
        {

        continue;
        }

        else if (end == 'E' || end == 'e')
        {
            break;
        }

        else 
        {
            printf("Type a correct key");
        }*/

        }

        else if (option == 4)
        {
            word1 = get_string("Type the first word: ");
            word2 = get_string("Type the second word: ");
            string result = strcat( word1 , word2);
            printf("\n%s\n", result);

         /*           printf("Do you want to continue? ");

        char end = get_char("Type E key to close or C key to continue "); 

        if (end == 'C' || end == 'c')
        {

        continue;
        }

        else if (end == 'E' || end == 'e')
        {
            break;
        }

        else 
        {
            printf("Type a correct key");
        }*/

        }

    }
   
}