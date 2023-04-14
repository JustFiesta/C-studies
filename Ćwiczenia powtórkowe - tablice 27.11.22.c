#include<stdio.h>
#define ElTab 10
#define Mnoz 10


int main(){
	
	int stats[ElTab];
	int i, UsrIn, Min, Max = 0, Med = 0, StdOd = 0;
	float  Sum = 0, Avg = 0;
//	
////	Pobieranie wartoœci od u¿ytkownika
//	for(i = 0; i < ElTab; i++){
//		printf("Podaj element tablicy: ");
//		scanf("%d", &stats[i]);
//	
////		Sumowanie
//		Sum += stats[i];
//		
//	}
//	
//		
//	for(i = 0; i < ElTab; i++){	
////		Maksimum
//		if(stats[i] > Max){
//			Max = stats[i];
//		}
////		Minimum
//		if(Min > stats[i]){
//			Min = stats[i];
//		}
//	}
//	
////		Srednia
//		Avg = Sum/ElTab;
//			
//	printf("Suma wynosi: %f\n", Sum);
//	printf("Maksimum wynosi: %d\n", Max);
//	printf("Minimum wynosi: %d\n", Min);
//	printf("Srednia wynosi: %f\n", Avg);
	
printf("--------------------------------\n");
	
	int TabMnoz[9][9], w, k;
	for(w = 1; w <= Mnoz; w++){
		for(k = 1; k <= Mnoz; k++){
			TabMnoz[w][k] = w * k;
			printf("TabMnoz[%d][%d] = %d\t", w, k, TabMnoz[w][k]);
		}
	}
	printf("Tabliczka mnozenia: %d", TabMnoz);
	
	
	
	
	
	return 0;
}
