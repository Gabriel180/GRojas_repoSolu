#include <stdio.h>
int main(){
int unidad,decena;
printf ("numero: ");
scanf ("%d", &unidad);
decena=unidad%100;
unidad=unidad%10-decena;
printf ("%d", unidad);
printf ("%d", decena);
return 0;
}
