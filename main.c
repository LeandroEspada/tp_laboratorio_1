#include<stdio.h>
#include<stdlib.h>
#include"Funciones.h"

int main()
{
    float num1=0,num2=0;
    int val,numaux;
    do
    {
        fflush(stdin);
        system("cls");
        printf("A=%.2f         B=%.2f\n\n",num1,num2);
        printf("1- Ingresar valor A\n");
        printf("2- Ingresar Valor B\n");
        printf("3- Realizar suma A+B\n");
        printf("4- Realizar resta A-B\n");
        printf("5- Realizar multiplicacion A*B\n");
        printf("6- Realizar division A/B\n");
        printf("7- Realizar factorial de A!\n");
        printf("8- Realizar todas los calculos\n");
        printf("9- Salir\n\n");
        scanf("%d",&val);
        system("cls");
        switch (val)
            {
            case 1:
                {
                    num1=pedirnumero();
                    break;
                }
            case 2:
                {
                    num2=pedirnumero();
                    break;
                }
            case 3:
                {
                    printf("La suma es:%.2f\n",suma(num1,num2));
                    system("pause");
                    break;
                }
            case 4:
                {
                    printf("La resta es:%.2f\n",resta(num1,num2));
                    system("pause");
                    break;
                }
            case 5:
                {
                    printf("La multiplicacion es:%.2f\n",multiplicacion(num1,num2));
                    system("pause");
                    break;
                }
            case 6:
                {
                    if(num2==0)
                    {
                        printf("No se puede hacer una division por cero\n");
                        system("pause");
                    }
                    else
                    {
                    printf("La division es:%.2f\n",division(num1,num2));
                    system("pause");
                    }
                    break;
                }
            case 7:
                {
                    system("cls");
                    numaux=round(num1);
                    if((numaux-num1)!=0)
                    {
                        printf("No se puede realizar el factorial de un numero con decimales\n");
                        system("pause");
                    }
                    else
                    {
                        if(num1==0)
                        {
                            printf("El factorial es: 0\n");
                            system("pause");
                        }
                        else
                        {
                        printf("El factorial es:%d\n",factorial(num1));
                        system("pause");
                        }
                    }
                    break;
               }
            case 8:
                {
                    printf("La suma es:%.2f\n",suma(num1,num2));
                    printf("La resta es:%.2f\n",resta(num1,num2));
                    printf("La multiplicacion es:%.2f\n",multiplicacion(num1,num2));
                    if(num2==0)
                    {
                        printf("No se puede hacer una division por cero\n");
                    }
                    else
                    {
                    printf("La division es:%.2f\n",division(num1,num2));
                    }
                    numaux=round(num1);
                    if((numaux-num1)!=0)
                    {
                        printf("No se puede realizar el factorial de un numero con decimales\n");
                        system("pause");
                    }
                    else
                        {
                            if(num1==0)
                            {
                                printf("El factorial es: 0\n");
                                system("pause");
                            }
                            else
                            {
                                printf("El factorial es:%d\n",factorial(num1));
                                system("pause");
                                break;
                            }
                        }
                }
            case 9:
                {
                    break;
                }
            default:
                {
                    system("cls");
                    printf("Ingreso un valor no valido\n");
                    system("pause");
                }
            }
        }while(val!=9);
}




