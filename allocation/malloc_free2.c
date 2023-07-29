#include <stdio.h>
#include <stdlib.h>
// this code concatenates two strings of your chose just change the main function with the possiblity to control how much lenght of second string you want to concatenate//

int _strlen(char *s)
{
	int i, len;
	  
	for(i = 0; s[i] != '\0';i++)
	{
		len++;
	}
	return len;
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rest;
	int i, j, len2 = 0, len1 = 0;
	    
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	    
	    
	if(n >= len2)
		n = len2;
	rest = malloc((len1 + n + 1)*(sizeof(char)));
	for(i = 0;s1[i] != '\0'; i++)
		rest[i] = s1[i];
	j = 0;
	while(j < n)
	{
		rest[i] = s2[j];
		j++;
		i++;
	}
	return (rest);
}

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
