#include<stdio.h>
// instrukcja 7 - zobacz obrazek jak są przypisywane zmienne do pamięci
// wskaźniki służą do operacji na danym miejscu w pamięci

int main(){ //zmiana wartości B i patezenie na jej miejsce w pamięci
    short C, B, A; //short zajmuje 16 bitów (2 bajty)

    // & -link do miejsca w pamięci
    // * - pobiera numer pamięci

    int *wsk=0; //póki co nic nie wskazuje - jest pusta - chodzi o miejsce w pamięci
    float calkowita;

    printf("Adres *wsk: %u", (unsigned) &*wsk);
    printf("Adres zmiennej A: %u\n", (unsigned) &A);
    printf("Adres zmiennej B: %u\n", (unsigned) &B);
    printf("Adres zmiennej C: %u\n", (unsigned) &C); //musi być & - oznacza uchwyt do
    printf("Adres zmiennej calkowita: %u\n", (unsigned) &calkowita); //podanie adresu w pamięci
    
    wsk = &B; //tworzymy uchwyt/link do B
    *wsk = 20; // B ma teraz wart. = 20
    printf("Adres zmiennej B po zmianie: %u\n", (unsigned) &B);


    wsk = &A;
    *(wsk+1) = 30; //uchwyt do A i dodanie wartości 1 (ale short zajmuje 2 bajty więc przerzuci go o 2 dalej)
    printf("Adres zmiennej B po zmianie: %d\n", (unsigned) B);

    *(&A+1) = 40; // to jest skrócona forma tego co ^
    printf("Adres zmiennej B po zmianie: %d\n", (unsigned) B);
    
    //  \/ odwołujemy sie do calkowitej ale jako shorta (* oznacza że do typu shorta)
    *((short*)&calkowita-2) = 60;
                // ^ 1.uzyskanie miejsca przeznaczonego na calkowita (jeszcze jako float)
    //  ^ * - 2.cast na typ wskaźnikowy (już na short i miejsce w pamięci) od tego odejmujemy -2 mijesca (2 bajty to jedno miejsce więc to się liczy -2*2)
//  ^ 3.sięgnięcie do B
    printf("Adres zmiennej B po zmianie: %d\n", B);

// Zadanie 1
    int *wskaz;



    return 0;
}