#include<stdio.h>
#include<math.h>
#define N 5

// W tablicach znak�w (char tab[]) na ko�cu zdania stoi znak ko�ca tekstu, czyli 0

int main(){
	int i, element0;
	
//	zdefiniowanie tablicji dzia�a tak jak przy zmiennej:	
	
	int iTab[5]; // tablica 5 element�w liczb ca�kowitch
	
	int iTab1[] = {1, 5, 10 ,20}; // lub wpisanie danych od razu:
	
	float fTab[4]; // tablica 4 element�w zmiennoprzecinkowych
	
	char chTab[5]; // tablica 5 znak�w
	char t[] = "Jasiek";


//	Wypisanie danych z tablicy
	for(i=0; i<=4; i++){
		printf("iTab1[%d]=%d\n", i, iTab1[i]);
	}
	
	
	element0 = iTab1[0]; // przypisanie elementu 0 do zmiennej
	
//	Sta�a licz�ca elementy tablicy definioniowana na g�rze (np do uzycia w petlach - troche bezu�yteczne)
	int iTab2[N];
	iTab2[0] = 9;
	iTab2[1] = 8;
	iTab2[2] = 7;
	iTab2[3] = 6;
	iTab2[4] = 5;
	
	for(i=0; i<=N; i++){
		printf("iTab2[%d]=%d\n", i, iTab2[i]);
	}
	
//	Obliczanie rozmiaru tablicy (rozmiar tablicy w pami�ci / rozmiar typu danych w pami�ci)
	int rozmiar = sizeof(iTab1)/sizeof(int);
	printf("rozmiar tablicy wynosi: %d\n", rozmiar);
	
	for(i=0; i<=rozmiar; i++){
		printf("iTab[%d] = %c 	Kod ASCII: %d\n", i, t[i], t[i]);
	}
	
//	Tablice wielowymiarowe
	int wTab[5][4]; //tablica 5 wierszy 4 kolumnn
//	wTab = 0;  
	
	
//	Zad1 instr 4
printf("\n---------------------------------\n");
	int suma, M = 10, min, max;
	float sr, odch_pom;
	int tab[M];
	
	for(i=0; i<M; i++){
		printf("podaj tab[%d]: ", i);
		scanf("%d", &tab[i]);
	}
	
	suma = 0;
	for(i=0; i<M; i++){
		suma += tab[i];
	}
	printf("\n---------------------------------\n");
	printf("Suma = %d\n", suma);
	
	sr = (float)suma/M; // rzutowanie typu zmiennych - �wiadoma zamiana/konwersja typ�w
	
	printf("Srednia = %f", sr);
	
	min = tab[0];
	max = tab[0];
	for(i=1; i<M; i++){
		if(tab[i] < min) 
			min = tab[i];
		if(tab[i] > max)
			max = tab[i]; 
	}printf("\nmin = %d", min); printf("\nmax = %d", max);
	
//	odchylenie standardowe
	for(i=0; i<M; i++){
//		Jest to licznik warjaNcji
		odch_pom += (tab[i] - sr)*(tab[i] - sr);
	}
	printf("\n odchylenie standardowe = %f", sqrt(odch_pom/M));
	
// tablica znak�w - taki lenght, ko�czy si� na znak ko�ca tekstu
	char tab[] = "Ala ma kota";
	int tabLicz[30]; // nale�y j� wyzerowa� (w C tablice si� nie zeruj�)
	int zeruj;
	for(zeruj=0; zeruj=<30; zeruj++){
		tab[zeruj]=0;
	}
// zliczanie znak�w od A a - Z z
	i=0;
	while((int)tab[i] != 0){
		j=0;
		for(j=65; j=<92; j++){
			if((int)tab[i] == j){
				
			}
		}
	}
// zliczanie znak�w . , itd.
	

return 0;	
}
