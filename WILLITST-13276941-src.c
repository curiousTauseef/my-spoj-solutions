#include<stdio.h>
int main()
{ unsigned long long int n;
	scanf("%llu",&n);
	while(n>1)
	{
		if(n==2)
		{
			printf("TAK");
			break;
		}
		if(n==3)
		{
			printf("NIE");
			break;
		}
		if(n%2==0)
		{
		n=n/2;
		   if(n==2)
		   {
			  printf("TAK");
			  break;
  	       }
  	       if(n==3)
		  {
			printf("NIE");
			break;
		   }
		}
 		else
 		{
		n=3*n+3;
		if(n==2)
		   {
			  printf("TAK");
			  break;
  	       }
  	       if(n==3)
		  {
			printf("NIE");
			break;
		   }
 		}
	}
	
	return 0;
	}
