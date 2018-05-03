#include <stdio.h>
/*En la funcion se multiplican las posibilidades de 
 * estar infectados por la probabilidad de que el test
 * se haya equivocado, ya que el porcentaje de que el test
 * se haya equivocado es el porcentaje del porcentaje que este infectado
 * (segun el diagrama de arbol y la multiplicación de porcentajes)
 * */
void multiplicacion_de_posibilidades(){
	float posibilidad= (((1/100000))/0.01);
	printf ("%f", posibilidad);
}
int main(){
	multiplicacion_de_posibilidades();
	return 0;
}
//La computadora no logra imprimirme el siguiente decimal el cual es 1
