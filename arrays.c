#include<stdio.h>

int main() {
  
  // Checkpoint 1 code goes here.
  double q[5];
  // Checkpoint 2 code goes here.
  //int evens[] = {2,4,6,8,10};

  int evens[] = {2, 4, 6, 8, 10, 12};
  int odds[] = {1, 4, 5, 7, 10, 11}; // Do not modify this line.
  
  printf("%i\n", evens[5]); // Checkpoint 1. Fix this error.

  // Code for checkpoint 2 goes here.
  printf("%i\n", evens[2]);
  // Code for checkpoint 3 goes here.
  odds[1] = 3;
  odds[4] = 9;

  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  int arr2[100];
    
  // Code for Checkpoint 1 goes here
  int i = 0;
  while (i < 20){
    printf("%i\n", arr[i]);
    i++;
  }  
  // Code for Checkpoint 2 goes here
  for(int i = 0; i < 100; i++){
    arr2[i] = i + 4;
    printf("%i\n",arr[i]);
  }

  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len;
  
  // Checkpoint 1 code goes here.
  len = sizeof(arr)/sizeof(double);
  printf("%i\n", len);

  // Checkpoint 2 code goes here.
  int i = 0;
  while (i < len){
    printf("%f\n", arr[i]);
    i++;
  }

}