#include <stdio.h>
#include <stdlib.h>


int utn_getInt(int *pNumero,char *msg,char *msgError,int reintentos,int min,int max)
{
    int retorno;
    int numero;

    printf("%s",msg);
    scanf("%d",&numero);
    if(numero>min && numero<max)
    {
        *pNumero = numero;
        //break;
        retorno = 0;
    }
    else
    {
        printf("%s",msgError);
        retorno = -1;
    }

    return retorno;
}



























/*int utn_showMenu(int *opcion,char *msg,char *msgError,int reintentos)
{
    int i;
    int reintentos;

    printf("%s")





    return retorno;
}*/
