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
 * \param opcion int* param para guardar la opcion elegida del menu.
 * \param msg char* mensaje que se muestra en pantalla con las opciones del menu.
 * \param msgError char* mensaje de error que se muestra cuando la opcion no se encuentra dentro del menu.
 * \param reintentos int cantidad de intentos que puede realizar el usuario.
 * \return int devulve 0 si esta ok.
 *
 */
int utn_showMenu(int *pOpcion);





#endif // UTN_FUNCIONES_H_INCLUDED
