#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
#include<stdbool.h>
int main() {
	double findAverage(double *array) {
		double avg=0 ;
		for (int i = 0; i < 50; ++i)
		{
			avg=avg+array[i]; 
		}
		return avg/50 ;
	}
	void listSmaller(double *array, double average) {
		printf("List of the numbers less than %g : \n",average );
		for (int i = 0; i < 50; ++i)
		{
			if(array[i]<average) 
				printf("%g\n",array[i] );
		}
		printf("---------------------\n");
	}
	void showFrequency(double *array) {
		printf("Number of Occurennces : \n---------------------\n");
		int countedOnes[50] ;
		int countedOnesLastPlace=0 ;
		
		for (int i = 0; i < 50; ++i)
		{
			bool membership=false ;
			for (int k = 0; k < countedOnesLastPlace+1; ++k)
				{
					if(countedOnes[k]==array[i])
						membership=true ;
				}
			if(membership)
				continue ;
			countedOnes[countedOnesLastPlace]=array[i] ;
			countedOnesLastPlace++ ;
			int ctr=0 ;
			for (int j = 0; j < 50; ++j)
			{
				
				if(array[i]==array[j] ) {
					ctr++ ;
				}

			}
			
			printf("%g is found %d times in array.\n",array[i],ctr );
		}
	}

	srand(time(0));
	double randomarr[50] ;
	for (int i = 0; i < 50; ++i)
	randomarr[i]=rand() % 19+1;
	for (int i = 0; i < 50; ++i)
	{
		printf("%g\n",randomarr[i] );
	}
	double avgg=findAverage(randomarr);
	printf("Average is : %g\n",avgg );
	listSmaller(randomarr,avgg) ;
	showFrequency(randomarr) ;
	
    // Made by BERKAY CAN (EMU CMSE231 ASSIGNMENT 1 TASK 1)

}
