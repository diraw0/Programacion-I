#include <stdio.h>

int main() {
    int a, b, c,menor,medio,mayor;
        printf("Ingrese el primer numero: ");
        scanf("%d", &a);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &b);
        printf("Ingrese el tercer numero: ");
        scanf("%d", &c);
        if (a == b && b == c) {
            printf("Son Iguales\n");
            return 0;
        }
        if (a <= b && a <= c) 
        {
            menor = a;
        } else if (b <= a && b <= c) 
        {
            menor = b;
        } else
        {
            menor = c;
        }
        if (a >= b && a >= c) 
        {
            mayor = a;
        } else if (b >= a && b >= c) 
        {
            mayor = b;
        } else {
            mayor = c;
        }
        medio = a + b + c - menor - mayor;

        printf("Los numeros ordenados en forma ascendente son: %d %d %d\n", menor, medio, mayor);

    return 0;
}
