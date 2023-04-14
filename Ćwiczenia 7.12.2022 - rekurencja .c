#include<stdio.h>

// Zadanie 1
int ciag(n){
    if(n == 1){
        return 1;
    }
    return (-1)*ciag(n-1)*n-2;
}

// Zadanie 2
int sumaliczb(n){
    // Cyfra jednosci - pierwsza liczba od prawej
    int jednosci = n % 10;
    int reszta = n/10;
    int wynik;

    if(n == 0){
        return ;
    }

    wynik = jednosci + sumaliczb(reszta);
}

int main(){

    int n;
    printf("Podaj liczbe do n-tego wyrazu ciagu: ");
    scanf("%d", &n);

    printf("N-ty wyraz ciagu: %d", ciag(n));
    
    printf("Podaj liczbe do sumy liczb naturalnych do tej liczby: ");
    scanf("%d", &n);

    printf("Wynik sumy: %d", sumaliczb(n));

    return 0;
}