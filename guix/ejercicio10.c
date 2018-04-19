#include <stdio.h>

int main() {
	float km, costo, total;
	
	printf("Calcular precio del viaje.\nIngresar kilometros recorridos: ");
	scanf("%f", &km);

	printf("\nIngresar costo por km: ");
	scanf("%f", &costo);

	total = costo * km;
	printf("\nEl costo por %.1f km ha sido: $%.2f", km, total);

	return 0;
}
