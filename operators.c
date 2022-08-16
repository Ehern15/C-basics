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


}