#include <stdio.h>

int suma(int a, int b){
	
	int s;
	s=a+b;

	return s;
}
int main(){
	
	int a, b;
	printf("Podaj a: ");
	scanf("%d", &a);
	printf("Podaj b: ");
	scanf("%d", &b);
	printf("%d", suma(a, b));
	
	
	return 0;
}
