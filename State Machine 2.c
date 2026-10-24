#include <stdio.h>

int main() {
    char ch;
    int state = 1; 

    printf("Enter your input sequence (A or B) and press Enter: ");

    
    while ((ch = getchar()) != '\n') {
        
        
        if (ch == 'a') ch = 'A';
        if (ch == 'b') ch = 'B';

    
        switch (state) {
            case 1:
                if (ch == 'A') state = 2;
                else if (ch == 'B') state = 4;
                break; 

            case 2:
                if (ch == 'A') state = 3;
                else if (ch == 'B') state = 4;
                break;

            case 3:
                if (ch == 'A') state = 4;
                else if (ch == 'B') state = 2;
                break;

            case 4:
                if (ch == 'A') state = 2;
                else if (ch == 'B') state = 1;
                break;
        }
    }

    if (state == 3) {
        printf("Result: ACCEPTED (Ended in State 3)\n");
    } else {
        printf("Result: REJECTED (Ended in State %d)\n", state);
    }

    return 0;
}
