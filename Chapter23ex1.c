/* THIS PROGRAM GENERATES 10 RANDOM NUMBERS AND SORTS THEM */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;
	
	/*If you do not include this statement your program will
		always generate the same 10 random numbers */
	srand(time(&t));	

	// fill array with numbers
	for(ctr=0;ctr<10;ctr++)
	{
		nums[ctr] = (rand() % 99)+1;
	}
	// print the list before sorting
	printf("\nHere is the list before the sort:\n");
	for(ctr=0;ctr<10;ctr++)
	{
		printf(" %d\n", nums[ctr]);
	}
	// sort the array
	for(outer=0;outer<9;outer++)
	{
		didSwap=0; // becomes 1 (true) if list is not yer ordered
		
		for(inner=outer;inner<10;inner++)
		{
			if(nums[inner]<nums[outer])
			{
				temp = nums[inner];
				nums[inner]=nums[outer];
				nums[outer]=temp;
				didSwap=1;
			}
		}
		if(didSwap==0)
			break;
		
	}
	
	printf("\n");	// space to separte sorted numbers from unsorted
	
	for(ctr=0;ctr<10;ctr++)
	{
		printf(" %d\n",nums[ctr]);
	}
	
	
	return 0;
}