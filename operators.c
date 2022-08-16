#include <stdio.h>

int main() {
int booksSold = 100;
  double bookCost = 9.99;
  double totalSalesValue;

  // Make your changes here
  booksSold +=200;
  totalSalesValue = (booksSold * bookCost);
  totalSalesValue = totalSalesValue / 2;
  // Output logic, no need to change this
  printf("You sold %d books and your take home was $%.2f\n", booksSold, totalSalesValue);

  int endingDayOfWeek = 0;
  int daysThatPass = 13;
  int daysInWeek = 7;
  endingDayOfWeek = daysThatPass % daysInWeek;


  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
  int n = 13;
  int m = 10;
  m--;
  n++;
  
  printf("m = %d\n", m);
  printf("n = %d\n", n);

  int timesServerCrashed = 5;
  double losses = 500.95;
  losses *= timesServerCrashed;
  losses /= 2;

  printf("Total Losses: $%.2f\n", losses);

   int x = 5;
  int y = 42;

  if (x < y) {
   printf("Congratulations on setting up a comparison correctly!");

     int x = 1;
  int y = 27;

  if (x != y) {
    printf("Congratulations on setting up a comparison correctly!");
  } else {
    printf("Please try again!");
  }

  int x;
  int y;

  x = (2 + 3) * 5;
  y = 2 / (4 + 6);

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);
}