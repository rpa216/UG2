#include <stdio.h>
#include <stdlib.h>
int main(void){

int **array;
int n=10;
array=malloc(n*sizeof(int *));
int i,j=0;
for(i=0;i<n;i++){
  *(array+i)=malloc((i+1)*sizeof(int));
for(j=0;j<=i;j++)
   array[i][j]=i;
}


free(array);
return 0;
}
