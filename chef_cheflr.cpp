#include<stdio.h>
#define MOD 1000000007
int main()
{
	int t, i=0;
	long long temp;
	char str[100000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", &str);
		temp = 1;
		for(i=0; str[i] != '\0'; i++)
		{
			if((i+1)%2 == 0)
			{
				if(str[i] == 'l')
				temp = (2*temp - 1)%MOD;
				else
				temp = (2*temp + 1)%MOD;
			}
			else
			{
				if(str[i] == 'l')
				temp = (2*temp)%MOD;
				else
				temp = (2*temp + 2)%MOD;
			}
		}
		printf("%lld\n", temp);
	}
	return 0;
}
