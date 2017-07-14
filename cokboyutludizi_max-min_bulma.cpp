#include <stdio.h>


int main(){

 int matris[3][3];
 int i,j;
 int max,min;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("%d.satirin %d.sutunu giriniz\n",i+1,j+1);
			scanf("%d",&matris[i][j]);
			
			
		}
	}
	    	min=matris[0][0];
 		    max=matris[0][0];
 


    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		if(matris[i][j]<min){
    			min=matris[i][j];
			}
			if(matris[i][j]>max){
				max=matris[i][j]; 
			}
		}
	}
    
    printf("min %d \n max : %d",min,max);

	
	
	
}


