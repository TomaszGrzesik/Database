#include "baza.h"


void dodaj(struct student *s, int N)
    {
        printf("podaj imie:\n");
        scanf("%s", s[N-1].imie);
        printf("podaj nazwisko:\n");
        scanf("%s", s[N-1].nazwisko);
        printf("podaj nr:\n");
        scanf("%d", &s[N-1].nr);
        system( "cls" );
    }

void usun(struct student *s, int N)
{
    int i;
    int n;
    int a;
    int temp;
    char tempChar;
    printf("podaj nr indexu:");
    scanf("%d", &a);

    for(i=0;i<N-1;i++)
    {
        if(a == s[i].nr)
        {
            temp = s[i+1].nr;
            s[i+1].nr = s[i].nr;
            s[i].nr = temp;
            for(n=0; n<30; n++)
            {
                tempChar = s[i+1].imie[n];
                s[i+1].imie[n] = s[i].imie[n];
                s[i].imie[n] = tempChar;

                tempChar = s[i+1].nazwisko[n];
                s[i+1].nazwisko[n] = s[i].nazwisko[n];
                s[i].nazwisko[n] = tempChar;
            }
        }
    }
    free(s[N].nr);
    free(s[N].imie);
    free(s[N].nazwisko);
    system( "cls" );
}
void wyszukaj(struct student *s, int N)
{
    int a;
    int i;
    printf("podaj nr indexu:");
    scanf("%d", &a);

    for(i=0; i<N; i++)
        {
            if(a == s[i].nr)
            {
                printf("\nwyszukano studenta:\n");
                printf("\n %s %s %d\n", s[i].imie, s[i].nazwisko, s[i].nr);
            }

        }
    int d;
    printf("\n0 = powrot:");
    scanf("%d", &d);
    if(d == 0)
    {
        system( "cls" );
    }

}
void sortuj(struct student *s, int N)
{
    int i;
    int j;
    int n;
    int temp;
    char tempChar;

    for(i=0;i<N;i++)
    {
    for(j=0; j < N-1; j++)
    {
        if(s[j].nr > s[j+1].nr)
        {
            temp = s[j+1].nr;
            s[j+1].nr = s[j].nr;
            s[j].nr = temp;
            for(n=0; n<30; n++)
            {
                tempChar = s[j+1].imie[n];
                s[j+1].imie[n] = s[j].imie[n];
                s[j].imie[n] = tempChar;

                tempChar = s[j+1].nazwisko[n];
                s[j+1].nazwisko[n] = s[j].nazwisko[n];
                s[j].nazwisko[n] = tempChar;
            }
        }
    }
    }
    system( "cls" );

}
void wczytaj(struct student *s, int N)
{
    FILE *plik;
    plik=fopen("Baza.txt","r");
    for(N=0;N<=100;N++)
        {
fscanf(plik,"%s %s %d", s[N].imie, s[N].nazwisko, &s[N].nr );
printf("%s %s %d\n", s[N].imie, s[N].nazwisko, s[N].nr);
        }
    fclose(plik);
    int d;
    printf("\n0 = powrot:");
    scanf("%d", &d);
    if(d == 0)
    {
        system( "cls" );
    }
}

void wyswietl(struct student *s, int N)
{
    int i;
    printf("\n|       Imie       |       Nazwisko       |       Nr.Indexu       |");
    printf("\n===================================================================\n");
    for(i=0;i<N;i++)
    {
    printf("%-24s %-28s %-24d\n", s[i].imie, s[i].nazwisko, s[i].nr);
    }
    int d;
    printf("\n0 = powrot:");
    scanf("%d", &d);
    if(d == 0)
    {
        system( "cls" );
    }

}
void edytuj(struct student *s, int N)
{
    int a;
    int i;
    printf("podaj nr indexu:");
    scanf("%d", &a);

    for(i=0; i<N; i++)
        {
            if(a == s[i].nr)
            {
        printf("podaj imie:\n");
        scanf("%s", s[i].imie);
        printf("podaj nazwisko:\n");
        scanf("%s", s[i].nazwisko);
        printf("podaj nr:\n");
        scanf("%d", &s[i].nr);
            }

        }
}
void zapisz(struct student *s, int N)
{
    FILE *zapis;
    zapis=fopen("Baza.txt","w");
    for(N=0;N<100;N++)
        {
    fprintf(zapis, "%s %s %d\n", s[N].imie, s[N].nazwisko, s[N].nr);
        }
    fclose(zapis);
}




