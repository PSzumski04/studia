#include <stdio.h>

    int main()
    
{
    float a, b;

    printf("Pierwsza liczba:");
    scanf("%f", &a);

    printf("Druga liczba:");
    scanf("%f", &b);
    
    printf("wyniki dzialan\n");
    printf("dodawanie: %f + %f = %f\n", a, b, a+b);
    printf("odejmowanie: %f - %f = %f\n", a, b, a-b);
    printf("mnozenie: %f * %f = %f\n", a, b, a*b);

     if (b != 0)
     {
    printf("dzielenie: %f / %f = %f\n", a, b, a/b);
    printf("reszta dzielenia: %d\n", (int)a % (int)b);
     }
     else
     {
    printf("nie mozna dzielic przez 0\n");
     }



    return 0;
}
