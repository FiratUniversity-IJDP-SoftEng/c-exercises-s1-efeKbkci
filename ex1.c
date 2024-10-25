#include<stdio.h>

int main(){
    int secretNumber = 3;
    int userGuess;

    printf("What's your guess? ");
    scanf("%d", &userGuess);

    if ( userGuess == secretNumber ){
        printf("Congratulations!");
    } else if ( ! 0 <= userGuess <= 5 ){
        printf("Your input is out of bounds!");
    } else {
        printf("Ooops! You couldn't guess the number :<");
    }

    return 0;
}