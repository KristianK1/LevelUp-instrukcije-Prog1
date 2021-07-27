#include<stdio.h>
int main(){
	float a,b;
	
	scanf("%f", a); //greska, fali &
	scanf("%f", b); //greska, fali &
	
	printf("Zbroj brojeva %.2f i %.2f je %.2f", a, b, a+b);
	
	return 0;
}
