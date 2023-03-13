/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main()
{
  float sub1,sub2,average;
  
  printf("Enter the marks of the subject one: ");
  scanf("%f",&sub1);

  printf("Enter the marks of the subject two: ");
  scanf("%f",&sub2);
  
  average = (sub1 + sub2 ) / 2 ;
  
  printf("The average marks of the entered marks is: %.2f",average);
  
  return 0;
}
