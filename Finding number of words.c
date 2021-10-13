#include <stdio.h>
#include <string.h>
 
int Count_TotalWords(char *str);
 
int main()
{
  	char str[100];
  	int totalwords;
  	totalwords = 1;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	 	   	
  	totalwords = Count_TotalWords(str);
  
	printf("\nThe Total Number of Words in this String = %d",totalwords);
	
  	return 0;
}

int Count_TotalWords(char *str)
{
	int i, totalwords;
  	totalwords = 1;
  	
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}
	return totalwords;
}
