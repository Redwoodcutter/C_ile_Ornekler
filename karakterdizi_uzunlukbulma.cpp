#include <stdio.h>

int main(){
	
	char s[40];
	int k=0;
	
	printf("stringinizi giriniz \n ");
	gets(s);
	
	while(s[k]!='\0')
	{
		k++;
	}
	printf("dizi uzunlugu %d ",k);
	
}
