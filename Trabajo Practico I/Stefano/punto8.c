#include <stdio.h>

int main()
{
    double pp,iva,ib,im,total;
        printf("Ingresar el precio del producto:");
        scanf("%lf",&pp);
        iva=pp+pp*21.f/100;
        ib=pp+pp*2.5f/100;
        im=pp+pp*1.5f/100;
        total=pp+ pp*21.f/100+pp*2.5f/100+pp*1.5f/100;
        printf("El precio total del producto es: %.4f\n",total);
        printf("El precio con iva incluido es: %.4f\n",iva);
        printf("El precio con ingresos brutos incluidos es:: %.4f\n",ib);
        printf("El precio con impuesto municipal incluido es: %.4f\n",im);


    return 0;

}