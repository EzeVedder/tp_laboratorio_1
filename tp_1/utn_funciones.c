#include <stdio.h>
#include <stdlib.h>
#include "utn_calculator.h"


int utn_getInt(int *pNumero,char *msg,char *msgError,int reintentos,int min,int max)
{
    int retorno;
    int numero;

    while(reintentos>0)
    {
        printf("%s",msg);
        scanf("%d",&numero);
        if(numero>min && numero<max)//si el numero ingresado esta dentro del rango lo guardo y salgo del bucle.
        {
            *pNumero = numero;
            break;
            retorno = 0;
        }
        else
        {
            printf("%s",msgError);
            retorno = -1;
        }
        reintentos--;
    }
    return retorno;
}


int utn_showMenu(int *pOpcion,int *pNumero1,int *pNumero2,int *pSuma,int *pResta,int *pDivision,int *pMultiplicar,int *pFactorial)
{
    int aux1;
    int aux2;
    int opcion;
    int retorno;

    printf(" 1 - Ingresar 1er operando (A=%d)\n 2 - Ingresar 2do operando (B=%d) \n 3 - Calcular todas las operaciones  \n   a) Calcular la suma (A+B)  \n   b) Calcular la resta (A-B) \n   c) Calcular la division (A/B)   \n   d) Calcular la multiplicacion (A*B)  \n   e) Calcular el factorial (A!)    \n 4 - Informar resultados\n 5 - Salir\n ",*pNumero1,*pNumero2);
    retorno = utn_getInt(&opcion,"Seleccione una opcion para continuar.\n","Error. No es una opcion valida, intente de nuevo.\n",3,0,6);
    if(retorno)
    {
        switch(opcion)
        {
        case 1:
            {
                utn_getInt(&aux1,"Ingrese primer operando: ","Error.",1,-32767,32767);
                *pNumero1 = aux1;
                *pOpcion = opcion;
                break;
            }
        case 2:
            {
                utn_getInt(&aux2,"Ingrese segundo operando: ","Error.",1,-32767,32767);
                *pNumero2 = aux2;
                *pOpcion = opcion;
                break;
            }
        case 3:
            {
                sumar(pNumero1,pNumero2,pSuma);
                restar(pNumero1,pNumero2,pResta);
                dividir(pNumero1,pNumero2,pDivision);
                multiplicar(pNumero1,pNumero2,pMultiplicar);


                break;
            }
        case 4:
            {
                printf("\nEl resultado de A+B es: %d",*pSuma);
                printf("\nEl resultado de A-B es: %d",*pResta);
                printf("\nEl resultado de A/B es: %d",*pDivision);
                printf("\nEl resultado de A*B es: %d",*pMultiplicar);
                printf("\nEl factorial de A es y el factorial de B es: r");

                break;
            }
        case 5:
            {
                *pOpcion = opcion;
                break;
            }
        }
        //break;
    }
    return 0;
}
