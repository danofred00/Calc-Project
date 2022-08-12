#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include "fonctions.h"

/**
 * @file main.c
 *@autor Danofred0
*/

int main(int argc, char *argv[])
{
       int choice, div_choice, ln_choice, eqt_choice;

       // partie de declaration des variables
       float a, b;
       float x; // utililser au nivéau des racines carrées et autre
       int puis, n, p;
       int q, r, a1, b1;
       float angle; // vas contenir l'angle qui sera entrer par l'utilisateur
       Bool con = false, div_con = false, ln_con = false, eqt_con = false; /*
       cette variable defini si l'utilisateur souhaite continuer d'effectuer
       une operation ou pas
       */

       // --------- debut du

       title(); // affichage du titre
       menu(); // affichage du menu

       printf("\t >> Choisir une operation : ");
       scanf("%d", &choice);

       switch(choice)
       {
       case 1: // addition
              do{
                     printf("\t [addition]> Entrez 02 nombres : ");
                     scanf("%f %f", &a, &b);
                     printf("\t [addition]> La somme vaut : %f  \n", addition(a, b));
                     printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                     scanf("%d", &con);
              } while(con == true);
              break;
       case 2: //soustraction
              do{
                 printf("\t [soustraction]> Entrez 02 nombres : ");
                 scanf("%f %f", &a, &b);
                 printf("\t [soustraction]> La difference vaut : %f  \n", soustraction(a, b));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 3: // division
                printf("\t [division]> 1. Division Euclidienne \n");
                printf("\t             2. Division \n");
                printf("\t Choisir un nombre : ");
                scanf("%d", &div_choice);
                switch(div_choice)
                {
                case 1: // dividion euclidienne
                    do{
                        printf("\t ---> [div-eucli]> Entrez 02 nombres entiers : ");
                        scanf("%d %d", &a1, &b1);
                        div_eucli(a1, b1, &r, &q);
                        printf("\t ---> [div-eucli]> Reste = %d | Quotient = %d \n", r, q);
                        printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                        scanf("%d", &div_con);
                    }while(div_con == true);
                    break;
                case 2: // division directe
                    do{
                        printf("\t ---> [div]> Entrez 02 nombres : ");
                        scanf("%f %f", &a, &b);
                        printf("\t ---> [div]> Le rapport %f / %f vaut %f \n", a, b, div_simple(a, b));
                        printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                        scanf("%d", &div_con);
                    }while(div_con == true);
                    break;
                default:
                    printf("\n\t -> Choix indisponible, veuillez entrer un nombre correct !!! \n\n");
                    break;
                }

                break;
       case 4: // multiplication
              do{
                 printf("\t [multiplication] > Entrez 02 nombres : ");
                 scanf("%f %f", &a, &b);
                 printf("\t [multiplication] > Le produit vaut : %f  \n", mutiplication(a, b));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 5: // sinus
              do{
                 printf("\t [sin]> Entrez un angle en degre : ");
                 scanf("%f", &angle);
                 printf("\t [sin]> Le sin(%.2f) = %f  \n", angle, sinus((double)angle));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 6: // cosinus
              do{
                 printf("\t [cos]> Entrez un angle en degre : ");
                 scanf("%f", &angle);
                 printf("\t [cos]> Le cos(%.2f) = %f  \n", angle, cosinus((double)angle));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 7: // tangente
              do{
                 printf("\t [tan]> Entrez un angle en degre : ");
                 scanf("%f", &angle);
                 printf("\t [tan]> Le tan(%.2f) = %f  \n", angle, tangente((double)angle));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 10: // arcsinus
              do{
                 printf("\t [asin]> Entrez le sinus d'un angle : ");
                 scanf("%f", &angle);
                 printf("\t [asin]> Le arcsin(%f) = %.2f \n", angle);
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 9: // arccosinus
              do{
                 printf("\t [acos]> Entrez le cosinus d'un angle : ");
                 scanf("%f", &angle);
                 printf("\t [acos]> Le arccos(%f) = %.2f  \n", angle, arccosinus((double)angle));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
       case 8: // arctangente
              do{
                 printf("\t [atan]> Entrez un angle en degre : ");
                 scanf("%f", &angle);
                 printf("\t [atan]> Le arctan(%f) = %.2f  \n", angle, tangente((double)angle));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 11: // racine carrée
              do{
                 do{
                     printf("\t [racine-2]> Entrez un nombre positif : ");
                     scanf("%f", &x);
                 }while(x < 0);
                 // tant que l'utilisateur n'entre pas une valeur positive, on repete le processus
                 printf("\t [racine-n]> Sa racine carree vaut : %f  \n", racine2((double)x));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 12: // puissance n-ieme
            do{
                 printf("\t [puissance-n]> Entrez 02 nombres reels sous la forme <nombre> <puissance> : ");
                 scanf("%f %d", &x, &puis);
                 printf("\t [puissance-n]> Le nombre %.2f a la puissance %d vaut : %.2f \n", x, puis, puissancen((double)x, puis));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 13: // racine n-ieme [fonction a modifier]
            do{
                 printf("\t [racine-n]> Entrez 02 nombres reels sous la forme <nombre> <racine> : ");
                 scanf("%f %d", &x, &puis);
                 printf("\t [racine-n]> Le nombre %f a la racine %d-ieme vaut : %f \n", x, puis, racinen((double)x, puis));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 14: // factoriel
            do{
                do{
                 printf("\t [factoriel]> Entrez un nombre entier positif : ");
                 scanf("%d", &n);
                } while(n < 0);
                 printf("\t [factoriel]> Factoriel(%d) = %d \n", n, factoriel(n));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 15: // combinaison
            do{
                do{
                 printf("\t [combinaison]> Entrez 02 nombres entier positif n et p : ");
                 scanf("%d %d", &n, &p);
                } while((n<0) || (p<0));
                 printf("\t [combinaison]> Combinaison de %d dans %d = %d \n", n, p, combinaison(n, p));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 16: // arrangement
            do{
                do{
                 printf("\t [arrangement]> Entrez 02 nombres entier positif n et p : ");
                 scanf("%d %d", &n, &p);
                } while((n<0) || (p<0));
                 printf("\t [arrangement]> Arrangement de %d dans %d = %d \n", n, p, arrangement(n, p));
                 printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                 scanf("%d", &con);
              } while(con == true);
              break;
        case 17: // logarithm
            do{
                printf("\t [logarithme]> 1. ln \n");
                printf("\t               2. log10 \n");
                printf("\t Choisir un nombre : ");
                scanf("%d", &ln_choice);

                switch(ln_choice)
                {
                case 1:
                    do{
                        do{
                            printf("\t ---> [ln]> Entrez un nombre strictement positif : ");
                            scanf("%f", &x);
                        }while(x <= 0);

                        printf("\t ---> [ln]> ln(%f) = %f \n", x, ln((double)x));
                        printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                        scanf("%d", &ln_con);
                    }while(ln_con = true);
                    break;
                case 2:
                    do{
                        do{
                            printf("\t ---> [log10]> Entrez un nombre strictement positif : ");
                            scanf("%f", &x);
                        }while(x <= 0);

                        printf("\t ---> [log10]> log10(%f) = %f \n", x, logarithm10((double)x));
                        printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                        scanf("%d", &ln_con);
                    }while(ln_con = true);
                    break;
                default:
                    printf("\n\t -> Choix indisponible, veuillez entrer un nombre correct !!! \n\n");
                    break;
                }

                printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                scanf("%d", &con);
            }while(con == true);
            break;
        case 18: // exponantiel
            do{
                printf("\t [exp]> Entrez un nombre : ");
                scanf("%f", &x);
                printf("\t [exp]> Exp(%f) = %f \n", x, exponentiel((double)x));
                printf("\t Souhaitez vous continuer ? (0. non | 1. oui) : ");
                scanf("%d", &con);
            } while(con == true);
            break;
        case 19:
            //pass
            break;
        case 0:
            printf("\n\t [Quitter]> GOODBYE !!! \n");
            exit(EXIT_SUCCESS);
            break;
       default:
              printf("\n\t [] Choix indisponible, veuillez entrer un nombre correct !!! \n\n");
       }

       system("pause");
       return 0;
}
