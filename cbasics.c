#include <stdio.h>

int main() {
  // print line
  printf("Hello World\n");
  
  int integer;
  char character;
  int ageLearnedToRide = 5;

 printf("I was %d years old when I learned to ride a bike.\n",ageLearnedToRide);
 printf("I hope I still remember how to ride.");

   int numOfBooks = 5;
  char favLetter = 'E';
  char favDigit = '3';
  double costOfCandyBar = 2.12;

  printf("Number of books: %d\n", numOfBooks);
  printf("Your Favorite Letter is: %c\n", favLetter);
  printf("Your Favorite Digit is: %c\n", favDigit);
  printf("You expect to pay $%.2f for a candy bar.\n", costOfCandyBar);

  // Speed of light is 1.86e5 mi/s or 186000 mi/s we will store 1.86 and do the multiplicaiton later.
  const double SPEEDOFLIGHT = 1.86;
  int timeTraveledInSeconds = 30;

  


  // No need to change below here
  printf("Light would travel %.2f miles in %d seconds\n", SPEEDOFLIGHT * 100000 * timeTraveledInSeconds, timeTraveledInSeconds);
  double testScore = 95.7;
  int displayScore = 0;
  displayScore = (int) testScore;

  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

}
