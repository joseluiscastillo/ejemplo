#include <stdio.h>
#include <stdlib.h>

#define MONEDAS  6

int monedas[] = {50,20,10,5,2,1};

int solucion[MONEDAS];

int main ()
{
   int i, monto;

   printf("INGRESE EL VALOR DE DINERO A CAMBIAR: "); scanf ("%d",&monto);
   //inicializacion de vector solucion
   for (i = 0; i < MONEDAS; i++)
      solucion[i] =0;
   //--
   //-- bucle voraz
   for (i = 0; i < MONEDAS; i++)
      while (monto >= monedas[i])
      {
         solucion[i]++;
         monto-= monedas[i];
      }
   //-- fin del bucle voraz
   if (monto) // !0
      printf ("No hay monedas para devolver\n");
   else
      //mostramos la solucion
      for (i = 0; i < MONEDAS; i++)
         if (solucion[i])
            printf ("%d modenas de %d\n", solucion[i], monedas[i]);
   system ("pause");
   return 0;
}
