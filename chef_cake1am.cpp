#include<stdio.h>
#include<math.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
	int T, x1, x2, x3, x4, y1, y2, y3, y4;
	int p, q, r, s, temp;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
		temp = (x2-x1)*(y2-y1);
		temp += (x4-x3)*(y4-y3);
		p = max(x3,x1);
		q = min(x4,x2);
		r = max(y3,y1);
		s = min(y4,y2);
		if((q-p)>0 && (s-r)>0)
		{
			temp -= (q-p)*(s-r);
		}
		printf("%d\n", temp);
	}
	return 0;
}
