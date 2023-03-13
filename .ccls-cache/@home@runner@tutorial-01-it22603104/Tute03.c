/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int main() 
{
  int number;
  int i;
  int total = 0;

  printf("Enter the number: ");
  scanf("%d", &number);

  for(i = 0;i <number;++i)
    {
    total = (i +1) + total;
    }

  printf("The total is:%d",total);
  
  return 0;
}

