#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
	
	char kullaniciGirisi[20];
	char degisecekKarakter,degistirilecekKarakter;
	int i=0,karakterSayisi=0;
	puts("Lutfen girmek istediginiz stringi yaziniz:");
	gets(kullaniciGirisi);
	printf("Hangi harfi degismek istiyorsunuz? ");
	scanf("%c",&degisecekKarakter);
	printf("Hangi harf ile  degistirmek istiyorsunuz? ");
	scanf(" %c",&degistirilecekKarakter);
	
		while(kullaniciGirisi[i]!='\0'){  //NULL karakterine kadar sorgu 
			if(kullaniciGirisi[i]==degisecekKarakter){
				karakterSayisi++;
				kullaniciGirisi[i]=degistirilecekKarakter;
			}
		
			i++;
		}
	
	puts(kullaniciGirisi);
	printf("%d adet %c karakteri %c ile degistirildi.",karakterSayisi,degisecekKarakter,degistirilecekKarakter);
	
	
	
	return 0;
}
	

