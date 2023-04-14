#include <stdio.h>
#define N 10

//Zadanie 1
//int literaA() {
//
//    printf("Podaj liczbe: ");
//    int n;
//    scanf("%d", &n);
//
//    int i=1;
//    for(i; i<=n; i++)
//    {
//
//        int k=0;
//        for(k; k<=n-i; k++) printf(" ");
//
//        int j=1;
//        for(j; j<=((i2)-1); j++)
//        {
//            if(i==n/2+1) printf("A");
//            else
//            {
//            if((j==1)||(j==(i2)-1))
//            printf("A");
//            else printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//}
//int main(){
//literaA();
//}

//// Zadanie 2
//int max(){
//	
//	int i, max = 0, licz = 0, j;
//	
//	int Tab[N];
//	
//	for(i = 0; i < N ; i++){
//		printf("Podaj liczbe %d: ", i+1);
//		scanf("%d", &Tab[i]);
//		printf("\n");
//	
//		if(Tab[i] > max){
//			max = Tab[i];
//		}
//	}printf("Maksimum = %d\n", max);	
//	
//	
//	for(j = 0; j < N; j++){
//		if(Tab[j] == max){
//			licz = licz + 1;
//			printf("Tab[%d] - ", j);
//			printf("Dodaj o jeden\n");
//		}
//	}printf("Ilosc wystapien maksymalnej liczby: %d", licz);
//	
//		
//	return 0;
//}
//
//int main(){
//	max();
//
//	return 0;
//}

//Zadanie 3
//int zwiekszl(int n){
//	
//	int Tab[n], i, suma = 0;
//	for(i = 1; i <= n; i++){
//		printf("Podaj liczbe (funkcja): ");
//		scanf("%d", &Tab[i]);
//	}
//	
//	for(i = 1; i <= n; i++){
//		Tab[i] = Tab[i] + 100;
//		printf("Tab[%d] = %d\n", i, Tab[i]);
//	}
//	suma = 0;
//	for(i = 1; i <= n; i++){
//		suma = suma + Tab[i];
//		printf("sumuje: %d ", suma);
//	}
//	
//	printf("Suma w funkcji = %d\n", suma);
//	
//	return suma;
//}
//int main(){
//	
//	int n;
//	printf("Podaj liczbe n (main): ");
//	scanf("%d", &n);
//		
//	printf("Suma w int main = %d\n", zwiekszl(n));
//	
//	return 0;
//}

//Zadanie 4
//int macierzTD(int n){
//	
//	int w, k = 1;	
//	int macierz[n][n];
//	
//	do{
//		for(w = 1; w <= n; w++){
//		
//			
//			if(w <= k){
//		 		macierz[w][k] = 10;
//			}else{
//				macierz[w][k] = 1;
//			}
//		 	
//		}k++;
//	}while (k < n);
//	
//	k = 1;
//	do{
//		for(w = 1; w < n; w++){
//			
//			
//			printf("%d\t", macierz[w][k]);
//			
//		}k++;	printf("\n");
//	}while (k < n);
//	
//	return 0;	
//}
//int main(){
//	
//	int n;
//	printf("Podaj wymiar macierzy: ");
//	scanf("%d", &n);
//	
//	macierzTD(n);
//	
//	return 0;
//}



//Zadanie 5 - funkcja prototypowa
//int poleT(int , int );
//
//
//int main(){
//	
//	int a, h;
//
//	return 0;
//}
//
//int poleT(int a, int h){
//	
//	scanf("Podaj wysokoœæ: %d", &h);
//	scanf("Podaj szerokœæ: %d", &a);
//	
//	return 0;
//}








