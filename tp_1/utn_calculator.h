#ifndef UTN_CALCULATOR_H_INCLUDED
#define UTN_CALCULATOR_H_INCLUDED


/** \brief calcula la suma de dos numeros enteros.
 *
 * \param A int* el primer operando que recibe.
 * \param B int* el segundo operando que recibe.
* \param pSuma int* puntero al resultado
 * \return int 0 si esta ok.
 *
 */

int sumar(int *A, int *B,int *Suma);


/** \brief calcula la resta entre dos numeros enteros.
 *
 * \param A int* puntero al primer numero recibido
 * \param B int* punero al segundo numero recibido
 * \param pResta int* puntero al resultado
 * \return int 0 si esta ok.
 *
 */
int restar(int *A, int *B,int *pResta);

/** \brief cociente de dos numeros enteros
 *
 * \param A int* puntero al primer numero.
 * \param B int* puntero al segundo numero.
 * \param pDivision int* division
 * \return int 0 si esta ok.
 *
 */
int dividir(int *A, int *B,int *pDivision);


/** \brief multiplicacion de dos numeros.
 *
 * \param A int* puntero al primer numero.
 * \param B int* puntero al segundo numero.
 * \param pDivision int* multiplicacion
 * \return int 0 si esta ok.
 *
 */
int multiplicar(int *A, int *B,int *pMultiplicar);






#endif // UTN_CALCULATOR_H_INCLUDED
