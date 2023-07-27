#include<stdio.h>

int main(){
	
	int a, b, i, j, s, x;
	
	printf("Podaj szerokosc: ");
	scanf("%i", &b);
	printf("Podaj wysokosc: ");
	scanf("%i", &a);
	
//Prostok¹t z H	
//	//pêtla górnej krawêdzi
//	for(i=0; i<=a; i++){
//		if(i==a){
//			printf("\n");
//		}else{
//		printf("H");
//		}
//	}
//	
//	//pêtla wpisuj¹ca h na wysokoœæ
//	for(j=0; j<=b-3; j++){
//	// lewa krawêdŸ
//			printf("H");
//	// prawa krawêdŸ
//			for(s=1; s<=a-1; s++){
//				if(s!=a-1){
//					printf(" ");
//				}else{
//					printf("H\n");
//				}
//			}
//	}
//	
//	//pêtla rysuj¹ca doln¹ krawêdŸ
//	for(i=0; i<=a-1; i++){
//		printf("H");
//	}
	
	
//Du¿e H z H	
	//pêtla wpisuj¹ca h na szerokoœæœæ
//	for(j=0; j<=b-1; j++){
//	// lewa krawêdŸ
//			printf("H");
//			
	// prawa krawêdŸ
//			for(s=0; s<=a-1; s++){
//				if(s!=a-1){
//					printf(" ");
//				}else if(j==b/2){
//						for(x=1; x<=b-2; x++){
//							printf("X");
//						}printf("H");
//						printf("\n");
//				}else
//					printf("H\n");				
//			}
//}

	for(j=0; j<a; j++){
		printf("H");
		for(s=1; s<b-1; s++){
			if(j==a/2){
				printf("H");
			}else{
				printf(" ");
			}
		}
		printf("H\n");
	}
	
return 0;
}
