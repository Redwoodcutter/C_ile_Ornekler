#include <stdio.h>
// ASCII KULLANARAK BÜYÜK  YADA KÜÇÜÐE DÖNÜÞTÜRME
int main(){
	char harf[100];
	int i=0,x;
	
	printf("bir kelime giriniz : \n");	
	gets(harf);
	
	int fark='a'-'A';
	while(harf[i]!= '\0'){
		
		if(harf[i]>='A' && harf[i]<='Z'){
			harf[i]+=fark;			
		}
		else if(harf[i]>='a' && harf[i]<='z'){
			harf[i]-=fark;
		}
		printf("%c",harf[i]);
		i++;
	}
	return 0;
	
}
