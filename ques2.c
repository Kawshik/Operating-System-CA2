#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

float avg;
int maxNum = 0;
int minNum = 0;

int flag=0;
int sum = 0;

void average(int num){

    // Store the value argument passed to this thread   
    sum += num;
	flag++;
	
    //find the average
	avg = sum / flag;
	
	printf("%d",flag);
        
}

void maxNumber(int num){
	
		if(maxNum<num){
			maxNum = num;
		} else {
			maxNum = maxNum;
		}
}

void minNumber(int num){
//		if(flag==1){
//			minNum = num;
//		}
			
		
		if(minNum>num){
			minNum = num;
		} else {
			minNum = minNum;
		}
}


int main()
{
//    pthread_t tAvg, tMin, tMax;
    int num,i=1;
    printf("_______Enter your Numbers (enter 0 to see the results)_________");
			
		while(num!=0){
			printf("Enter Number (enter 0 to see the results): ");
			scanf("%d",&num);
			
			if(flag==0){
				minNum = num;
				maxNum = num;	
			}
			
			if(num==0){
				printf("Your Results: ");
			} else {
				average(num);
				maxNumber(num);
				minNumber(num);	
			}
			
			
//			pthread_create(&tAvg, NULL, avg, num);
//		    pthread_create(&tMin, NULL, maxNumber,num);
//		    pthread_create(&tMax, NULL, minNumber, num);
		    
		    i++;
		}

//    pthread_exit(NULL);
	printf("%f %d %d",avg,minNum,maxNum);
 
    return 0;
}
