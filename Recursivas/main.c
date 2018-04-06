#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula el factorial de un numero
 *
 * \param int Un numero
 * \return int El factorial del numero ingresado como parametro
 *
 */
int factorial(int);

int main()
{
    int numero = 5;
    int factor;

    factor = factorial(numero);
    printf("El factorial es %d", factor);
    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero == 0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = numero * factorial/*llama de nuevo a la funcion*/(numero-1);
    }
    return respuesta;
}



/*int numero;
    int factorial=1;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    for(i=1;i<=numero;i++)
    {
        factorial = factorial * i;
    }
    printf("El factorial de %d es %d", numero, factorial);
*/
