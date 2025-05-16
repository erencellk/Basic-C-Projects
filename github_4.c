#include <stdio.h>
#include <stdlib.h>



void unluSayisiBelirleme(char []);
int main(void){
	
	char kullaniciGirisi[20];
	printf("Lutfen unlu sayisi sayilacak string giriniz:");
	gets(kullaniciGirisi);
	
	unluSayisiBelirleme(kullaniciGirisi);
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	return 0; 
}


void unluSayisiBelirleme(char kullaniciGirisi[]){
	int i=0,j;
	char unluHarfler[]={'a','e','i','u','o','\0'};
	int unluHarfSayilari[]={0,0,0,0,0};
	while(kullaniciGirisi[i]!='\0'){
		for(j=0;j<5;j++){
			if (kullaniciGirisi[i]==unluHarfler[j]){
				unluHarfSayilari[j]+=1;
				break;
			}
			
		}
		
		i++;
	}
	for(i=0;i<5;i++){
		printf("%c karakteri %d kez gecti.\n",unluHarfler[i],unluHarfSayilari[i]);
	}
	
	
}

















