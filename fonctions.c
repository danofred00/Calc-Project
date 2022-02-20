/*
 ce fichier contient les differentes fonctions de notre programme
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

void title()
{
       printf("\t*******************************************\n");
       printf("\t*                @DANOFRED0               *\n");
       printf("\t*           PROJET CALCULATRICE           *\n");
       printf("\t*        SCIENTIFIQUE EN LANGAGE C        *\n");
       printf("\t*******************************************\n\n");
}

void menu()
{
       printf("\tBienvenu sur notre Calculatrice, les differentes options sont les suivants : \n\n");
       printf("\t01. Addition       \t 11. Racine Carree\n");
       printf("\t02. Soustraction   \t 12. Puissance n\n");
       printf("\t03. Division       \t 13. Racine n-ieme\n");
       printf("\t04. Multiplication \t 14. Factoriel\n");
       printf("\t05. Sinus          \t 15. Combinaison \n");
       printf("\t06. Cosinus        \t 16. Arrangement\n");
       printf("\t07. Tangente       \t 17. Logarithme\n");
       printf("\t08. Arctangente    \t 18. Exponentiel\n");
       printf("\t09. Arccosinus     \t 19. Resoudre des equations\n");
       printf("\t10. Arcsinus       \t 00. Quitter\n\n");
}

float addition(float a, float b)
{
       return a+b;
}

float soustraction(float a, float b)
{
       return a-b;
}

float mutiplication(float a, float b)
{
       return a*b;
}

float div_simple(float a, float b)
{
       return a/b;
}

void div_eucli(int a, int b, int *r, int *q)
{
       *q = a/b;
       *r = a%b;
}

double sinus(double a)
{
       a = (a * PI) / 180;
       return sin(a);
}

double cosinus(double a)
{
       a = (a * PI) / 180;
       return cos(a);
}

double tangente(double a)
{
       a = (a * PI) / 180;
       return tan(a);
}

double arcsinus(double a)
{
    return (asin(a) * 180) / Pi;
}

double arccosinus(double a)
{
    return (acos(a) * 180) / Pi;
}

double arctangente(double a)
{
    return (atan(a) * 180) / Pi;
}

double racine2(double a)
{
       return sqrt(a);
}

double racinen(double a, int racine)
{
       return pow(a, (double)(1/racine));
}

double puissancen(double nombre, int exposant)
{
       return pow(nombre, (double)exposant);
}

int factoriel(int nombre)
{
       if(nombre == 0)
              return 1;
       else
              return nombre * factoriel(nombre-1);
}

int arrangement(int n, int p)
{
       int a = (factoriel(n) / factoriel(n - p));
       return a;
}

int combinaison(int n, int p)
{
       return (arrangement(n, p) / factoriel(p));
}

double puissance2(double nombre)
{
       return puissancen(nombre, 2);
}

double ln(double x)
{
       return log(x);
}

double logarithm10(double x)
{
       return log10(x);
}

double exponentiel(double x)
{
       return exp(x);
}

double equation_degre1(double a, double b)
{
       return ((-b) / a);
}

double equation_degre2_discriminant(double a, double b, double c)
{
       return ((b*b) - (4*a*c));
}

void clear_screen()
{
       system("cls");
}
