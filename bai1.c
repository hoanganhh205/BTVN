#include<stdio.h>
int main ()
{
	char s[501];
	scanf("%[^\n]s", &s);
	int sum = 0;
	for(int i = 0; i < strlen(s); i++)
	{
		sum += s[i] - '0';
 	}
 	if (sum % 3 == 0) printf("YES");
 	else printf("NO");
}
