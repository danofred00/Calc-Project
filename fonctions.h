/*
 ce fichier contient les differents prototype de nos fonctions
*/

#ifndef FONCTIONS_H
#define FONCTIONS_H

       #define PI 3.14
       #define Pi 3.1415926535897932384626433832795

       typedef enum Bool
       {
              false, // vaut 0
              true // vaut 1
       } Bool;

       float addition(float a, float b);
       float soustraction(float a, float b);
       float mutiplication(float a, float b);
       float div_simple(float a, float b);
       void div_eucli(int a, int b, int *r, int *q);
       double sinus(double a);
       double cosinus(double a);
       double tangente(double a);
       double arcsinus(double a);
       double arccosinus(double a);
       double arctangente(double a);
       double racine2(double a);
       double racinen(double a, int racine);
       double puissancen(double nombre, int exposant);
       double puissance2(double nombre);
       int factoriel(int nombre);
       int arrangement(int n, int p);
       int combinaison(int n, int p);
       double ln(double x);
       double logarithm10(double x);
       double exponentiel(double x);
       double equation_degre1(double a, double b);
       double equation_degre2_discriminant(double a, double b, double c);
       void title();
       void menu();
       void clear_screen();

#endif
