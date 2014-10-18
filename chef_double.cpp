#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	char n[10];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%s", &n);
		if((n[strlen(n)-1]-'0')%2 != 0)
		n[strlen(n)-1]--;
		printf("%s\n", n);
	}
	return 0;
}
