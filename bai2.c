#include <stdio.h>
#include <string.h>
int check(char s[]) 
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) 
	{
        	if (s[i] != s[len - 1 - i]) 
		{
            		return 0;
        	}
    	}
    return 1;
}

int main() 
{
    char s[51];
    while(scanf("%[^\n]s", &s))
    {
    	if (check(s)) printf("YES");
    	else printf("NO");
    }
}
