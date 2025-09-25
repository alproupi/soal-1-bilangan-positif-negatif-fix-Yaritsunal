#include <stdio.h>

int main(){
	int num;
	printf("Masukan Bilangan:");
	scanf("%d", &num);
	
	if(num <0){
	printf("Bilangan negatif");
	} else if (num ==0){
		printf("Bilangan Nol");
	} else {
		printf ("Bilangan Positif");
	}
	return 0;
	
}
