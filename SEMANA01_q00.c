/*#include <stdio.h>
int main(){
	int primeiro,segundo;
	printf("Digite o primeiro numero\n");
	scanf("%i",&primeiro);
	printf("Digite o segundo numero\n");
	scanf("%i",&segundo);
	if(primeiro<=segundo){
		printf("%i %i\n",primeiro,segundo);
	}else{
		printf("%i %i\n",segundo,primeiro);
	}
}*/
#include <stdio.h>
int main(){
  int primeiro,segundo;
  scanf("%i %i",&primeiro,&segundo);
  if(primeiro>=segundo){
    printf("%i %i",segundo,primeiro);
  }else{
    printf("%i %i", primeiro, segundo);
  }
  return 0;
}
