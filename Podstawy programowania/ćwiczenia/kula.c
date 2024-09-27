/* Program obliczajacy objetosc kuli */

#include <math.h>     /* funkcja pow, stala M_PI */
#include <stdio.h>    /* funkcje printf, scanf   */
#include <stdlib.h>   /* funkcja system          */

float promien;          /* promien kuli  */
float objetosc;         /* objetosc kuli */
const float PI = 3.14;  /* stala PI      */

int main()
{
   system("cls");                         /* wyczyszczenie ekranu   */
   printf("%s", "Podaj promien kuli: ");  /* wyswietlenie napisu    */
   scanf("%f", &promien);                 /* odczyt z klawiatury    */
   objetosc = 4.0/3.0*PI*pow(promien, 3); /* wyrazenie arytmetyczne */
   
   printf("Objetosc kuli to %5.1f\n", objetosc);
   printf("Kula o promieniu %.1f ma objetosc %.1f\n\n", promien, objetosc);
   system("pause");                       /* zatrzymanie programu   */
   return 0;                              /* wyjscie z programu     */
}

