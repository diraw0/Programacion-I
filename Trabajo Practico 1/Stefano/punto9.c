#include <stdio.h>

int main()
{
    float x1,y1,x2,y2,b,h,pm,sp;
        printf("ingrese la primera coordenada del punto 1:");
        scanf("%f",&x1);
        printf("ingresar la segunda coordenada del punto 1:");
        scanf("%f",&y1);
        printf("ingrese la primera coordenada del punto 2:");
        scanf("%f",&x2);
        printf("ingrese la segunda coordenada del punto 2:");
        scanf("%f",&y2);
        b=x2-x1;
        h=y2-y1;
        if (b<=0)
        {
            printf("Error: Las coordenadas no forman un rectangulo valido.\n");
        }
        if (h<=0)
        {
            printf("Error: Las coordenadas no forman un rectangulo valido.\n");
        }
        else
        {
            pm=b+b+h+h;
            sp=b*h;
            printf("El perimetro de el rectangulo es:%.1f\n",pm);
            printf("La superficie de el rectangulo es:%.1f\n",sp);
        }
    return 0;
}