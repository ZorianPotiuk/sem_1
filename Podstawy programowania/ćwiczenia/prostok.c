/* Program obliczajacy pole i obwod prostokata */

#include <stdio.h>   /* funkcje printf, scanf, fflush */
#include <stdlib.h>  /* funkcja system */

float a;      /* szerokosc prostokata */
float b;      /* dlugosc prostokata */
float pole;   /* pole powierzchni prostokata */
float obwod;  /* obwod prostokata */

int main()
{
   system("cls");

   printf("Podaj szerokosc prostokata: ");
   fflush(stdin);  /* wyczyszczenie bufora klawiatury */
   scanf("%f", &a);
   printf("Podaj dlugosc prostokata: ");
   fflush(stdin);   
   scanf("%f", &b);
   
   pole = a*b;
   obwod = 2*a+2*b;  /*  obwod = 2*(a+b);  */
   
   printf("Pole prostokata to : %5.1f\n", pole);
   printf("Obwod prostokata to: %5.1f\n\n", obwod);

   printf("Pole prostokata to %.1f, obwod to %.1f\n\n", pole, obwod);
   
   printf("Prostokat o bokach %.1f i %.1f ma pole %.1f i obwod %.1f\n\n", a, b, pole, obwod);

   system("pause");
   return 0;
}
