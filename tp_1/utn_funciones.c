#include <stdio.h>
#include <stdlib.h>


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


int utn_showMenu(int *pOpcion)
{
    //int i;
    int opcion;
    int retorno;

    printf(" 1 -\n 2 -\n 3 - \n 4 -\n");
    retorno = utn_getInt(&opcion,"Seleccione una opcion para continuar.\n","Error. No es una opcion valida, intente de nuevo.\n",3,0,6);
    if(retorno)
    {
        //break;
        *pOpcion = opcion;
    }

    return 0;
}
