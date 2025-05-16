#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){
    srand(time(NULL));
	int N;
	printf("A matrisinin boyu:");
	scanf("%d",&N);
	int A[N][N];
	int i,j,izA=0;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			A[i][j]= rand()%9+1;
			printf("%4d ",A[i][j]);
		}
		printf("\n");
	}
	printf("A'nin izi..:\n");
	for(j=0;j<N;j++){
		printf("%d ",A[j][j]);
		izA+=A[j][j];
	}
	printf("\tAiz:%d",izA);
	
	return 0;
}
