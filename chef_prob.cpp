#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int t,t1,t2,t3,t4;
 	double ans;
 	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
		ans = (double)t1/(t1+t2);
		printf("%lf\n", ans);
	}
	return 0;
}  
