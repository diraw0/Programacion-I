#include <stdio.h>

int main() 
{
    float tf, tc;
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%f", &tf);
        tc = (tf - 32) * (5 / 9.0);
        printf("la temperaruta en grados fahrenheit es:%.2f\n",tf);
        printf("la temperaruta en grados centigrados es: %.2f\n",tc);

    return 0;
}
