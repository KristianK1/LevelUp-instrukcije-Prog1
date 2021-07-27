#include<stdio.h>
int main(){
	float a,b;
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	printf("Zbroj brojeva %.2f i %.2f je %.2f", a, b, a+b);
	//kod ne radi kako treba jer je u scanf-u napisano "%lf" umjesto "%f"
	
	//"%lf" bio bio ispravan kad bi koristili double tipove podataka
	return 0;
}
