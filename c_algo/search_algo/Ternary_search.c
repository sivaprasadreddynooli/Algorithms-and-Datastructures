#include <stdio.h>

int ten_search(int a[],int l,int r,int k)
{

int m1 = l + ((r-l)/3);
int m2 = m1 + ((r-l)/3);


if(l>r)
{
	return -1;
}

if (a[m1] == k)
{
	return m1;
}


if (a[m2] == k)
{
	return m2;
}


if (a[m2] < k) 
{
	return ten_search(a,m2+1,r,k);
}

if (a[m1] > k)
{
	return ten_search(a,l,m1-1,k);
} 

return ten_search(a,m1+1,m2-1,k);
}




int main()
{
	int a[21]={2,5,7,34,67,99,123,145,189,190,234,567,789,888,910,999,1200,1346,1456,1500,1501};
	int s = 568;
	int n = sizeof(a)/sizeof(a[0]);
	int r;

	r = ten_search(a,0,n-1,s);
	if (r == -1)
	{
		printf("No value found for given key value\n");
	}
	else
	{
		printf("the element is at position %d \n",r+1);
	}

}