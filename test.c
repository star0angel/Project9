#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//≤‚ ‘getchar ∫Õputcharπ¶ƒ‹
int main()
{
	char c;
	
	while ((c = getchar())!='\n')
	{
		
		putchar(c);
	} 
	if (putchar(c) == '\n')
	{
		printf("kongge");
	}

	return 0;
}