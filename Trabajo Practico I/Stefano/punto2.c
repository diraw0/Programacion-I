#include <stdio.h>

int main()
{
    int num1,num2;
    float pr;
        printf("ingrese un numero:");
        scanf("%d",&num1);
        printf("ingrese otro numero:");
        scanf("%d",&num2);
        pr=(num1+num2)/2.0;
        printf("el promedio de la suma es: %.1f",pr);


    return 0;

}