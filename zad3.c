#include <stdio.h>

    int main()
    
{
    float a, b;

    printf("Pierwsza liczba:");
    scanf("%f", &a);

    printf("\nDruga liczba:");
    scanf("%f", &b);

    if (a > b) 
    {
        printf("wieksza liczba to: %f\n", a);
    } 
    else if (b > a) 
    {
        printf("wieksza liczba to: %f\n", b);
    } 
    else 
    {
        printf("\nliczby sa rowne");
    }
    return 0;
}

