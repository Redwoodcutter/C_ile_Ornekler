#include <stdio.h>

bool asal(int );

int main(){
	int sayi;
	bool Bool;
	
	printf("sayinizi gir\n");
	scanf("%d",&sayi);
	
	Bool=asal(sayi);
	if(Bool==1)
	{
		printf("asal\n");
	}
	else
		printf("asal deðil\n");
}


bool asal(int deger){
	
	bool sonuc;
	if(deger==2){
		sonuc=true;
	}
	else{
	
	for(int i=2;i<deger;i++){
		
		if(deger%i==0){
			
			sonuc=false;
		    break;
		}
		else{
			
			sonuc=true;
			
		}
		
	}
	
	}
	
	return sonuc;
}





