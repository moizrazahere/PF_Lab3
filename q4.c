#include <stdio.h>
  int main(){
  	int distance,fuel ,cost,avarage=0;
  	distance= 1207;
  	int total_distance = 2*distance;
  	while(1){
  		printf("\n Enter distance cover in one litre (fuel average) - take positive input only : ");
  	    scanf("%d",&avarage);
  		if ( avarage <= 0){
  			printf("\nError- take positive input only \n");
	  }
	  else
        break;
	  }
  	int totalfuelconsumed= total_distance/avarage;
  	printf("Total fuel consumed: %d\n",totalfuelconsumed);
  	int forwardcostperlitre=118;
  	int backwardcostperlitre=127;
  	int singlefuelconsumed=totalfuelconsumed/2;
  	int totalfuelcost=singlefuelconsumed*118+singlefuelconsumed*127;
  	printf("Total fuel cost: %d\n",totalfuelcost);
  	
  }
  