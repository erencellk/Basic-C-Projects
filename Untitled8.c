#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    /*satir sayisini girmek zorunda degiliz ama sutun sayisini girmek 
    zorundayiz*/
    
    int i,j;
	int ikiBoyutluDizi[10][10]={{0,1,2},{3,4,5},{6,7,8}};
	
	printf("Dizimiz hafizada %d byte yer kaplar\n",sizeof(ikiBoyutluDizi));
	
	printf("\t\t\tCarpim tablosu\n");
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			ikiBoyutluDizi[i][j]=i*j;
			printf("%4d\t",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
