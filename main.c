#include <stdio.h>

int main(){

int a[6] = {1, 6, 5, 9, -1, 0};
int i, j;

  for(j = 0; j < 6; j++){
    printf("%d ", a[j]);
                             }
printf("\n");

int n = 6, m;
  for(i = 0; i < n - 1; i++){

int min = a[i];
  for(j = i; j < n; j++){
    if (a[j] < min){
       min = a[j];
       m = j;
                                 }
                                     }
int t = a[i];
a[i] = a[m];
a[m] = t;

  for(j = 0; j < 6; j++){
    printf("%d ", a[j]);
                                           }
printf("\n");
                                                 }
return 0;

                                                       }
