/*# include < stdio.h >
main () {
	int valorfinal, soma;
	float total;
	printf ( " Digite o total da compra \ n " );
	scanf ( " % i " , & valorfinal);
	if (valorfinal> = 100 ) {
		soma = valorfinal- 5 ;
		total = soma;
		printf ( " % .2f " , total);
	} else {
		if (valorfinal> = 200 ) {
		soma = valorfinal- 10 ;
		total = soma;
		printf ( " % .2f " , total);
		}
	}	
}*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  float valorfinal,somatorio;
  scanf ("%f",&valorfinal);
  if(valorfinal<100){
    somatorio=valorfinal*0;
    printf("R$ %.2f",valorfinal);
  }
  if(valorfinal>=100 && valorfinal<=200){
    somatorio=valorfinal*0.05;
    somatorio=valorfinal-somatorio;
    printf("R$ %.2f",somatorio);
  }
  if(valorfinal>200){
    somatorio=valorfinal*0.10;
    somatorio=valorfinal-somatorio;
    printf("R$ %.2f",somatorio);
  }
  return 0;
}
