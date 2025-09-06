#include <stdio.h>

int main() 
{
    int a, b, c;

        printf("Ingrese el primer numero: ");
        scanf("%d", &a);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &b);
        printf("Ingrese el tercer numero: ");
        scanf("%d", &c);

        if (a < b && b < c) 
        {
            printf("Los numeros estan en orden ascendente\n");
            if (b == a + 1 && c == b + 1) 
            {
                printf("Ademas, son consecutivos\n");
            }
            else
            {
                printf("No son consecutivos\n");
            }
        } 
        else if (a > b && b > c) 
        {
            printf("Los numeros estan en orden descendente\n");
            if (b == a - 1 && c == b - 1) 
            {
                printf("Ademas, son consecutivos\n");
            }
            else 
            {
                printf("No son consecuitvos\n");
            }
        } 
        else 
        {
            printf("Los numeros no estan ordenados\n");
        }
    return 0;

}
