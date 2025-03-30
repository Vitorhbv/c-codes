#include <stdio.h>
#include <stdlib.h>

double fib(int n) {
 if ((n == 1) || (n == 2))
 return 1;
 else
 return fib(n - 1) + fib(n - 2);
}

int main() {
 int n;
 scanf("%d",&n);
 printf("%.0lf\n", fib(n));
 return 0;
}
