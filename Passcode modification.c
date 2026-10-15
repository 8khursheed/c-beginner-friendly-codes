#include<stdio.h>
int main()
{
    int passcode;

    printf("Enter your passcode ");
    scanf("%d",&passcode);

    while (passcode!=1234)
    {
    printf("Wrong passcode! Try again ");
    scanf("%d",&passcode );

    }
    printf("Permission granted \n");
    return 0;
    
}