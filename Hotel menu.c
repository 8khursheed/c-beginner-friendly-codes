#include<stdio.h>
int main (){
    int choice;

    
        printf("Welcome to our Hotel \n");
        printf("-- HOTEL MENU--\n");
        printf("1. Briyani\n");
        printf("2. Pulao\n");
        printf("3. Karahi\n");
        printf("4. Tea\n");
        printf("5. Exit\n");
        
do{
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("You ordered Briyani\n");
            break;

            case 2:
            printf("You ordered Pulao\n");
            break;

            case 3:
            printf("you ordered Karahi\n");
            break;

            case 4:
            printf("You orderd Tea\n");
            break;

            case 5:
            printf("Thanks for visiting! Goodbye\n");
            break;

            default:
            printf("Invalid Choice \n");

        }
    }
    while (choice !=5);
    return 0;
}