#include<stdio.h>
int main(){
	float a, b;
	float c;
	
	b=0;
	
	printf("Podaj wysokosc podatku: ");
	scanf("$f", a);
	printf("Podaj liczbe dzieci: ");
	scanf("%f", c);
	printf("dzia³a %f", c);
	
		if(c>0){
			switch (1){
				case 1:
					b = a + (a * (2/100));
					printf("Podatek po uldze: %f", b);
					break;
				case 2:
					b = a + (a * (5/100));
					printf("Podatek po uldze: %f", b);
				break;
				case 3:
					b = a + (a * (8/100));
					printf("Podatek po uldze: %f", b);
				break;
			}if(c>=4){
				b = a + (a * (15/100));
				printf("Podatek po uldze: %f", b);
			}
		}else{
			printf("Twoja ulga wynosi 0 - podatek pozostaje niezmieniony: %f", a);
		}
	
return 0;		
}
