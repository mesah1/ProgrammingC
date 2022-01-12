/* THIS PROGRAM SHOWS YOU HOW TO ALLOCATE AND DEALLOCATE MEMORY */
/*	the program looks for a number of random inetgers, allocates an array
	and fills it wiht number between 1 nad 500 and then loops thorught all 
	the numbers and figures out the smallest, the biggest and the average. 
	It then frees the memory.	*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, aSize;
	int *randomNums;
	time_t t;
	
	double total = 0;
	int biggest,smallest;
	float average;
	
	srand(time(&t));
	
	printf("How many random numbers do you want in your array? ");
	scanf(" %d",&aSize);
	
	// Allocate an array of integers equal to the number
	// of elements requested by the user
	
	randomNums = (int*)malloc(aSize*sizeof(int));
	
	// Test to ensure that the array allocated properly
	if(!randomNums)
	{
		printf("Random array allocation failed!\n");
		exit(1);
	}
	
	// Loop throught the array and assign a random
	// number between 1 and 500 to each element
	for(i=0;i<aSize;i++)
	{
		randomNums[i]=((rand()%500)+1);
		
	}
	
	// Initialize the bisggest and smallest number
	// for comparison's sake
	biggest = 0;
	smallest= 500;
	
	// Loop through the now filled array testing for the
	// random numbers that are the biggest, smallest, and adding 
	// all numbers to calculate an average 
	for(i=0;i<aSize;i++)
	{
		total+=randomNums[i];
		
		if(randomNums[i]>biggest)
		{
			biggest = randomNums[i];
		}
		if(randomNums[i]<smallest)
		{
			smallest = randomNums[i];
		}
	}
	
	average = ((float)total/(float)aSize);
	
	printf("The biggest random number is %d.\n",biggest);
	printf("The smallest random number is %d.\n",smallest);
	printf("The average random number is %.2f.\n",average);	

	// WHEN USING MALLOC, REMEMBER TO THE USE FREE
	free(randomNums);
	
		
	
	return 0;
	
}
