#ifndef UTN_FUNCIONES_H_INCLUDED
#define UTN_FUNCIONES_H_INCLUDED


/** \brief
 *
 * \param pNumero int* puntero a entero para obtener el numero del usuario.
 * \param msg char* mensaje mostrado al usuario para pedir el numero.
 * \param msgError char* mensaje de error mostrado al no cumplir
 * \param reintentos int cantidad de intentos que el usuario tiene permitido.
 * \param min int rango minimo.
 * \param max int rango maximo.
 * \return int devuelve 0 si esta ok, -1 si esta mal.
 *
 */
int utn_getInt(int *pNumero,char *msg,char *msgError,int reintentos,int min,int max);

/** \brief funcion que permite desplegar un menu de opciones
 *
 * \param pOpcion int* param para guardar la opcion elegida del menu.
 * \param pNumero1 int* puntero al primer numero
 * \param pNumero2 int* puntero al segundo numero
 * \param pSuma int* suma de los numeros
 * \param pResta int* resta de los numeros
 * \param pDivision int* division de los numeros
 * \param pMultiplicar int* multiplicacion de los numeros
 * \param pFactorial int* factorial de los numeros
 * \return int 0 si esta ok.
 *
 */
int utn_showMenu(int *pOpcion,int *pNumero1,int *pNumero2,int *pSuma,int *pResta,int *pDivision,int *pMultiplicar, int *pFactorial);





#endif // UTN_FUNCIONES_H_INCLUDED
