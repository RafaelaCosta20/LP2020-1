//errada
/*#include <stdio.h>
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
}*/

//certa
/*#include <stdio.h>
int main(){
  int nota100,nota50,nota20,nota10,nota5,nota2,nota1,valor;
  scanf("%d",&valor);
  nota100 = valor / 100;
  valor = valor % 100;
  printf("%i de notas de 100\n",nota100);
  nota50= valor / 50;
  valor= valor % 50;
  printf("%i de notas de 50\n",nota50);
  nota20= valor / 20;
  valor= valor % 20;
  printf("%i de notas de 20\n",nota20);
  nota10= valor / 10;
  valor= valor % 10;
  printf("%i de notas de 10\n",nota10);
  nota5= valor / 5;
  valor= valor % 5;
  printf("%i de notas de 5\n",nota5);
  nota2= valor / 2;
  valor= valor % 2;
  printf("%i de notas de 2\n",nota2);
  nota1= valor /1;
  valor= valor % 1;
  printf("%i de notas de 1\n",nota1);
  return 0;
}*/
