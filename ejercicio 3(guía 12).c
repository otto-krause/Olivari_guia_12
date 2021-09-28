#include <stdio.h>
int porc(int h, int m)
{ printf("El porcentaje de hombres postulados n\son:%i\nEl porcentaje de mujeres postuladas son:%i\n", h,m); }
int main ()
{ int nh,nm; 
printf("Ingrese la cantidad de hombres y mujeres: \n");
 scanf("%i %i", &nh, &nm); 
int t=nh+nm, ph=nh*100/t, pm=nm*100/t; porc(ph,pm); 
return 0; }