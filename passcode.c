#include<stdio.h>
int main()
{
    int passcode;

    printf("Enter your passcode: ");
    scanf("%d", &passcode);

    if (passcode = 1234){
        printf ("Permission Granted ");
    }
    else 
    {
        printf("Wrong passcode permission denied ");

    }
    return 0;
}