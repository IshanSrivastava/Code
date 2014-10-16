#include<stdio.h>
int main()
{
	int array[1000000] = {0};
	int n, i;
	scanf("%d", &n);
	while(n--)
	{
		int temp;
		scanf("%d", &temp);
		array[temp - 1] += 1;
	}
	for(i=0; i<1000000; i++)
	{
		while(array[i]--)
		printf("%d\n", i+1);
	}
}
