#include <stdio.h>
#include <stdlib.h>
#include "utn_funciones.h"


int main()
{
    int numero1=1;
    int numero2=1;
    int opcion=0;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    int factorial;

    //utn_getInt(&numero,"Ingrese un numero: ","Error. Ingrese de nuevo.\n",3,0,100);
    do
    {
        utn_showMenu(&opcion,&numero1,&numero2,&suma,&resta,&division,&multiplicacion,&factorial);
        printf("\n%d",opcion);

    }while(opcion!=5);
    printf("\nProceso finalizado.");

    return 0;
}
