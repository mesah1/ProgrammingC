/* THIS PROGRAM TAKES AN ID NUYMBER FROM THE USER AND THEN CHECKS THE ID AGAISNT 
   A LIST OF CUSTOMERS IN THE DATABSE, IF THE CUSTOMER EXISTS, IT USES THE ARRAYS 
   ELEMENT TO CHECK THEIR CURRENT BALANCE, AND WARNS THE USER IF THE BALANCE IS 
   MORE THAN $100.00 */
   
   #include<stdio.h>
   
   int main()
   {
	   int ctr;			// Loop counter
	   int idSearch;	// Customer to look for (the key)
	   int found;		// Will be 1 (true) if customer is found
   
		int custID[10] = {313,453,502,101,892,
							475,792,912,343,633};
		float custBal[10] = {0.00, 45.43, 71.23, 
						301.56, 9.08, 192.41, 389.00, 
						229.67, 18.31, 59.54};
	   /* Interacting wiht customer */
	   printf("\n\n***Customer Balance Lookup***\n");
	   printf("What customer number do you need to check?");
	   scanf(" %d", &idSearch);
	   
	   /* Search to see that the customer ID exists */
	   for(ctr=0;ctr<10;ctr++)
	   {
			if(idSearch == custID[ctr])
			{
				found = 1;
				break;
			}
		}
		
		if(found)
		{
			if(custBal[ctr]>100.00)
			{
				printf("\n** That customer's balance is $%.2f.\n",custBal[ctr]);
				printf(" No additioanl credit.\n");
			}
			else
			{
				printf("\n**The customer's credit is good!\n");
			}
		}
		else
		{
				printf("**You must have typed an incorrect customer ID.");
				printf("\n ID %3d was not found in list.\n",idSearch);
		}
	   
	   return 0;
   }