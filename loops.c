#include <stdio.h>

int main() {
  int pin = 0;
  int tries = 0;

  printf("BANK OF CODECADEMY:\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 1234 && tries < 3) {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
  }

  if (pin == 1234) {
    printf("PIN accepted!\n");
    printf("You now have access.\n");
  }

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);

  // Write a while loop here:
while (guess != 8 && tries < 50){
printf("Wrong guess, try again: ");
scanf("%d" , &guess);
tries++;
}



  if (guess == 8) {
    printf("You got it!\n");
  }
    int i = 9;
  int square = 0;
  while (i >= 0){
    printf("%d\t%d\n", i, i * i);
    i--;
  }
    int i = 99;

  // Write your loop here
for (int i = 99; i >=0;i--){
  printf("%d bottles of pop on the wall.\n", i);
  printf("Take one down and pass it around.\n");
  printf("%d bottles of pop on the wall.\n", i-1);

}
  int number1 = 1;
  int numbers_entered1 = 0;
  int number2 = 1;
  int numbers_entered2 = 0;

  while (numbers_entered1 < 10) {

    printf("Loop 1 - Please enter a number: ");
    scanf("%d", &number1);

    // Figure out how to break out here!
    if (number1 <= 0){
      break;
    }




    numbers_entered1++;
  }
      while (number2 > 0 && numbers_entered2 < 10){
    printf("Loop 2 - Please enter a number: ");
    scanf("%d", &number2);
    }

  printf("Good job! You’ve broken out!\n");

    for (int i = 0; i < 10; i++) {
    // Figure out how to skip the print of 5 here
    if (i == 5){
      continue;
    }

    printf("%d\n", i);
  }
}