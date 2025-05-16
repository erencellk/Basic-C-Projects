#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void readSales();
void writeSales();
int sales[3][2][2];
int i,j,k;


int main(void){
  	
  readSales();
  writeSales();
	
	
	
	return 0;
}
void readSales(){
	
	for(i=0;i<3;i++){
		printf("%d. satis temsilcisi:\n",i+1);
		for(j=0;j<2;j++){
			if(j==0){
				printf("\tmatematik kitabi:\n");
			}
			else{
				printf("\tyazilim kitabi:\n");
			}
			
			for(k=0;k<2;k++){
				if(k==0){
					printf("\t\tOkula ");
					
				}
				else{
					printf("\t\tKirtasiyeye ");
				}
				printf("kac adet satti?:");
				scanf("%d",&sales[i][j][k]);
			}
			printf("\n");
		}
		
	}
	
}
void writeSales(){
	i=0,j=0,k=0;
	int toplamOkul=0,toplamKirtasiye=0,toplamMatematik=0,toplamYazilim=0;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			toplamOkul+=sales[i][j][0];
			toplamKirtasiye+=sales[i][j][1];
		}
		for(k=0;k<2;k++){
			toplamMatematik+=sales[i][0][k];
			toplamYazilim+=sales[i][1][k];
		}
	}
	printf("\nOkula toplam %d kitap satildi",toplamOkul);
	printf("\nKirtasiyeye toplam %d kitap satildi",toplamKirtasiye);
	printf("\nToplam %d matematik kitabi satildi",toplamMatematik);
	printf("\nToplam %d yazilim kitabi satildi",toplamYazilim);
}
