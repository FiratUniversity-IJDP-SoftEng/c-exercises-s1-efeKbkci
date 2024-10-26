#include<stdio.h>

int main(void){

    int age;
    int counter = 0;

    printf("What's your age? ");

    scanf("%d",&age);

    for ( ; counter<=age; counter++ ){
        printf("Happy Birthday!\n");
    }
}