#include <stdio.h>

int main(){
	
	int i=0;
	int uzunluk=0;
	char cumle[40];
	int k;
	
	printf("cumlenizi giriniz\n");
	gets(cumle);
	
	while(cumle[i]!='\0'){
		uzunluk++;
		i++;
	}
	printf("uzunluk=%d\n",uzunluk);	
	
	for(i=0;i<uzunluk;i++){
		if(cumle[i]=='a'){
			k++;
		}
	}
	
	printf("a harfi sayisi %d dir",k++);
}

