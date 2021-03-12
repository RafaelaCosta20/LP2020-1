#include <stdio.h>
int main(){
	int primeirolado,segundolado,terceirolado;
	printf("Questão 03\n");	
	printf("Informe a primeira medida:");
	scanf("%i",&primeirolado);
	printf("Informe a segunda medida:");
	scanf("%i",&segundolado);
	printf("Informe a terceira medida:");
	scanf("%i",&terceirolado);
	if(primeirolado==segundolado==terceirolado){
		printf("EQUILÁTERO");
	}else{
		if(primeirolado>segundolado>terceirolado){
		printf("ISÓSCELES");
		}else{
		if(primeirolado>segundolado<terceirolado){
		printf("ESCALENO");			
		}else{
			if(primeirolado<segundolado>terceirolado){
			printf("ESCALENO");			
				}
			}
		}
	}
}
