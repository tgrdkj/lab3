#include <stdio.h>

int main(void) {
  int x, y, z;
  
  printf("Введiть х: \n");
  scanf("%d", &x);
  printf("Введiть z: \n");
  scanf("%d", &z);

  if (x < 3) 
    y = 3 * x + z; 
  if (x >= 3 && x <= 10)
    y = (2 * x * z) / 7 - z;

  printf("Значення y: %d\n", y);
  return 0;
}