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
    int menu;

    system ("clear");
            printf("        ¡WELCOME!\n\n");
            printf("Please select an option:\n\n");
            printf("1. Validate an IP address\n2. Convert a number to ASCII\n3. Gives you a random number\n4. Type 2 words\n5. Exit\n");
            option = get_int(" ");

    while (option != 0 )
    { 
        

            if (option == 1)
            {
                system ("clear");
                printf("Hola\n");
                menu = get_int("\nBack to menu type 1 or 0 to try again");

                if (menu == 1)
                {
                    system ("clear");
                    printf("        ¡WELCOME!\n\n");
                    printf("Please select an option:\n\n");
                    printf("1. Validate an IP address\n2. Convert a number to ASCII\n3. Gives you a random number\n4. Type 2 words\n5. Exit\n");
                    option = get_int(" ");
                }

                    else if (menu == 0)
                    {
                        continue;
                    }
                
            }

            else if (option == 2)
            {
                 n2 = get_int("Enter a number to convert it to ASCII: ");
                 printf("\nThis %i number is equal to %c in ASCII\n", n2, n2);
                 menu = get_int("\nBack to menu type 1 or 0 to try again");

                if (menu == 1)
                {
                    system ("clear");
                    printf("        ¡WELCOME!\n\n");
                    printf("Please select an option:\n\n");
                    printf("1. Validate an IP address\n2. Convert a number to ASCII\n3. Gives you a random number\n4. Type 2 words\n5. Exit\n");
                    option = get_int(" ");
                }

                    else if (menu == 0)
                    {
                        continue;
                    }
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
            menu = get_int("\nBack to menu type 1 or 0 to try again");

                if (menu == 1)
                {
                    system ("clear");
                    printf("        ¡WELCOME!\n\n");
                    printf("Please select an option:\n\n");
                    printf("1. Validate an IP address\n2. Convert a number to ASCII\n3. Gives you a random number\n4. Type 2 words\n5. Exit\n");
                    option = get_int(" ");
                }

                    else if (menu == 0)
                    {
                        continue;
                    }
            }

            else if (option == 4)
            {
                
                word1 = get_string("Type the first word: ");
                word2 = get_string("Type the second word: ");
                string result = strcat( word1 , word2);
                printf("\n%s\n", result);
                menu = get_int("\nBack to menu type 1 or 0 to try again");

                if (menu == 1)
                {
                    system ("clear");
                    printf("        ¡WELCOME!\n\n");
                    printf("Please select an option:\n\n");
                    printf("1. Validate an IP address\n2. Convert a number to ASCII\n3. Gives you a random number\n4. Type 2 words\n5. Exit\n");
                    option = get_int(" ");
                }

                    else if (menu == 0)
                    {
                        continue;
                    }
            }

            else if (option == 5)
            {
                system ("clear");
                break;
            }

            else 
            {
                printf("Please type a correct number\n");
            }
    }
}
