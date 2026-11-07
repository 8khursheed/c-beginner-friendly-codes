#include<stdio.h>
int main(){
    int i, sum = 0, value =10;

    for(i = 1; i <= 5; i++){
        if (i % 2 == 0 ){
            sum += 1;

        }
        else{
            value -= i;
        }
        printf("i = %d, sum = %d, value = %d\n", i, sum, value);
    }
    printf("Final output = %d\n", sum * value);

    return 0;
}