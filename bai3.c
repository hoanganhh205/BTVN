#include<stdio.h>
#include<math.h>
int scs(long long n)
{
	int cnt = 0;
	while(n)
	{
		cnt++;
		n /= 10;
	}
	return cnt;
}
int ucln(long long a, long long b)
{
	long long t;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	return a + b;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	long long s1, s2;
	if(scs(n) % 2 == 0)
	{
		int k = scs(n) / 2;
		int l = pow(10, k);
		s1 = n / l;
		s2 = n % l;
	}
	else
	{
		int k = scs(n) - (scs(n) / 2);
		int p = pow(10, k);
		s1 = n / p;
		s2 = n % p;
	} 
	printf("%d", ucln(s1, s2));
}
