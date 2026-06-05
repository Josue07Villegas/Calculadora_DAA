#include <stdio.h>
void division(){
int num1,num2;
printf("Dame el valor de el primer numero");
scanf("%d",&num1);
printf("dame el valor de el segundo numero");
scanf("%d",&num2);
if (num2==0){
printf("Error:no Se puede dividir entre cero.\n");
}else{
printf("el resultado de la division de %d  / %d = %d",num1,num2,(num1/num2));
} 
}
