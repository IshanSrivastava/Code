#include<stdio.h> 
#include<math.h>
int main()
{
	float rsmin, rsmax, ls, b;
	int t;
	scanf("%d", &t);
	while(t--)
		{
			scanf("%f%f", &b, &ls);
			rsmin = pow(pow(ls,2) - pow(b,2),0.5);
			rsmax = pow(pow(ls,2) + pow(b,2),0.5);
			printf("%f %f\n", rsmin, rsmax);
		}
	
	return 0;
}
