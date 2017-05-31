#include <stdio.h>


void print(int b[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("%d \n",b[i]);
	} 
}




int partition(int a[],int l,int r)
{

int pi = a[r];

int small = l;
int temp;
for(int i=l;i<=r;i++)
{
	if(a[i] <= pi)
	{
		temp = a[i];
		a[i] = a[small];
		a[small] = temp;
		small = small + 1;
	}
}

temp = a[small-1];
a[small-1] = pi;
pi = temp;

return small-1;
}

void quicksort(int a[],int l,int r)
{

if(r > l)
{
	int m = partition(a,l,r);
	quicksort(a,l,m-1);
	quicksort(a,m+1,r);
}

}


int main()
{

	int a[21]={999,6,89,234,10,11,13,78,897,99,100,23,44,53,70,3,22,65,88,72,10};
	int n = sizeof(a)/sizeof(a[0]);

	quicksort(a,0,n-1);
	print(a,n);
	return 0;
}