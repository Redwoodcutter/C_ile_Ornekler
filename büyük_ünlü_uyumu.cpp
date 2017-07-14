#include <stdio.h>

int main(){
	
	
	char kelime[40];
	char kalin[]={'a','ý','o','u'};
	char ince[]={'e','i','ü','ö'};
	int uzunluk=0;
	int kalinS=0;
	int inceS=0;
	
	gets(kelime);
	
	while(kelime[uzunluk] != '\0')
	{
		uzunluk++;
	}
	
	for(int i=0;i<uzunluk;i++){
		for(int j=0;j<4;j++){
			
			if(kelime[i]==kalin[j]){
				kalinS++;
			}
			else if(kelime[i]==ince[j]){
				inceS++;
			}
		}
	}
	
		 if(kalinS==0 && inceS==0 ){
		printf("yanlis giris");
	}
	else if(kalinS==0){
		printf("uayr\n");
	}
	else if(inceS==0){
		printf("uyar\n");
		
	}
	else if(kalinS>0 && inceS>0){
		printf("uyamzzzzzz\n");
	}

		
	
	
	
	
	
	
	
	
	
}
