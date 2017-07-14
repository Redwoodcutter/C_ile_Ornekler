#include <stdio.h>

int faktoriyel(int a)
{
	int i;
	int sonuc=1;
	for(i=a;i>0;i--){
		sonuc=sonuc*i;
	}
	return sonuc;
}
int main(){
	int sayi;
	int cevap;
	printf("hesaplanacak sayiyi gir\n");
	scanf("%d",&sayi);
	
	cevap=faktoriyel(sayi);
	printf("sonucunuz : %d ",cevap);
}
