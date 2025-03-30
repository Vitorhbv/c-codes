#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,m,i,j,mat1,mat2;
  scanf("%d",&n);
  int pds1[n];
  int cal1[m];
  for (i=0;i<n;i++){
    scanf("%d",&mat1);
    pds1[i]=mat1;  
  }
  scanf("%d",&m);
  for (i=0;i<m;i++){
    scanf("%d",&mat2);
    cal1[i]=mat2;
    
  }
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      if (pds1[i]==cal1[j]){
        printf("%d\n",pds1[i]);
      }
    }
  }
  return 0;
  }
  