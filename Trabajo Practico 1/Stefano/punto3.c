#include <stdio.h>
#include <math.h> 

int main() 
{
    int num1, num2;
    float mg;
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);
        mg= sqrt(num1 * num2);
        printf("La media geometrica es: %.2f\n", mg);

    return 0;

}