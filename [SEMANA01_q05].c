/*# inclui  < stdio.h >
 main () {
    int a, b;
    printf ( " Questao 4 \ n " );
    printf ( " Digite um numero inteiro .: " );
    scanf ( " % i " , & a);
	printf ( " Digite outro numero inteiro .: " );
    scanf ( " % i " , & b);
    if (a> b) {
    printf ( " % i% i% i% i% i% i \ n " , (a- 1 ), a, (a + 1 ), (a + 2 ), (a + 3 ), (a + 4 ));
	} else {
		if (a <b) {
    	printf ( " % i% i% i% i% i \ n " , (b- 1 ), b, (b + 1 ), (b + 2 ), (b + 3 ));
		} else {
			if (a = b) {
			printf ( " % i% i% i% i \ n " , (b- 1 ), b, (b + 1 ), (b + 2 ));
			}
		}
	}
   return ( 0 );
}*/
#include <stdio.h>
int main(){
  int a,b;
  scanf("%i %i",&a,&b);
  if(a>b && a-1>b-1){
    printf("%i %i %i %i",(a-2),(a-1),a,(b+2));
  }
  if(b>a && b-1>a-1){
    printf("%i %i %i %i %i %i",(a-2),(a-1),a,(b-1),b,(b+1));
  }
  return 0;
}
