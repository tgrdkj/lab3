#include <stdio.h>

int main(void) {
  int x, y, z;

  printf("Enter the value of x: ");
  scanf("%d", &x);
  printf("Enter the value of z: ");
  scanf("%d", &z);

    if (x < 3) {
      y = 3 * x + z;
    } else if (x >= 3 && x <= 10) {
      y = (2 * x * z) / 7 - z;
    } else {
      y = x;
    }

  printf("The value of y is: %d\n", y);

  
  return 0;
}