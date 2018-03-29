#include "revert_string.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void RevertString(char *str)
{
	int n = strlen(str); 
	char *test = malloc(sizeof(char) * (n + 1));
	strcpy(test, str);
	for(int i = 0;i<n;++i)
	{
	    test[i]=str[n-i-1];
	}
	strcpy(str, test);
	free(test);
}

