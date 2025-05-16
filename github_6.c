#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){
	

	int i,j,size;
	printf("Enter the size of square matrix(x<10):");
	scanf("%d",&size);
	
	int matrix[size][size];
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			matrix[i][j]=0;  // tüm elemanlarý sýrasýyla sýfýra esitledik.
		}
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(i==j || i+j==size-1){
				matrix[i][j]=1;
			}
		}
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}


	
	
	
	
	return 0;
}


