#include<stdio.h>
#include<string.h>

typedef struct{
    char imie[25];
    char nazwisko[25];
    int wiek;
}osoba;

int main()
{
    // Przykład 1
    // FILE *out; //przygotowanie pliku do otwarcia
    // float pi = 3.1415;
    // int i = 100;
    // char znak = 'A';

    //                 //    \/ otwarcie pliku w trybie zapis (w), typ pliku tekst (t)
    // if((out = fopen("raport.txt", "wt")) == NULL){
    //     printf("Nie można otworzyć pliku!\n");
    //     return 1;
    // }
    // //fprintf - zapis do pliku out
    // fprintf(out, "\n Przyklad raportu z programu\n\n");
    // fprintf(out, "\n Wydruk zmiennej typu float pi = %6.4f \n", pi);
    // fprintf(out, "\n Wydruk zmiennej typu int i = %3i \n", i);
    // fprintf(out, "\n Wydruk zmiennej typu char znak = %c \n", znak);

    // //zamknięcie pliku
    // fclose(out);
    // printf("\ndane zostały zapisane do pliku raport.txt");
    // getchar();

    //Przykład 2
    // FILE *in;
    // char bufor[512];
    // // otwarcie pliku tekstowego do odczytu: rt

    // if ((in = fopen("raport.txt", "rt")) == NULL){
    //     printf("\nBlad otwarcia pliku!\n");
    //     return 1;
    // }
    // printf("\n---------------------- zawartosc pliku raport.txt------------------------\n");
    // //odczyt z pliku
    // while(feof(in) == 0){ //feof - end of file ()koniec pliku)
    //     fgets(bufor, 512, in); //pdczyt jednej linii tekstu
    //     printf("%s", bufor);
    // }
    // printf("\n---------------------------------------------------------------------\n");
    // //zamkniecie pliku 
    // fclose(in);
    // getchar();

    FILE *plik;
    int n, i;
    osoba ludzie[100];
    memset(ludzie, 0, sizeof(ludzie)); //wyczyszczenie tablicy ludzie
    printf("Zapisywanie rekordow do pliku \n");
    printf("Ile rekordow chcesz zapisac?: \n");
    scanf("%i", &n);
    //otwarcie pliku do zapisu - handler: uchwyt pliku
    if((plik = fopen("records.dat", "wb")) == NULL){
        printf("Blad otwarcia pliku!\n");
        return 1;
    }
    fseek(plik, 0L, SEEK_SET); //ustawianie pozycji w pliku na poczatek
    for (i = 1; i <= n; i++){
        // gromadzenie danych o rekodzie (osobie)
        printf("\n Imie:");
        scanf("%s", &ludzie[i].imie);
        printf(" Nazwisko:");
        scanf("%s", &ludzie[i].nazwisko);
        printf(" Wiek:");
        scanf("%i", &ludzie[i].wiek);
        //zapis jednego rekordu do pliku
        fwrite(&ludzie[i], sizeof(osoba), 1, plik);
    }
    fclose(plik); //zamkniecie pliku
    getchar();

    return 0;
}
