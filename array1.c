#include<stdio.h>


int main(){
	
	
	
	//int numbers[5];//array of 5 integers,array decln
	/*	
	//reading data from array one at a time	
	int num=numbers[0];//index value can be 0 to size-1
	printf("%d\n",num);
	printf("%d\n",numbers[1]);
	printf("%d\n",numbers[2]);
	printf("%d\n",numbers[3]);
	printf("%d\n",numbers[4]);
	*/
	
	//int numbers[5]={1,2};//decln + initialization,  way-1
	
	//int numbers[]={10,20,30,40,50};//decln + initialization,  way-2
	
	int numbers[5];
	int i;
	//way-3
	/*
	numbers[0]=5;
	numbers[3]=50;
	numbers[4]=25;
	*/
	//way-4 initializing using user input
	printf("Enter array values:\n");
	for(i=0;i<5;i++){
		printf("Enter array element %d value:",i+1);		
		scanf("%d",&numbers[i]);
	}	
	//reading all array values using for loop
	printf("Array Values are:\n");
	for(i=0;i<5;i++){
		printf("address:%d\t value:%d\n",&numbers[i],numbers[i]);
	}
	
	//int arr[100]={};
	return 0;
}
