#include<stdio.h>
int main()
{
	int key,i,j,k,n,data,a[n];
	printf("enter size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter data:");
		scanf("%d",&data);
		a[i]=data;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(j=1;j<n;j++)
	{
		key=a[j];
		k=j-1;
		while(k>=0 && a[k]>key)
		{
			a[k+1]=a[k];
			k=k-1;
		}
		a[k+1]=key;
		
	}
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
