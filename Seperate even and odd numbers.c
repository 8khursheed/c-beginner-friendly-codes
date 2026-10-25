#include<stdio.h>
int main(){

    int n,i;

    printf("Enter an interger: ");
    scanf("%d",&n);

    printf("Even numbers up to %d : \n", n);
    for( i = 1; i <= n; i++){
        if (i % 2 == 0 ){
            printf("%d " , i);
        }
    }
    printf("\nOdd numbers up to %d : \n",n);
    for(i = 1; i<= n; i++){
        if (i % 2 != 0){
            printf("%d " , i);
        }
    }
    return 0;

}