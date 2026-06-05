#include "suma.h"
#include "resta.h"
#include "multiplicacion.h"
#include "division.h"
#include "stdio.h"
 int main(){
int choice=0;
printf("===CALCULADORA EN C ===\n 1.Sumar \n 2.Restar \n 3.multiplicar \n 4.Dividir \n Selecciona una opcion:");
scanf("%d",&choice);
switch(choice){
case 1: suma();
break;
case 2: resta();
break; 
case 3: multiplicacion();
break;
case 4: division();
break;
}
}

