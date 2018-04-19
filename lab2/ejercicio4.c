#include <stdio.h>
// Se piden las variables, estas se utilizan en un ciclo, siendo que los goles del primer equipo (los gloriosos) son mayor, menor o igual, sabiendo las variables podemos aumentar un contador//
int main () 
{
	int contador = 0, V=0;
	int gx,gy;
	gx=0;
	gy=0;
	printf ("Cantidad del marcador del primer equipo(los gloriosos): ");
		scanf ("%d", &gx);
	printf ("Cantidad del marcador del segundo equipo: ");
	scanf ("%d", &gy);
		for (V= 1; V<=5; V++)
	{
			printf ("Cantidad del marcador del primer equipo(los gloriosos): ");
			scanf ("%d", &gx);
			printf ("Cantidad del marcador del segundo equipo equipo: ");
			scanf ("%d", &gy);
			if (gx>gy) {
			contador = contador + 3;
			}
				if (gx<gy){
			contador = contador +0;
			}
					if (gx==gy) {
			contador = contador + 1 ;
			}
						else {
			printf ("\n Valor ingresado invalido");
		}
			printf ("\n Contador: %d", contador);
	}
return 0;}
