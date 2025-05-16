#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myMath.h"


int main(void){
	int choose=0,x,y;
	menu();
	back:
	printf("\nchoose a number:");
	scanf("%d",&choose);
	printf("\n");
	switch(choose){
		
		case 1:
			printf("enter two numbers:");
			scanf("%d %d",&x,&y);
			printf("Min:%d",min(x,y));
			break;
		case 2:
			printf("enter two numbers:");
			scanf("%d %d",&x,&y);
			printf("Max:%d",max(x,y));
			break;
		case 3:
			printf("enter a number:");
			scanf("%d",&x);
			printf("square is :%d",square(x));
			break;
		case 4:
			printf("enter a number:");
			scanf("%d",&x);
			printf("cube is :%d",cube(x));
			break;	
		case 5:
			printf("enter a number:");
			scanf("%d",&x);
			printf("absolute is :%d",absolute(x));
			break;
		default:
			printf("lutfen 1 ve 5 arasinda bir deger giriniz:");
			goto back;	
	}	
	
	
	

	return 0;
}

void menu(){
	printf("\n");
	printf("********\n");
	printf("* MENU *\n");
	printf("********\n\n");
	printf("1-Minimum\n");
	printf("2-Maksimum\n");
	printf("3-Kare al\n");
	printf("4-Kup al \n");
	printf("5-Mutlak deger\n");
	
}

int min(int x,int y){
	if(x<y){
		return x;
	}
	else{
		return y;
	}
}

int max(int x,int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}

int square(int x){
	
	return x*x;
}

int cube(int x){
	return x*x*x;
}

int absolute(int x){
	if(x<0){
		return x*(-1);
	}
	else{
		return x;
	}
}



 
 
 
  
