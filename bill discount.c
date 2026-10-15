#include<stdio.h>
int main ()
{
    float bill;

    printf("Enter your bill: ");
    scanf("%f", &bill);

    if(bill >= 1000){
        bill = bill - 100;
        printf(" Your discounted amount is: %.2f \n", bill);
    }
    else {
        printf("Your bill is %.2f \n", bill);
    }
    return 0;
}