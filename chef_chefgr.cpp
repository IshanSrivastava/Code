#include<stdio.h>
#define MAX_TC 100
//#define MAX_VAL 10000
//#define MAX_TC 100
int main()
{
 int tc,no_elemnt,total,item,i;
 long long int sum;
 scanf("%d",&tc);
   if(tc<1 || tc>MAX_TC)
     {printf("No\n");
     return 0;
     }
    while(tc--)
    {
      no_elemnt=sum=total=0;
      scanf("%d %d",&no_elemnt,&total);
      sum=total;
      for(i=0;i<no_elemnt;i++)
      { scanf("%d",&item);
      if(item>=1&&item<=MAX_TC)
       sum+=item;
        }   
      if(sum%no_elemnt ==0)
       printf("Yes\n");
       else
       printf("No\n");
    }
//    getch();
return 0;    
}
