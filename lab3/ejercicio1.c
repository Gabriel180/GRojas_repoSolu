#include <stdio.h>
//Se inicia el ciclo, luego de obtener los datos se usa los datos de
//aquello para que se sume y se multiplique y luego se imprima el resultado
void trabajo (int dias, int trabajadas)
{
	int sueldo;
	sueldo = dias*trabajadas;
	printf ("sueldo: %d", sueldo);
}
int main (void) 
{
	int i,a_la_hora, contador_de_horas=0;
	for (i=0; i<6; i++){
		int horas;
		printf("Ingrese la hora al día: " );
		scanf ("%d", &horas);
		contador_de_horas= contador_de_horas+horas;
	}
	printf ("ingrese cuanto es el sueldo por hora: ");
	scanf ("%d", &a_la_hora);
	trabajo (contador_de_horas,a_la_hora);
	return 0;
}

