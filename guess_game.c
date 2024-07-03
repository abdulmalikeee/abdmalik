#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int r=0;
    int guess=0;
    int maxguess=5;
    time_t t;
    //initialization of random number
    srand((unsigned) time(&t));
    r=rand() % 21;
    printf("whow %d",r);
    printf("\n This is a guessing game");
    printf("\nI have choosen a number between 0 and 20 ,which must guess");
    for(maxguess=5;maxguess>0;--maxguess){
        printf("\n You have %d tr%s left.",maxguess,maxguess==1?"y":"ies");
        printf("\nEnter a guess:");
        scanf("%d",&guess);
        if(guess == r){
            printf("\nCongradues you are guesss");
            break;

        }
        else if(guess<=0 || guess>=20){
            printf("\nI said the number is between 0 to 20");
        }
        else if(guess>r)
        {
            printf("\n your guess is greater than that");
        }
        else if(guess<r){
            printf("\nyour guess is less than that");
        }
        else
        printf("\nsorry you will out,try once more");
    }7
    
    
}