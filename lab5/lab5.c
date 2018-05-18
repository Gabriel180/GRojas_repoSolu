/*1. Debe crear un programa de apuestas en donde el usuario pueda escoger una de las dos opciones (a o
b) y el programa por el azar determinará el número mayor y sabremos si ganamos o perdemos. Si los
dos números fueran iguales se deberá repetirse el juego hasta que sean distintos. Una vez el usuario
haya introducido su apuesta, el programa mostrará el valor aleatorio generado para a y b y dirá si
hemos ganado la apuesta (apostamos al número más alto) o perdido. Por último el programa deberá
llevar un contador de ganadas y perdidas, porque lo que nos decir cuántas partidas hemos ganado y
perdido hasta el momento. Tras una jugada, nos preguntará si queremos jugar otra vez.
apuestas por a o por b ? : a
a saca un 7 y b saca un 6
HaS GaNaDO!!!
Llevas 1 partidas ganadas y 0 partidas perdidas
Quieres apostar otra vez ? (S/N) : S
apuestas por a o por b ? : a
a saca un 3 y b saca un 8
HaS PERDIDO!!!
Llevas 1 partidas ganadas y 1 partidas perdidas
Quieres probar otra vez ? (S/N) : N
 * 
 * 
 * Narrativa
 * Se llama al procedimiento en el int main
 * el procedimiento void no necesita valores, pero al no tenerlos
 * los pide al usuario en un while
 * porque creo que el while no permite char cambie el finalizador a un 
 * int mediante if
 * luego en el menu de apuesta permite seleccionar
 * hay un porcentaje de 1 en 1.000 que salga un igual
 * o tiene muy mala suerte el usuario o es un vicio en apuestas
 * finaliza el programa si presionan n o N
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void apuestas(){
	int a,b, contador_ganadas=0,contador_perdidas=0, j=0;
	char i, numero;

	while(j !=1){
	
		printf("\t Bienvenido a apuestas ICB");

	
		printf ("\n Para la apuesta elige tu apuesta");
		printf ("\n1. Para votar que ganara a");
		printf ("\n2. Para votar que ganara b");
		printf ("\n3. Para salir sin iniciar");
		printf ("\n\n");
		scanf (" %c", &numero);
		a=(rand()%1001);
		b=(rand()%1001);
		printf ("A=%d\n", a);
		printf ("B=%d\n", b);
		switch(numero){
			case '1': 
				
				if (a>b){
					printf("Ha ganado por votar por a");
					contador_ganadas= contador_ganadas+1;
				}
				if (a<b){
					printf ("Ha perdido por votar por a");
					contador_perdidas= contador_perdidas+1;
				}
				break;
			case '2':
				if (b>a)
				{
					printf("Ha ganado por votar por b");
					contador_ganadas= contador_ganadas+1;
				}
				if (b<a)
				{
					printf ("Ha perdido por votar por b");
					contador_perdidas= contador_perdidas+1;
				}
			break;
			case '3':
				printf ("Que tenga un buen dia");
			break;
			
			default: 
			printf("Se producio un error, no es mi culpa asi que es la tuya");
		}
		
		printf ("\nContador de perdidas por votar por A: %d, contador de ganadas: %d", contador_perdidas, contador_ganadas);
		printf ("\nDesea continuar cualquier tecla y para finalizar N: ");
		scanf (" %c", &i); 
		
		if(i =='s' || i == 'S'){
			j= 0;
		}
		if(i== 'n'||i=='N'){
			j=1;
		}
		system("clear");


	}
}

int main(){
	srand(time(0));

	apuestas();
	return 0;
}
