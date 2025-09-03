#include <stdio.h>
int main()
{
    float m, dm, cm;
        printf("Ingrese la medida en metros: ");
        scanf("%f", &m);
        dm = m * 10;
        cm = m * 100;
        printf("la distancia en metros es:%.2f\n", m);
        printf("la distancia en decimetros es:%.2f\n", dm);
        printf("la distancia en centimetros es:%.2f\n", cm);

    return 0;
}