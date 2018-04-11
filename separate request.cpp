#include<stdio.h>
#include<stdlib.h>
int handleQueries();
int main() 
{ 
 while(1){
	int detail;
  printf("\nEnter your Occupation : \n1.Faculty \t2.Student \t3.Exit\n");
  scanf("%d",&detail);
  switch(detail){
  	case 1:
  		printf("\n\t\tFaculty Queries : ");
  		handleQueries();
  		break;
  	case 2:
  		printf("\n\t\tStudent Queries");
  		handleQueries();
  		break;
  	case 3:
  		printf("\nProgram terminated ");
  		exit(0);
		break;
  	default:
  		printf("\nWrong key pressed");
  		break;
  }
}
}
int handleQueries(){
  	int i,j,n,time,remain,flag=0,timeQuant,detail; 
  	int waitTime=0,turnaroundTime=0; 
  	int at[100],bt[100],rt[100];
	printf("\nEnter Total Request:\t ");
  	scanf("%d",&n);
  	while(n<=0){
  		printf("Request cannot be less than 1 \nEnter again");
  		scanf("%d",&n);
	  }
  	remain=n; 
  	
