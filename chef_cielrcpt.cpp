#include<stdio.h>
int main()
{
	int T, p, i, n;
	scanf("%d", &T);
	while(T--)
	{
		n=0;
		scanf("%d", &p);
		while(p > 2048)
		{
			p-=2048;
			n++;
		}
		while(p > 0)
		{
			n+=(p%2);
			p = (p-p%2)/2;
		}
		printf("%d\n", n);
	}
	return 0;
}
