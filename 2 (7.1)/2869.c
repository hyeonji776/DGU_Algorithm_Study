#include <stdio.h>

int main(void) {
  int A, B, V;
  scanf("%d %d %d", &A, &B, &V);
    
  int days = (V - B - 1) / (A - B) + 1;

  printf("%d", days);
  return 0;
}
