#include <stdio.h>

int main() 

{
    char wybor;
    char znak;
    int kod;

    printf("Czy chcesz podać znak (z) czy kod ASCII (k)? ");
    scanf(" %c", &wybor);

    if (wybor == 'z' || wybor == 'Z') 
    {
        printf("Podaj znak: ");
        scanf(" %c", &znak);
        kod = (int)znak;
    } 
    else if (wybor == 'k' || wybor == 'K') 
    {
        printf("Podaj kod ASCII (liczbę): ");
        scanf("%d", &kod);
        znak = (char)kod;
    } 
    else 
    {
        printf("Niepoprawny wybór!\n");
        return 1;
    }
  
    if ((kod >= 65 && kod <= 90) || (kod >= 97 && kod <= 122)) 
    {
        printf("Znak '%c' (kod %d) jest literą alfabetu.\n", znak, kod);
    } 
    else 
    {
        printf("Znak '%c' (kod %d) NIE jest literą alfabetu.\n", znak, kod);
    }

    return 0;
}
