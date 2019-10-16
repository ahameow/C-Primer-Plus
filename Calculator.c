#include<stdio.h>
#include<math.h>
int main
{
	float a,b,c,x,x1,x2,delta;
	printf("I can calculate equations like\nAx²+Bx+C=0.");
	printf("\nNow let's enter the data:");
	printf("\nA=");
	scanf("%f",&a);
	printf("\nB=");
	scanf("%f",&b);
	printf("\nC=");
	scanf("%f",&c);
	
	delta=b*b-4*a*c;
	
	if(delta<0)
	{
		printf("\nNo solution in this equation.");
	}
		else if(delta==0)
		{
			x=-b/(2*a);
			printf("\nOnly one solution:\n%.2f",x);
		}
		else
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("\nTwo solutions:\nx₁=%.2f,x₂=%.2f.",x1,x2);
		}
	
	return 0;
}