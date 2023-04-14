#include<stdio.h>
int main(){
	
	float a, b;
	float c;
	char z, t;
	
//Program podaj¹cy miesi¹c
//	printf("Podaj nr miesiaca: ");
//	scanf("%i", &a);
//	
//	if(a>12 || a<0){
//		printf("Podaj liczbe z zakresu 1-12");
//		
//		return 0;
//	}else{
//			switch(a){
//			case 1:
//				printf("Styczen\n");
//				break;
//			case 2:
//				printf("Luty\n");
//				break;
//			case 3:
//				printf("Marzec\n");
//				break;
//			case 4:
//				printf("Kwiecien\n");
//				break;
//			case 5:
//				printf("Maj\n");
//				break;
//			case 6:
//				printf("Czerwiec\n");
//				break;
//			case 7:
//				printf("Lipiec\n");
//				break;
//			case 8:
//				printf("Sierpien\n");
//				break;
//			case 9:
//				printf("Wrzesien\n");
//				break;
//			case 10:
//				printf("Pazdziernik\n");
//				break;
//			case 11:
//				printf("Listopad\n");
//				break;
//			case 12:
//				printf("Grudzien\n");
//				break;
//		}
//	}
//	
do {
	printf("podaj liczby do kalkulacji: ");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("Podaj znak dzialania: ");
	//getchar() - to mo¿e byæ zamiast spacji (weŸmie entera)
	scanf(" %c", &z); //spacja przed %c bo pobra³oby enter jako znak
	
	switch(z){
		case '+':
			c=a+b;
			printf("%i + %i = %f\n", a, b ,c);	
		break;
		
		case '-':
			if(a>b){
				c = a - b;
				printf("%i - %i = %f\n", a, b ,c);
			}else{
				c = b - a;
				printf("%i - %i = %f\n", b, a ,c);
			}
			break;
		case '*':
			c = a * b;
			printf("%i * %i = %f\n", a, b ,c);
			break;
		case '/':
			if(b!=0){
				c = a / b;
				printf("%f / %f = %f\n", a, b, c);
			}else{
				c = b / a;
				printf("%f / %f = %f\n", b, a, c);
			}
			break;
	}

	printf("Chcesz liczyc dalej? T/N ");
	scanf(" %c", &t);
	if(t=='N'){
		break;
	}
}while (true);
	
	return 0;
}
