#include <stdio.h>
int main() {
  int N, i;
  scanf("%i",&N);
  for(i=1; i<=N; i++){
    if(i%4==0){
      printf("PIN");
    }else{
      printf("%i",i);
    }
    if(N>i){
      printf(",");
    }
  }   
  return 0;
}
