#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int random,guess ;
  int no_of_attempts = 0;
  srand(time(NULL)); //seed the random number generator

  printf("Welcome to the World of Guessing Numbers\n");
  random = rand() % 100+1 ; //generate a random number between 1 and 100

  do {
    printf("\nPlease enter a number between 1 and 100: ");
    scanf("%d", &guess);
    no_of_attempts += 1;

    if (guess < random){
      printf("Guess larger number. \n");
    } else if (guess > random){
      printf("Guess smaller number. \n");
    } else {
      printf("Congratss !!! You have successfully guessed the Number in %d attempts\n", no_of_attempts);
    }

  }while ( guess != random);

  printf("Thank you for playing the game.\n");
  printf("\n Developer: Aniket Jaiswal\n");

  return 0;
}