/* # inclui  < stdio.h >
int  main () {
	int primeirolado, segundolado, terceirolado;
	printf ( " Quest�o 03 \ n " );	
	printf ( " Informe a primeira medida: " );
	scanf ( " % i " , & primeirolado);
	printf ( " Informe a segunda medida: " );
	scanf ( " % i " , & segundolado);
	printf ( " Informe a terceira medida: " );
	scanf ( " % i " , & terceirolado);
	if (primeirolado == segundolado == terceirolado) {
		printf ( " EQUIL�TERO " );
	} else {
		if (primeirolado> segundolado> terceirolado) {
		printf ( " IS�SCELES " );
		} else {
		if (primeirolado> segundolado <terceirolado) {
		printf ( " ESCALENO " );			
		} else {
			if (primeirolado <segundolado> terceirolado) {
			printf ( " ESCALENO " );			
				}
			}
		}
	}
  
}*/
#include <stdio.h>
int main(){
  int primeiro,segundo,terceiro;
  scanf("%i%i%i",&primeiro,&segundo,&terceiro);
  if(primeiro>1 && segundo>1 &&terceiro>1){
  if(primeiro==segundo && primeiro==terceiro && segundo==terceiro){
      printf ( " EQUIL�TERO " );
    }else{
    if(primeiro==segundo && segundo<terceiro && primeiro<terceiro){
        printf("IS�SCELES");
    }else {
    if(primeiro<segundo && segundo<terceiro && primeiro<terceiro){
        printf("ESCALENO");
          }
        }
      }
    }else{
    printf("N�O FORMA");
  }
  return 0;
}
