#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define WELCOME_MSG "WELCOME TO MY RPG \n"

int main()
{
    printf(WELCOME_MSG);

    //Initialize game variables
    char *char_name[25];
    int char_age;

    printf("*You wake up in the middle of a deep forest, surrounded with small creatures that can talk your language* \n");
    Sleep(3000);
    printf("*One of them approaches you...* \n");

    Sleep(2000);

    printf("Welcome stranger! What might your name be? \n");
    scanf("%s", &char_name);
    Sleep(1000);
    printf("%s huh, that's a great name! \n");
    Sleep(2000);

    int input;
    printf("Are you lost?\n");
    printf("1) Yes, where am I?\n");
    printf("2) No, I'm just...passing through.\n");
    scanf("%d", &input);
    Sleep(2000);

    switch (input) {
    case 1 :
        printf("Glad you asked! We are in the woods, what more could you ask for :)");
        break;
    case 2 :
        printf("Really now? Because you look like you've had a nasty fall.");
        break;
    }




    return 0;
}
