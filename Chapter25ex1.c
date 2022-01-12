/*	THIS PROGRAM DECLARES AND INITIALIZES AN ARRAY OF CHARACTER POINTERS
	AND THEN ASKS FOR RATINGS ASSOCIATED */
	
	#include<stdio.h>
	
	int main()
	{
		int i;
		int ctr = 0;
		char ans;
		
		// Declaring your array of 9 characters and then initializing them
		char *movies[9] = {"Amour","Argo","Beasts of the Southern WIld",
							"Django Unchained","Les MIserables","Life of Pi",
							"Lincoln","Silver Lining Playbook",
							"Zero Dark Thirty"};
		int movieRatings[9]; 
		
		char *tempMovie = "This will be used to sort rated movies";
		int outer, inner,didSwap,tempRating;
		
		printf("\n\n***Oscar SEason 2012 is here!***\n\n");
		printf("Time to rate this year's best picture nominees:");
		
		for(i=0;i<9;i++)
		{
			printf("\nDid you see %s? (Y/N): ",movies[i]);
			scanf(" %c",&ans);
			if(toupper(ans)=='Y')
			{
				printf("\nWhat was your rating on a scale of 1-10: ");
				scanf(" %d",&movieRatings[i]);
				ctr++;
				continue;
			}
			else
			{
				movieRatings[i]=-1;
			}
		}
		
		// Now sort the movies by rating (the unseen
		// will go to the bottom)
		
		for(outer=0;outer<8;outer++)
		{
			didSwap = 0;
			if(movieRatings[inner]>movieRatings[outer])
			{
				tempMovie = movies[inner];
				tempRating = movieRatings[inner];
				movies[inner]=movies[outer];
				movieRatings[inner]=movieRatings[outer];
				movies[outer]=tempMovie;
				movieRatings[outer]=tempRating;
				didSwap=1;
			}
		}
		if(didSwap==0)
		{
			break;
		}
		printf("\n\n**Your Movie Ratings for the"); 
		printf(" 2012 Oscar Contenders**\n");
		
		for(i=0;i<ctr;i++)
		{
			printf("%s rated a %d!\n",movies[i],movieRatings[i]);
		}
		
		return 0;
	}