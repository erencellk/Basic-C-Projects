#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){

	double myValue,myArray[10];
	int choice,index;
	
	do{
		
		printf("Make a choice(-1 to Exit)\n");
		printf("\t1. Write  to array\n");
		printf("\t2. Read from array\n");
		scanf("%d",&choice);
		if(choice==-1){
			break;
		}
		if(choice!=1 && choice!=2){
			printf("Are you kidding me?\n");
			continue;
		}
		printf("Enter a array index:");
		scanf("%d",&index);
		if(index<0 || index>9){
			printf("index should be in the range of 0-9\n");
			continue;
		}
		switch(choice){
			
			case 1:
				printf("\nEnter the value:");
				scanf("%lf",&myValue);
				myArray[index]=myValue;
				printf("The write operation is succcessfully done\n\n");
				
				
				break;
			
			case 2:
				printf("myArray[%d]=%.2f\n\n",index,myArray[index]);
				
			
			
			
				break;
			
		}
		
	}while(choice!=-1);
	
	
	return 0;
}







