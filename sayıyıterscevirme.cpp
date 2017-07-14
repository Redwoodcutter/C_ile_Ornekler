#include <stdio.h>

int main(){
	
	int sayi;
	int sonuc=0,bolum,kalan;
	int dizi[1000];
	int a;
	
	printf("sayi girininiz : ");
	scanf("%d",&sayi);
	
	bolum=sayi;
	
	while(bolum>0){
		
		kalan=bolum%10;
		sonuc=sonuc*10+kalan;
		bolum=bolum/10;
		
	}
	
	printf("ters hali : %d dir\n*********************\n",sonuc);
	dizi[1000]=sonuc;  
	
	a=dizi[0];
	printf("dizinin 1.sayisi %d ",a);
	
}
