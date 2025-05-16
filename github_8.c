#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int main(void){
 
 	int i,j,sum=0;
 	
 	int matrix[5][5]={
	 
	 				{5,3,7,0,19},
	 				{2,8,10,1,3},
	 				{6,4,1,9,0},
	 				{15,7,2,4,8},
	 				{1,14,2,3,10}
	 				};
	 				
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%4d",matrix[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			sum+=matrix[i][j];
		}
		printf("%d.satir toplami:%d\n",i+1,sum);
		sum=0;
}
		printf("\n");

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			sum+=matrix[j][i];
		}
		printf("%d.sutun toplami:%d\n",i+1,sum);
		sum=0;
}
}
