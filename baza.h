#include <stdio.h>


    struct student {
        char imie[30];
        char nazwisko[30];
        int nr;
        };


void dodaj(struct student *s, int N);
void usun(struct student *s, int N);
void wyszukaj(struct student *s, int N);
void sortuj(struct student *s, int N);
void wczytaj(struct student *s, int N);
void wyswietl(struct student *s, int N);
void zapisz(struct student *s, int N);
void edytuj(struct student *s, int N);




