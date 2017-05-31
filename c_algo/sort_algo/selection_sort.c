#include <stdio.h>


void print(int b[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	} 
}


int main()
{

	int a[21]={999,6,89,234,10,11,13,78,897,99,100,23,44,53,70,3,22,65,88,72,10};
	int n = sizeof(a)/sizeof(a[0]);
	int r,i,j;
	int temp;
	int min = 0;
	int k;
	for(i=0;i<n-1;i++)
	{
		k = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k = j;
			}
		}
		temp = a[k];
		a[k] = a[i];
		a[i] = temp;
	}
print(a,n);
return 0;
}