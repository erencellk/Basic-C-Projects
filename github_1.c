#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>

int main(void){
//bankamatik programý

	float kullaniciBakiyesi=1250.0,kullaniciMiktar=0.0,gunlukLimit=500.0;
	int islem;
	printf("\t Merhabalar Hosgeldiniz\n");
	printf("\t Para yatirmak icin1,para cekmek icin2,hesap bakiyesi goruntulemek icin 3'e basiniz':");
	scanf(" %d",&islem);
	if(islem==1){
		printf("\t Yatirmak istediginiz miktari giriniz:");
		scanf("%f",&kullaniciMiktar);
		if(kullaniciMiktar==0){
			printf("\tLutfen belirtilen zamanda bir para girisi yapiniz:");
			sleep(3);//3 saniye bekletir.
			scanf("%f",&kullaniciMiktar);
			
		}
		kullaniciBakiyesi+=kullaniciMiktar;
		printf("\tIþleminiz basariyla gercekleþti.Tesekkur ederiz\n");
		printf("\t Yeni bakiyeniz:%.2f\n",kullaniciBakiyesi);
		
		
		
		
	}
	else if(islem==2){
		printf("\t Cekmek istediginiz miktari giriniz:");
		scanf("%f",&kullaniciMiktar);
		if(kullaniciMiktar>kullaniciBakiyesi){
			printf("\t Hesabinizda o kadar para bulunmamaktadir\n");
			printf("\t Iþlem gerceklesemiyor...");
			
		}
		else if(kullaniciMiktar>gunlukLimit){
			printf("\t Gunluk para cekme limitini astiniz\n");
			printf("\t Iþlem gerceklesemiyor...\n");
				
			
		}
		else{
			kullaniciBakiyesi-=kullaniciMiktar;
			printf("Iþleminiz gerceklesmistir,iyi gunler dileriz\n");
			printf("\t Yeni bakiyeniz:%.2f\n",kullaniciBakiyesi);
		}
		
	}
	else if(islem==3){
		printf("\t Bakiyeniz:%.2f\n",kullaniciBakiyesi);
		
	}
	else{
		printf("yanlis bir iþlem girdiniz dogru islem giriniz:");
		
	}
	
	
	
	
	return 0;
}
