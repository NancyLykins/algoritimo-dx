#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, result;
	printf("Escreva o valor de a: ");
	scanf("%f", &a);
	printf("Escreva o valor de b: ");
	scanf("%f", &b);
	printf("Escreva o valor de c: ");
	scanf("%f", &c);

	result = (pow(a, 2) + 2*b - 2*c)/(2*a);
	printf("O resultado da expressão é: %.2f", result);
	return 0;
}
