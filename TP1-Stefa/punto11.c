#include <stdio.h>

int main()
{
    int d,m,a,ea,ed,da,ma,aa;
        printf("Ingrese el dia de su nacimiento:");
        scanf("%d",&d);
        printf("Ingrese el mes de su nacimiento:");
        scanf("%d",&m);
        printf("Ingrese el año de su nacimiento:");
        scanf("%d",&a);
        printf("Ingrese el dia actual:");
        scanf("%d",&da);
        printf("Ingrese el mes actual:");
        scanf("%d",&ma);
        printf("Ingrese el año actual:");
        scanf("%d",&aa);
        ea=aa-a;
        if(ma > m || (ma == m && da >= d))
        {
            ed=ea;
            printf("Su edad es: %d",ed);
        }
        else
        {
            ed=ea-1;
            printf("Su edad es: %d",ed);
        }
    return 0;

}