#include <stdio.h>
main(){
	int valorfinal,soma;
	float total;
	printf("Digite o total da compra\n");
	scanf("%i",&valorfinal);
	if(valorfinal>=100){
		soma= valorfinal-5;
		total=soma;
		printf("%.2f",total);
	}else{
		if(valorfinal>=200){
		soma= valorfinal-10;
		total=soma;
		printf("%.2f",total);
		}
	}	
}
