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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}

	}
print(a,n);
return 0;
}