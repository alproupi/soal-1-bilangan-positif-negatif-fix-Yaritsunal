#include <stdio.h>

int main(){
	
	int tahun;
	printf("Masukan Tahun:");
	scanf("%d", &tahun);
	
	int check_tahun1 = tahun % 4;
	int check_tahun2 = tahun % 100;
	int check_tahun3 = tahun % 400;
	if (check_tahun1 == 0 && check_tahun2 != 0 || check_tahun3 ==0){
	    printf("Tahun Ini Adalah Tahun Kabiset");
}  else {
	printf("Tahuun Ini Tidak Spesial");
}
	return 0;
}
