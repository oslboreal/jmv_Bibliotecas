#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <strings.h>
#include "funciones.h"

/*
/   Bibliotecas de validaci�n - Juan Marcos Vallejo
/   Universidad Nacional Tenol�gica.
*/


/** \brief Valida mediante cadena de caracteres si el numero ingresado es numero y si es entero o flotante.
 *
 * \param Numero a evaluar en cadena de caracteres.
 * \param Tipo de dato [1] Flotante [2] Entero.
 * \return [1] Si la cadena ingresada es un numero del tipo especificado - [0] Si la cadena ingresada no es un numero del tipo especificado.
 *
 */
        int validateIsNum(char num[], int tipo)
        {

                    char tipoElegido;
                    int operacion;
                    int i;
                    int acumNum = 0;
                    int longitd = 0;

                    if(tipo==1) // FLOAT
                    {
                        tipoElegido = 'F';
                    } else if(tipo==2) // INTEGER
                    {
                        tipoElegido = 'I';
                    } else // En el caso de que el tipo sea incorrecto.
                        {
                            return -1;
                        }

                    longitd = strlen(num);

        if(tipoElegido == 'F')
        {


                    for(i = 0;i!=longitd;i++)
                    {


                        if(num[i]=='-' || num[i]=='.' || num[i]=='1' || num[i]=='2' || num[i]=='3' || num[i]=='4'
                           || num[i]=='5'  || num[i]=='6'  || num[i]=='7'  || num[i]=='8'  || num[i]=='9'  || num[i]=='0')
                        {
                            acumNum ++;
                        }
                     }
                        if(acumNum!=longitd)
                        {
                            operacion = 0;
                        } else
                        {
                            operacion = 1;
                        }

        }

        if(tipoElegido == 'I') // Lo mismo pero no permite coma decimal.
        {
            for(i = 0;i!=longitd;i++)
                    {


                        if(num[i]=='-' || num[i]=='1' || num[i]=='2' || num[i]=='3' || num[i]=='4'
                           || num[i]=='5'  || num[i]=='6'  || num[i]=='7'  || num[i]=='8'  || num[i]=='9'  || num[i]=='0')
                        {
                            acumNum ++;
                        }
                     }
                        if(acumNum!=longitd)
                        {
                            operacion = 0;
                        } else
                        {
                            operacion = 1;
                        }
        }

                        /* Retornado 1 todos los caracteres son numeros */
                        /* Retornado 0 no todos los caracteres son numeros. . */
                        return operacion;


       }


/** \brief Indica si un numero entero es positivo.
*
* \param Entero a evaluar
* \return 1 Si el entero es positivo. - 0 Si el numero es negativo.
*
*/

        int esPositivo(int x)
        {
           int positivo;
           positivo = 0;
            if(x>=0)
            {
                 positivo = 1;
            }
            return positivo;

        }

/** \brief Intercambia dos enteros
 *
 * \param Primer entero a intercambiar.
 * \param Segundo entero con el que se realizar� el intercambio.
 * \return Retornar�: [1] Si se intercambi� correctamente - [0] Si no se logr� realizar el intercambio.
 *
 */

 int swapInt(int *a, int *b)
     {
         int iniA = *a;
         int iniB = *b;
         int fin = 0;
         int temporal;

         temporal = *a;
         *a = *b;
         *b = temporal;

         if(iniA!=*a&&iniB!=*b)
         {
             fin = 1;
         }

         return fin;
     }

/** \brief Intercambia dos caracteres.
 *
 * \param Primer caracter a intercambiar.
 * \param Segundo caracter con el que se realizar� el intercambio.
 * \return Retornar�: [1] Si se intercambi� correctamente - [0] Si no se logr� realizar el intercambio.
 *
 */

 int swapChar(char *a, char *b)
     {
         char iniA = *a;
         char iniB = *b;
         int fin = 0;
         char temporal;

         temporal = *a;
         *a = *b;
         *b = temporal;

         if(iniA!=*a&&iniB!=*b)
         {
             fin = 1;
         }

         return fin;
     }


/** \brief Intercambia dos caracteres.
 *
 * \param Primer caracter a intercambiar.
 * \param Segundo caracter con el que se realizar� el intercambio.
 * \return Retornar�: [1] Si se intercambi� correctamente - [0] Si no se logr� realizar el intercambio.
 *
 */

 int swapFloat(float *a, float *b)
     {
         float iniA = *a;
         float iniB = *b;
         int fin = 0;
         float temporal;

         temporal = *a;
         *a = *b;
         *b = temporal;

         if(iniA!=*a&&iniB!=*b)
         {
             fin = 1;
         }

         return fin;
     }


/** \brief Recorre un array de numeros con decimal y los ordena.
 *
 * \param Un array de enteros de tipo INT
 * \return Return [1] si pudo ordenarlo o [0] si no pudo.
 *
 */

 int burbujeoFloat(float *arr[])
     {
        return 0;
     }

/** \brief Recorre un array de strings y los ordena.
 *
 * \param Un array de enteros de tipo INT
 * \return Return [1] si pudo ordenarlo o [0] si no pudo.
 *
 */

 int burbujeoEntero(char *arr[])
     {
        return 0;
     }

/** \brief Recorre un array de strings y los ordena.
 *
 * \param Un array de enteros de tipo INT
 * \return Return [1] si pudo ordenarlo o [0] si no pudo.
 *
 */

 int burbujeoChar(int *arr[])
     {
        return 0;
     }


/** \brief Inicializa un menu de consola.
 *
 * \param Un array de enteros de tipo INT
 * \return Return [1] si pudo ordenarlo o [0] si no pudo.
 *
 */

 void loadMenu(int segu,const char menu[])
    {

            system("cls");
            printf("%s", menu);


    }
