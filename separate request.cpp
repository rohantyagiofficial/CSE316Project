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
  	for(i=0;i<n;i++) 
  	{ 
  		printf("\nRequest Number %d :",i+1);
    	printf("\nEnter Arrival Time and Burst Time of Request"); 
    	scanf("%d",&at[i]);
    	scanf("%d",&bt[i]); 
    	rt[i]=bt[i]; 
  	} 
  	printf("\nHow much time each request take ? :\t");
  	scanf("%d",&timeQuant); 
  	while(timeQuant<=0){
  		printf("Time Quant can not be less than 1 \nTry again\n Please Enter Again");
  		scanf("%d",&timeQuant);
	  }
  	printf("\n\nRequest\t|Turnaround Time|Waiting Time\n\n"); 
  	for(time=0,i=0;remain!=0;) 
  	{ 
    	if(rt[i]<=timeQuant && rt[i]>0) 
    	{ 
      	time+=rt[i]; 
      	rt[i]=0; 
      	flag=1; 
    	} 
    	else if(rt[i]>0) 
    	{ 
      	rt[i]-=timeQuant; 
      	time+=timeQuant; 
    	} 
