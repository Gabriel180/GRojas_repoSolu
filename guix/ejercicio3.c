#include <stdio.h>

int main() {
	float a, b, h;
	
	printf("Calcular hipotenusa.\nIngresar cateto 1: ");
	scanf("%f", &a);

	printf("\nIngresar cateto 2: ");
	scanf("%f", &b);

	h = ( a * a + b * b );
	printf("\nHipotenusa al cuadrado: %.2f", h);

	return 0;
}
