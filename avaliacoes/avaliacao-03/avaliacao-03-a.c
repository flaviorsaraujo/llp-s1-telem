#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(void) {
	int a,b,c;
	float delta,xlinha,x;
	
	printf("\nNos informe o valor de a: ");
    scanf("%d",&a);
    printf("\nNos informe o valor de b: ");
    scanf("%d",&b);
    printf("\nNos informe o valor de c: ");
    scanf("%d",&c);

    delta= pow(b,2) - 4 * a * c;
    printf("\n\nO valor de delta eh = %.2f\n",delta);
	
	if(delta >=0){
		x1 = (-b + sqrt(delta))/(2.*a); 
 		x2 = (-b - sqrt(delta))/(2.*a);
		
 		printf("As raizes reais são nos valores de:\n\n => 1a.raiz %.1f \n => 2a.raiz %.1f\n", x1, x2);
	
	}else{
		printf("As Raizes  Imaginarias são:");	
	}
   	
	return 0;
}
