/* THIS PROGRAM ASKS A USER FOR A USERNAME AND PASSWORD. IT TESTS WHETHER
 THEIR PASSWORD HAS AN UPPERCASE LETTER, LOWERCASE LETTER, AND A DIGIT */
 
 #include <stdio.h>
 #include <string.h>
 #include <ctype.h>
 
 int main()
 {
	 int i;
	 int hasUpper, hasLower, hasDigit;
	char user[25], password[25];
	
	hasUpper = hasLower = hasDigit = 0;
	
	printf("What is your username?: ");
	scanf(" %s", user);
	
	printf("Please create a password: ");
	scanf(" %s", password);
	
	for(i = 0;i<strlen(password);i++)
	{
		if(isdigit(password[i]))
		{
			hasDigit = 1;
			continue;
		}
		if(isupper(password[i]))
		{
			hasUpper = 1;
			continue;
		}
		if(islower(password[i]))
		{
			hasLower = 1;
			continue;
		}
	}
	
	if((hasDigit)&(hasUpper)&(hasLower))
	{
		printf("Excellent work,%s,\n",user);
	}
	else
	{
		printf("Your password must contain a combination");
		printf(" of uppercase letters, lowercase letters,");
		printf(" and digits\n");
	}
	
	return 0;
 }
 