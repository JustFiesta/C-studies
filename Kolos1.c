#include<stdio.h>
#include<string.h>
//zad 1
int power2(int n){
    int w;

    if(n==0){
        return 1;
    }

    w = 2 * power2(n-1);
    return w;
}
//zad 2
int pointer(){
    int k = 5;
    int *wsk=&k;
    
    // wsk=&k;
    printf("Adres k: %d; \t Wartosc k = %d \n", &wsk, k);

    *wsk=10;
    printf("Adres k: %d; \t Wartosc k = %d \n", &wsk, k);

    return 0;
}
//zad 3
struct student
{
    char imie[20], nazwisko[30];
    int album;
};

struct student students(){
    int minStudent;

    struct student daneStud;

    struct student studenci[5];
    struct student p1 = {"Adam", "Abacki", 54321};
    struct student p2 = {"Barbara", "Babacka", 71233};
    struct student p3 = {"Fifonż", "Nowakowski", 19228};
    struct student p4 = {"Celina", "Cabacka", 77777};
    struct student p5 = {"Edward", "Ebacki", 88326};

    studenci[0] = p1;
    studenci[1] = p2;
    studenci[2] = p3;
    studenci[3] = p4;
    studenci[4] = p5;

    minStudent = studenci[0].album;

    for (int i = 1; i < 5; i++)
    {
        if(studenci[i].album < minStudent){
            minStudent = studenci[i].album;
            daneStud = studenci[i];
        }
    }

    return  daneStud;
}
// //zad 4
void saveF(){
    FILE *plik;

    plik = fopen("studenci.txt", "w");
    fprintf(plik, "%s %s %d", students().imie, students().nazwisko, students().album);
    fclose(plik);

    //wyciągniecie danych od bufora do późniejszego porównania
    char bufor[512];
    plik = fopen("studenci.txt", "r");
    fgets(bufor, 512, plik);

    char porownaj[]="Fifonż Nowakowski 19228";

    int wynik;
    wynik = strcmp(bufor, porownaj);
    fprintf("Adam Abacki 5");

    fclose(plik);
}
// zad 5
void readF(){
    
    int liczba = 0;
    char bufor[512];
    char tekst[] = "Nowakowski";
    FILE *plik;

    plik = fopen("studenci.txt", "r");

    while (feof(plik)==0)
    {
        fscanf(plik, "%s", bufor);
        if (strcmp(bufor, tekst) == 0)
        {
            liczba +=1;
        }
        
    }

    printf("Liczba osób o nazwisku Nowakowski: %d", liczba);
}

// zad 6
void main(){

    printf("Zad 1 - Funckja obliczajaca n-ta potege: %d\n\n", power2(5));

    printf("Zad 2 - Zmiana wartosci za pomoca wstaznikow: \n");
    pointer();
    printf("\n");

    printf("Zad 3 - Student o najmniejszym nr albumu: %s %s\n\n",students().imie, students().nazwisko);

    printf("Zad 4 - Zapis do pliku: \n");
    saveF();

    printf("Zad 5 - Odczyt od pliku: \n");
    readF();

    return 0;
}