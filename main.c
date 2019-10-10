#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "include.h"

void rand_items() {

    int max_inventory = 50;
    int number_of_item;

    char *items[3];
    items[0] = "Plank of Wood";
    items[1] = "Sheet of Metal";
    items[2] = "Sharpening Stone";
    items[3] = "Thick Rope";

    char random; //2
        srand(time(NULL));
        random = items[rand() % 4];
        printf(RECIEVED_ITEM);
        printf("You Got ");
        printf("%c", random);
        number_of_item++;
        max_inventory--;

        return;

}

void rand_trash_items() {

    int max_inventory = 50;
    int number_of_trash_item;

    char *trash_items[5];
    trash_items[0] = "Piece of Paper with Scribbles";
    trash_items[1] = "Just a Twig";
    trash_items[2] = "Piece of Cloth";

}

int main()
{
    printf(WELCOME_MSG);

    char *char_name[25];

    printf("*You wake up in the middle of a deep forest, surrounded with small creatures that can talk your language* \n");
    Sleep(5000);
    printf("*One of them approaches you...* \n");

    Sleep(3000);

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
        printf("Glad you asked! We are in the woods, what more could you ask for :) \n");
        Sleep(2000);
        printf("*The creature laughs* Just joking! We are in the south-east of Woodheath, around three miles from the city centre.\n");
        Sleep(2000);
        printf("*He offers his hand to me* Come on! Lets get you back on your feet\n");
        Sleep(2000);
        printf("*As I get back on my feet again, the creature hands me something*\n");
        Sleep(1000);
        rand_items();
        break;
    case 2 :
        printf("Really now? Because you look like you've had a nasty fall.\n");
        Sleep(2000);
        printf("Here, let me help you. *The creature offers me his hand*\n");
        break;
    default :
        break;
    }

    printf("Breaking out of switch statement...");


    return 0;
}
