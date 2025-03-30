#include <stdio.h>
#include <stdlib.h>

void media(double vet[], int n, int *i){
    double sum = 0.0;
    double media_value = 0.0;
    for (int i = 0; i<n; i++){
      sum+=vet[i];
    }
    media_value = sum/n;
    double diff = (vet[0]-(media_value)) * (vet[0]>(media_value) ? 1 : -1);
    *i = 0;
    for (int j = 1; j < n; j++) {
      double current_diff = (vet[j] - (media_value)) * (vet[j]>(media_value) ? 1 : -1);
      if (current_diff < diff) {
        diff = current_diff;
        *i = j;
      }
    }
  }

int main(void) {
  int m;
  scanf("%d",&m);
  double vet[m];
  for (int i = 0; i<m ; i++){
    scanf("%lf",&vet[i]);
  }
  int position;
  media(vet,m,&position);
  printf("%d",position);
  }

  
