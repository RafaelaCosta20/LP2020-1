#include <stdio.h>
 main(){
    int a,b;
    printf("Questao 4\n");
    printf("Digite um numero inteiro.: ");
    scanf("%i", &a);
	printf("Digite outro numero inteiro.: ");
    scanf("%i", &b);
    if(a<=b){
    printf("%i%i%i%i%i%i\n", (a-1),a,(a+1),(a+2),(a+3),(a+4),(a+5));
	}else{
    printf("%i%i%i%i\n",(b-1),b,(b+1),(b+2));
	}
   return(0);
}
