//errada:
/*# inclui  < stdio.h >
int  main () {
	float x, y;
	scanf ( " % f% f " , & x, & y);
	if (x- 11 > 58 && x + 11 < 98 ) {
		if (y- 11 > 204 && y + 11 < 244 ) {
			printf ( " Golaco \ n " );
		} else {
			if (y- 11 < 204 ) {
				printf ( " Uhhh \ n " );
			}
		}
	} else {
		printf ( " Uhhh \ n " );
	}
	if (x- 11 < 790 && x + 11 > 750 ) {
		if (y- 11 > 204 && y + 11 < 244 ) {
			printf ( " Golaço \ n " );
		} else {
			if (x- 11 < 790 ) {
				printf ( " Uhhh \ n " );
			}
		}
	}
	if (x- 11 > 58 && x + 11 < 98 ) {
		if (y- 11 > 203 && y + 11 < 203 ) {
			printf ( " Gol \ n " );
		}
	}
	return  0 ;
}*/
//certa:
/*#include <stdio.h>
int main(){
    float x, y;
    scanf ("%f%f",&x,&y);
    if ( x-11 >= 58 && x+11 <= 98 && y-11 >= 204 && y+11 <= 244){
        printf ("GOLACO");
    }else if ( x-11 >= 750 && x+11 <=790 &&  y-11 >= 204 && y+11 <= 244){
        printf ("GOLACO");
    }
    if (x-11 > 58 && x+11 < 790 && y-11 >= 0 && y+11 <= 204 ){
        printf ("GOL");
    }
    if ( x-11 >= 98 && x+11 <= 750 && y-11 >= 204 && y+11 <=244){
        printf ("GOL");
    }
    if ( x-11 < 58 || x+11 > 790 || y-11 > 244){
        printf ("UHHH");
}
return 0;
}*/
