#include <stdio.h>
int main(){
  int valor100,valor50,valor20,valor10,valor5,valor2,valor1,num,resto;
  scanf("%i",&num);
  if(num){
    valor100=num/100;
    resto=num%100;
    printf("%i de notas de 100\n",valor100);
    valor50=resto/50;
    resto=num%50;
    printf("%i de notas de 50\n", valor50);
    valor20=resto/20;
    resto=num%20;
    printf("%i de notas de 20\n",valor20);
    valor10=resto/10;
    resto=num%10;
    printf("%i de notas de 10\n",valor10);
    valor5=resto/5;
    resto=num%5;
    printf("%i de notas de 5\n",valor5);
    valor2=resto/2;
    resto=num%2;
    printf("%i de notas de 2\n",valor2);
    valor1=resto/1;
    resto=num%1;
    printf("%i de notas de 1\n",valor1);
  }
  return 0;
}
