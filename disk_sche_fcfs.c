#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,mov=0,in,RQ[100];
	printf("Enter no. of req::");
	scanf("%d",&n);
	printf("Enter seq::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&RQ[i]);
	}
	printf("Enter initial head mov::");
	scanf("%d",&in);
	for(i=0;i<n;i++)
	{
		mov=mov+abs(RQ[i]-in);
		in=RQ[i];
	}
	printf("Total movement::%d",mov);
}