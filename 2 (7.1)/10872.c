#include <stdio.h>

int main(void) {
  int n;
  int fac = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    fac *= i;
  }
  printf("%d", fac);
  return 0;
}
