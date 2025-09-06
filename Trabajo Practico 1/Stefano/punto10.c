#include <stdio.h>
#include <math.h>

int main()

{
    float l1,l2,l3,h;
        printf("Ingrese un valor positivo:");
        scanf("%f",&l1);
        printf("Ingrese otro valor positivo:");
        scanf("%f",&l2);
        printf("Ingrese otro valor positivo:");
        scanf("%f",&l3);
        if(l1<=0 || l2<=0 || l3<=0)
        {
            printf("Los valores ingresados no son validos");
        }
        if( (l1 + l2 <= l3) || (l1 + l3 <= l2) || (l2 + l3 <= l1) ) 
        {
            printf("Los valores no forman un triangulo\n");
        }    
        else
        {
            h=sqrt(l1+l2);
            if(h==l3)
            {
                printf("Si son lados de un triangulo rectangulo");
            }
            else
            {
                h=sqrt(l2+l3);
                if (h==l1)
                {
                    printf("Si son lados de un triangulo rectangulo");
                }
                else
                {
                    h=sqrt(l1+l3);
                    if(h==l2)
                    {
                        printf("Si son lados de un triangulo rectangulo");
                    }
                    else
                    {
                        printf("No son lados de un triangulo rectangulo");
                    }
                    
                }
            }
        }    
    return 0;    
}


