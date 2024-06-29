#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	scanf("%[^\n]s", &s);
	int a[500] = {0}, count = 0, d[500] = {0};
	for(int i = 0;  i < strlen(s) - 1; i += 2)
	{
		a[count] = (s[i] - '0') * 10 + (s[i + 1] - '0');
		if(d[a[count]] == 0)
		{
			printf("%d ", a[count]);
			d[a[count]] = 1;
		}		
		count++;
	}
	return 0;
}
