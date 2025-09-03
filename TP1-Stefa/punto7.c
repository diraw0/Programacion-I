#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main()
{
    float r,d,a,p;
        printf("ingrese el radio de su circulo:");
        scanf("%f",&r);
        d=2*r;
        p=2*M_PI*r;
        a=M_PI*r*r;
        printf("el diametro de su circulo es: %.2f\n",d);
        printf("el perimetro de su circulo es: %.4f\n",p);
        printf("el area de su circulo es: %.4f\n",a);
    
    return 0;

}