/*# inclui  < stdio.h >
int  main () {
  int num, sei = 0 ;
  scanf ( " % i " , & num);
  if (num == 0 ) {
    printf ( " Zero \ n " ); sei = 1 ;
  }
  if (num == 1 ) {
    printf ( " Um \ n " ); sei = 1 ;
  }
  if (num == 2 ) {
    printf ( " Dois \ n " ); sei = 1 ;
  }
  if (num == 3 ) {
    printf ( " Três \ n " ); sei = 1 ;
  }
  if (num == 4 ) {
    printf ( " Quatro \ n " ); sei = 1 ;
  }
  if (num == 5 ) {
    printf ( " Cinco \ n " ); sei = 1 ;
  }
  if (num == 6 ) {
    printf ( " Seis \ n " ); sei = 1 ;
  }
  if (num == 7 ) {
    printf ( " Sete \ n " ); sei = 1 ;
  }
  if (num == 8 ) {
    printf ( " Oito \ n " ); sei = 1 ;
  }
  if (num == 9 ) {
    printf ( " Nove \ n " ); sei = 1 ;
  }
  return  0 ;}
*/
#include <stdio.h>
int main(){
  int num;
  scanf("%i",&num);
  switch(num){
    case 1: printf("One"); break;
    case 2: printf("Two"); break;
    case 3: printf("Three"); break;
    case 4: printf("Four"); break;
    case 5: printf("Five"); break;
    case 6: printf("Six"); break;
    case 7: printf("Seven"); break;
    case 8: printf("Eight"); break;
    case 9: printf("Nine"); break;
    case 0: printf("Zero"); break;
  }
  return 0;
}
