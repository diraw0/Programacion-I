#include <stdio.h>

int main()
{
    float b,h,pm,sp;
        printf("indique el valor de sus bases:");
        scanf("%f",&b);
        printf("indique el valor de su altura:");
        scanf("%f",&h);
        pm=b*2+h*2;
        sp=b*h;
        printf("el perimetro de el rectangulo es: %.2f\n",pm);
        printf("la superficie de el rectangulo es: %.2f\n",sp);
    
    return 0;

}