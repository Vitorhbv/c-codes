#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double pi,dif,difmax;
  pi = 0.0;
  dif = 1;
  int i;
  i = 0;
  scanf("%lf", &difmax);
  while (dif > difmax) {
    pi += 4.0 / (2 * i + 1) * ((i % 2 == 0) ? 1 : -1);
    dif = (pi - M_PI) * ((pi - M_PI < 0) ? -1 : 1); // valor absoluto da diferença
    i++;
    }
  printf("%d",i);
    return 0;
}