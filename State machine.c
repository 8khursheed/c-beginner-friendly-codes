#include<stdio.h>
int main(){
    char ch;
    int state=1;

    printf("Enter a character (a or b): ");
    scanf("%ch", &ch);

    if (state == 1){
        if ( ch == 'a'){
            state = 2;
        }
        else if ( ch == 'b'){
            state = 1;
        }
    }
    else if (state == 2){
        if ( ch == 'a'){
            state = 2;
        }
        else if ( ch == 'b'){
            state = 1;
        }
    }

    if (state == 2){
        printf(" Machine is in state 2 \n");
    }
    else {
        printf("Machine is in state 1\n");
    }
    return 0;
}