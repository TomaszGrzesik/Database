# include <stdio.h>
# include <stdlib.h>
# include "baza.h"

    int N = 0;

void main()
{

    struct student *s;

    s = malloc(sizeof(struct student) *100);

    int a;
    do {
    printf("\nMENU\n\n1.Dodaj Studenta\n2.Usun\n3.Szukaj Studenta\n4.Sortuj\n5.Wczytaj Studentow z Pliku\n6.Wyswietl Liste Studentow\n7.Zapisz\n8.Edytuj\n9.Koniec\n");
    printf("wybierz:");
    scanf("%d",&a);

    switch( a )
{
case 1:
    N++;
        dodaj(s, N);
    break;

case 2:
        usun(s, N);
        N--;
    break;

case 3:
        wyszukaj(s, N);
    break;

case 4:
        sortuj(s, N);
    break;

case 5:
        wczytaj(s, N);
    break;

case 6:

        wyswietl(s, N);
    break;
case 7:

        zapisz(s, N);
    break;
    case 8:

        edytuj(s, N);
    break;

default:
    printf("Koniec\n");
    break;

}
    }while(a != 9);
}

