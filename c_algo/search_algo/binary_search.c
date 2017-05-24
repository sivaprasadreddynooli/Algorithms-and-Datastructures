#include <stdio.h>
#include <stdlib.h>

int bin_search(int a[],int l,int r,int k)
{

int m = (l+r)/2;

if (l > r)
{
	return -1;
}


if (a[m] == k)
{
	return m;
}
else if (a[m] < k)
	return bin_search(a,m+1,r,k);
else
	return bin_search(a,l,m-1,k);

}

int main()
{

	int a[21]={2,5,7,34,67,99,123,145,189,190,234,567,789,888,910,999,1200,1346,1456,1500,1501};
	int s = 567;
	int n = sizeof(a)/sizeof(a[0]);
	int r;
	r = bin_search(a,0,n-1,s);
	if (r == -1)
	{
		printf("No value found for given index\n");
	}
	else
	{
		printf("the element is at position %d \n",r+1);
	}

	return 0;
}

