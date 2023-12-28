#include<stdio.h>
main()
{
	int n,cnt;
	printf("enter the array size:");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	printf("enter the array element:");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		cnt = i;
	}
	
	printf("the length of an array is: %d",cnt);
	
}

