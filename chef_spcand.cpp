#include<stdio.h>
int main()
{
	long long int N, K, T;
	scanf("%lld", &T);
	while(T--)
	{
		scanf("%lld %lld", &N, &K);
		if(K==0)
		{
		printf("0 %lld\n", N);
		}
		else
		{
		printf("%lld %lld\n", N/K, N%K);
		}
	}
	return 0;
}
