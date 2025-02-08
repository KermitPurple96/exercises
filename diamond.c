#include <stdio.h>

int main(){
  int num, i, j, k;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("\n");

  for(i=1; i<=(num+1); i++){
    for(j=num-i; j>=0; j--){
      printf(" ");
    }
    for(k=2; k<=(i*2); k++){
      printf("*");
    }
    printf("\n");
  }
  for(i=num; i>=1; i--){
    for(j=i; j<=num; j++){
      printf(" ");
    }
    for(k=i*2; k>=2; k--){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
