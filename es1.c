#include <stdio.h>

int main()
{
    float a, b, rapporto;


    do
    {
    printf("Inserire il primo numero\n");
    scanf("%f", &a);
    printf("Inserire il secondo numero\n");
    scanf("%f", &b);

    if(a>b)
        rapporto = b/a;
    else 
        rapporto = a/b;
    printf("Il rapporto tra i due numeri è %f\n", rapporto);
    }while(a != 0 && b != 0);

    return 0;
}