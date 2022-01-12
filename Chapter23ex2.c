#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int temp, lower, higher, swap;
	int num[1000];
	
	time_t t;
	
	srand(time(&t));

	for(int i=0;i<1000;i++)
	{
		num[i]=(rand()%999)+1;
	}
	for(higher=0;higher<999;higher++)
	{
		swap=0;
		
		for(lower=higher;lower<1000;lower++)
		{
			if(num[lower]<num[higher])
			{
				temp = num[lower];
				num[lower]=num[higher];
				num[higher]=temp;
				swap=1;
			}
		}
		if(swap==0)
			break;
	}
	
	for(int i=0;i<1000;i++)
		printf(" %d\n",num[i]);
	
		return 0;
}