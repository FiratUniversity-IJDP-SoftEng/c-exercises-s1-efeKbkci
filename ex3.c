#include<stdio.h>

int main(){

    printf("\n\tCat : 1\n\tDog : 2\n\n");

    printf("Do you have a cat or a dog? ");

    int animalCode;
    scanf("%d",&animalCode);

    switch (animalCode)
    {
    case 1:
        printf("Miyav, miyav");
        break;
    
    case 2:
        printf("Hav! Hav!");
        break;

    default:
        printf("I guess you don't have a pet.");
        break;
    }
}