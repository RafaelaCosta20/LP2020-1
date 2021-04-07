/*# include  < stdio.h > 
int  main () {
	int nota1 = 4 , nota2 = 4 , nota3 = 4 ;
	printf ( " Questão 04 \ n " );
	printf ( " Digite a primeira nota: " );
	scanf ( " % i " , & nota1);
	printf ( " Digite a segunda nota: " );
	scanf ( " % i " , & nota2);
	printf ( " Digite a terceira nota: " );
	scanf ( " % i " , & nota3);
	if (nota1> = nota2 <nota3) {
		printf ( " Aprovado com B " );
	} else {
	if (nota1> nota2 <= nota3) {
		printf ( " Incluso " );
	  } else {
		if (nota1 <= nota2> nota3) {
		printf ( " Reprovado " );
				}
			}
		}	
}*/
#include <stdio.h>
int main(){
  int nota1,nota2,nota3;
  scanf("%i%i%i",&nota1,&nota2,&nota3);\
  if(nota1==1 && nota2>=1){
    printf("Incluso");
  }
  if(nota1==2 && nota2==2){
    printf("APROVADO COM B");
  }
  if(nota1==3 && nota2==3){
    printf("APROVADO COM C");
  }
  if(nota1==4 && nota2==4){
    printf("Reprovado");
  }
  return 0;
}
