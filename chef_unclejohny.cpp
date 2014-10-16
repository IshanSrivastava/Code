#include<stdio.h>
int main()
{
	int t, i, n, k, key, temp;
	int a[100];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		temp = 0;
		for(i=0; i<n; i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &k);
		key = a[k-1];
		for(i=0; i<n; i++)
		{
			if(key > a[i])
			temp++;
		}
		printf("%d\n", temp+1);
	}
	return 0;
}
