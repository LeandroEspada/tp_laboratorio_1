/** \brief Recibe 2 valores desde el programa principal y realiza la suma entre ellos.
 *
 * \param a float, primer valor numerico que se envia desde el programa principal.
 * \param b float, segundo valor numerico que se envia desde el programa principal.
 * \return retorna la suma directamente sin asignarla a ninguna variable.
 *
 */
float suma(float a, float b)
{
    return a+b;
}
/** \brief Recibe 2 valores desde el programa principal y realiza la resta entre ellos.
 *
 * \param a float, primer valor numerico que se envia desde el programa principal.
 * \param b float, segundo valor numerico que se envia desde el programa principal.
 * \return retorna la resta directamente sin asignarla a ninguna variable.
 *
 */
float resta(float a, float b)
{
    return a-b;
}
/** \brief Recibe 2 valores desde el programa principal y realiza la multiplicacion entre ellos.
 *
 * \param a float, primer valor numerico que se envia desde el programa principal.
 * \param b float, segundo valor numerico que se envia desde el programa principal.
 * \return retorna la multiplicacion directamente sin asignarla a ninguna variable.
 *
 */
float multiplicacion(float a,float b)
{
    return a*b;
}
/** \brief Recibe 2 valores desde el programa principal y realiza la division entre ellos.
 *
 * \param a float, primer valor numerico que se envia desde el programa principal.
 * \param b float, segundo valor numerico que se envia desde el programa principal.
 * \return retorna la division directamente sin asignarla a ninguna variable. Lo hace en tipo flotante.
 *
 */
float division(float a, float b)
{
    return a/b;
}
/** \brief Recibe 1 valor desde el programa principal y realiza el factorial del mismo.
 *
 * \param a int, se envia un valor numerico que se envia desde el programa principal. Y realiza la operacion de forma recursiva.
 * \return retorna el factorial directamente sin asignarlo a ninguna variable.
 *
 */
int factorial(int a)
{
    if(a==1)
    {
        return a;
    }
    else
    {
        a=a*factorial(a-1);
    }

}
/** \brief  No recibe ningun valor desde el programa principal y realiza el pedido de un valor numerico por pantalla(consola).
 *
 * \param void, No hay valores enviados desde el programa principal.
 * \return num int, retorna el valor ingresado por pantalla en la variable "num".
 *
 */
float pedirnumero(void)
{
    float num;
    system("cls");
    printf("Ingresar valor: ");
    scanf("%f",&num);
    return num;
}


