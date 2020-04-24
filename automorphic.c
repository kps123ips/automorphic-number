#include<stdio.h>
#include<math.h>
int main()
{
	int n,num,c=0,rem,rem1,sq;
	printf("Enter a Number");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		c++;
		n=n/10;
	}
	sq=num*num;
	rem=floor(pow(10,c));
	rem1=sq%rem;
	if(rem1==num)
	printf("It is an Automorphic Number");
	else
	printf("It is not an Automorphic number");
	getch();
	
}
