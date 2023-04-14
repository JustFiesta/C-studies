#include <stdio.h>
int main(){
	
	int i;
//9.11.22 - instrukcja 3
//Zad1
//warunki wstêpne	warunek kontynuacji		iteracja, ¿eby siê zakoñczy³a
//	for (i=1; i<=100; i++){
//		if(i%2==0){
//			printf("%d Parzyste \n", i);
//		}else{
//			printf("%d Nieparzyste\n ", i);
//		}
//	}

//Zad2
//	for (i=1; i<=1000; i++){
//		if(i%3==0 && i%4==0 && i%5==0 && i%7==0){
//			printf("%d  \n", i);
//		}
//	}
//sposób 2
//	i%3==0 ? i%4==0 ? i%5==0 ? i%7==0 ? printf("%d  \n", i); :

//Zad3
//podzielniki liczby j	Liczba dzielników
//	int j, liczdzieln;
//	
//	for (i=1; i<=100; i++){
//		liczdzieln = 0;
//		for(j=1; j<=100; j++){
//				if(i%j==0){
//					liczdzieln++;
//				}
//		}
//			if(l==2){
//				printf("%d Jest pierwsza \n", i);
//			
//			}
//	}

//Zad5
int j, wys, szer, ii, jj;

printf("Podaj wysokosc figury ");
scanf("%i", &wys);
printf("Podaj szerokosc figury ");
scanf("%i", &szer);

//po wysokosci
for(i=0; i<wys; i++){
//	Je¿eli pierwszy lub ostatni lub œrodkowy
	if(i==0 || i==wys-1 || i==wys/2){
		for(jj=0; jj<szer; jj++){
			printf("E");
		}printf("\n");
	}else{
		printf("E\n");
	}
}


return 0;
}
