#include<stdio.h>

int main(){
	
	int a, b, i, j, s, x;
	
	printf("Podaj szerokosc: ");
	scanf("%i", &b);
	printf("Podaj wysokosc: ");
	scanf("%i", &a);
	
//Prostok�t z H	
//	//p�tla g�rnej kraw�dzi
//	for(i=0; i<=a; i++){
//		if(i==a){
//			printf("\n");
//		}else{
//		printf("H");
//		}
//	}
//	
//	//p�tla wpisuj�ca h na wysoko��
//	for(j=0; j<=b-3; j++){
//	// lewa kraw�d�
//			printf("H");
//	// prawa kraw�d�
//			for(s=1; s<=a-1; s++){
//				if(s!=a-1){
//					printf(" ");
//				}else{
//					printf("H\n");
//				}
//			}
//	}
//	
//	//p�tla rysuj�ca doln� kraw�d�
//	for(i=0; i<=a-1; i++){
//		printf("H");
//	}
	
	
//Du�e H z H	
	//p�tla wpisuj�ca h na szeroko���
//	for(j=0; j<=b-1; j++){
//	// lewa kraw�d�
//			printf("H");
//			
	// prawa kraw�d�
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
