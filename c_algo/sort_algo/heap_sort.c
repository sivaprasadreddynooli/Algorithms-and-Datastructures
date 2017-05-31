#include <stdio.h>
void print(int a[],int n)
{

for (int i = 0; i < n; i++)
{
	printf("%d\n", a[i]);
}

}





void heapify(int a[],int n,int i)
{
	int parent = i;
	int left = 2*i + 1;
	int right = 2*i + 2;


	if(a[left] > a[parent] && left < n)
	{
		parent = left;
	}
	if (a[right] > a[parent] && right < n)
	{
		parent = right;
	}

if(parent != i)
{
	int temp = a[i];
	a[i] = a[parent];
	a[parent] = temp;
	heapify(a,n,parent);

}

}


void heapsort(int a[],int n)
{
	for (int i = n/2 - 1; i >= 0; i--)
	{
		heapify(a,n,i);
	}

	for (int i = n-1; i>=0 ; i--)
	{
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		heapify(a,i,0);
	}



}

int main()
{

   	int a[21]={999,6,89,234,10,11,13,78,897,99,100,23,44,53,70,3,22,65,88,72,10};
	int n = sizeof(a)/sizeof(a[0]);

	heapsort(a,n);
	print(a,n);

	return 0;
}