#include<stdio.h>
#include<string.h>

//Zad 1
int prodP(int iloczyn){
    int wynik;

    if (iloczyn < 2)
    {
        return 1; // co???
    }
    if (iloczyn % 2 == 0)
    {
        wynik = iloczyn * prodP(iloczyn - 2); 

    }
    else{
        wynik = (iloczyn - 1) * prodP(iloczyn - 2);

    }
    return wynik;
}
//Zad 2
void pointer(){
    char ch = 'A';
    char *wsk;
    
    wsk = &ch;
    *wsk = 'B';

    printf("Adres ch: %d. Wartość ch = %c\n", &wsk, ch);

    int i, tab[5];
    for (i = 0; i < 5; i++)
    {
        printf("Adres tab[%d] = %d\n", i, &tab[i]);
    }
    
    int *wsk2;
    for(i = 0; i < 5; i++)
    {
        wsk2 = &tab[i];
        *wsk2 = i;
        // printf("Tablica: %d\n", tab[i]);
    }
}
// zad 3
struct person
{
    char imie[20], nazwisko[30];
    int wzrost;
};
struct person persons(){
    //tworzę tablicę
    struct person osoby[5];
    
    //tworzę zmienne na elementy struktury
    struct person p1 = {"Adam", "Abacki", 179};
    struct person p2 = {"Barbara", "Babacka", 172};
    struct person p3 = {"Fifonż", "Nowakowski", 159};
    struct person p4 = {"Celina", "Cabacka", 183};
    struct person p5 = {"Edward", "Ebacki", 168};

    //przypisuję zmienne do danego indeksu w tablicy
    osoby[0] = p1;
    osoby[1] = p2;
    osoby[2] = p3;
    osoby[3] = p4;
    osoby[4] = p5;

            //ogromny wzrost bo szukamy mniejszego od niego i później mniejszego od kolejnych
    int i, wzrost = 100000;
            //zmienna (jak np int) do której zwracamy wszystkie dane - imie, nazwisko, wzrost
    struct person malaOsoba; 

    for (i = 0; i < 5; i++)
    {
        if (osoby[i].wzrost < wzrost)
        {
            wzrost = osoby[i].wzrost;
            malaOsoba = osoby[i]; //zwracanie WSZYSTKICH danych ze struktury do jednej zmiennej najnizszej osoby
        }
    }
    return malaOsoba;
}
// zad 4
void saveF(){
    FILE *plik;

    plik = fopen("persons.txt", "w");
    fprintf(plik, "%s %s %d\n", persons().imie, persons().nazwisko, persons().wzrost);
    
    fprintf(plik, "Cecylia Cabacka 181\n");
    fprintf(plik, "Darius Dabacki 195\n");
    fprintf(plik, "Gertruda Babacka 192\n");
    fprintf(plik, "Celestyna Cabacka 156\n");

    fclose(plik);
}
// zad 5
void readF(){
    //pamiętaj o include string.h
    FILE *plik;

    plik = fopen("persons.txt", "r");

    int i, licz = 0;
    char bufor[512];
    char cabacka[] = "Cabacka";

    while (feof(plik) == 0)
    {
        fscanf(plik, "%s", bufor);
        // bo jeżeli 0 to są takie same
        if (strcmp(bufor, cabacka) == 0)
        {
            licz++;
        }
    }
    fclose(plik);
    printf("Ilosc osob o nazwisku Cabacka: %d", licz);
    
}

void main(){
    //Zadanie 1
    printf("Zadanie 1 - iloczyn 7 = %d\n", prodP(7));
    printf("\n");

    //Zadanie 2
    printf("Zadanie 2 - wskazniki:\n");
    pointer();
    printf("\n");

    //Zadanie 3
    printf("Zadanie 3 - struktury:\n");
    printf("Najnizsza osoba: %s %s\n", persons().imie, persons().nazwisko);

    //Zadanie 4
    printf("Zadanie 4 - zapis do pliku:\n");
    saveF();
    printf("\n");

    //Zadanie 5
    printf("Zadanie 5 - odczyt pliku:\n");
    readF();
}