#include <stdio.h>
int main(){
	float x,y;
	scanf("%f%f",&x,&y);
	if(x-11>58 && x+11<98){
		if(y-11>204 && y+11<244){
			printf("Golaco\n");
		}else{
			if(y-11<204){
				printf("Uhhh\n");
			}
		}
	}else{
		printf("Uhhh\n");
	}
	if(x-11<790 && x+11>750){
		if(y-11>204 && y+11<244){
			printf("Golaço\n");
		}else{
			if(x-11<790){
				printf("Uhhh\n");
			}
		}
	}
	if(x-11>58 && x+11<98){
		if(y-11>203 && y+11<203){
			printf("Gol\n");
		}
	}
	return 0;
}
