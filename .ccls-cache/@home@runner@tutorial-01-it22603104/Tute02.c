/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int distance;
  float total, total1, total2;

  printf("Enter the distance travelled: ");
  scanf("%d", &distance);

  if (distance > 0 && distance <= 30) {
    total = distance * 50.00;
    printf("The total price is: %.2f", total);
  }

  else {
    total1 = 30 * 50.00;
    total2 = (distance - 30) * 40.00;
    total = total1 + total2;
    printf("The amount to be paid is:%.2f", total);
  }

  return 0;
}
