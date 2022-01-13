#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int option;
    char word [200];
    int i;
    int menu;
    char temp;


 while (option != 0)
    { 
        system("clear");
        printf("*************¡WELCOME!*************\n\nPlease select an option:\n\n"); 
        printf("1. Convert to lowercase\n2. Convert to uppercase\n3. Type a word to intercalate letters between upercase and lowercase\n"); 
        printf("4. Please type a word to replace a letter of that word for another\n5. Execute a command in console\n6. Exit\n\n"); 
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            while (menu != 2)
            {
                system("clear");
                printf("Please type the word to convert it to lowercase: ");
                scanf("%s",word);
                 for (int i = 0, n = strlen(word); i < n; i++)
                 {
                        if (word[i] >= 'A' && word[i] <= 'Z')
                        {
                            printf("%c", word[i]+32);
                        }
                        else
                        {
                            printf("%c", word[i]);
                        }
                        
                 }                    
                        printf("\n");
                        printf("Back to menu type [1] or try again type [0]: ");
                        scanf("%d",&menu);
                        {
                        if (menu == 1)
                        {
                            break;
                        }
                        else if (menu == 0)
                        {
                            continue;
                        }
                        else
                        {
                            printf("Type something valid\n");
                            printf("Back to menu type [1] or try again type [0]: ");
                            scanf("%d",&menu);
                        }
                        }
            } break;   
            printf("\n");    
                    
                    

            case 2:
            while (menu != 2)
            {
        
                system("clear");
                printf("Please type the word to convert it to uppercase: ");
                scanf("%s",word);
                 for (int i = 0, n = strlen(word); i < n; i++)
                 {
                        if (word[i] >= 'a' && word[i] <= 'z')
                        {
                            printf("%c", word[i]-32);
                        }
                        else
                        {
                            printf("%c", word[i]);
                        }
                        
                 }
                        printf("\n");
                        printf("Back to menu type [1] or try again type [0]: ");
                        scanf("%d",&menu);
                        {
                        if (menu == 1)
                        {
                            break;
                        }
                        else if (menu == 0)
                        {
                            continue;
                        }
                        else
                        {
                            printf("Type something valid\n");
                            printf("Back to menu type [1] or try again type [0]: ");
                            scanf("%d",&menu);
                        }
                        }
            }        
                    break;

            case 3:
                system("clear");
                printf("Please type a word to intercalate letter: ");
                scanf("%s",word);
                 for (int i = 0, n = strlen(word); i < n; i++)
                 {
                        if (word[i] >= 'a' && word[i] <= 'z')
                        {
                            printf("%c", word[i]-32);
                        }
                        else
                        {
                            printf("%c", word[i]);
                        }
                        
                 }

                    printf("\n");

            case 4:
             while (menu != 2)
            {
            system ("clear");
            scanf("%c", &temp);
            char word4[200];
            printf("Type the word you want to edit, the letter you want to replace and the character you want to put separate by space.\nExample: (Arcade a *): ");
            scanf("%[^\n]", word4);
            char * word = strtok(word4," ");
            char * letter = strtok(NULL," ");
            char * character = strtok(NULL," ");
            printf("\nYour result  is: ");

            for (int i = 0; i < strlen(word4); i++)
            {
                if (word4[i] == *word)
                {
                    printf("%c", (word4[i] = *character));
                }
                else
                {
                    printf("%c", word4[i]);
                }
            }
            
                    printf("\n");
                        printf("Back to menu type [1] or try again type [0]: ");
                        scanf("%d",&menu);
                        {
                        if (menu == 1)
                        {
                            break;
                        }
                        else if (menu == 0)
                        {
                            continue;
                        }
                        else
                        {
                            printf("Type something valid\n");
                            printf("Back to menu type [1] or try again type [0]: ");
                            scanf("%d",&menu);
                        }
                        }
            }        
                    break;
            case 5:
            while (menu != 2)
            {
                system("clear");
                system("");
                printf("Execute a command line:\n ");
                scanf("%s",word);

                printf("\n");
                printf("Back to menu type [1] or try again type [0]: ");
                scanf("%d",&menu);
                    {
                        if (menu == 1)
                        {
                            break;
                        }
                        else if (menu == 0)
                        {
                            continue;
                        }
                        else
                        {
                            printf("Type something valid\n");
                            printf("Back to menu type [1] or try again type [0]: ");
                            scanf("%d",&menu);
                        }
                        }
            }
            break;

            case 6:
            system("clear");
                
         } 
      
    }

}