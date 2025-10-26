#include <stdio.h>

    int main()
    
{
    float a, b, c;

    printf("pierwsza liczba:");
    scanf("%f", &a);

    printf("\ndruga liczba:");
    scanf("%f", &b);

    printf("\ntrzecia liczba:");
    scanf("%f", &c);

    float najwieksza;

    if (a >= b && a >= c) 
    {
        najwieksza = a;
    } 
    else if (b >= a && b >= c) 
    {
        najwieksza = b;
    } 
    else 
    {
        najwieksza = c;
    }

    printf("\nnajwieksza liczba to: %f\n", najwieksza);

    return 0;
}

