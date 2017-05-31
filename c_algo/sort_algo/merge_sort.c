#include <stdio.h>


void print(int b[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	} 
}






void merge(int a[],int l,int m,int r)
{

int n1 = m - l +1;
int n2 = r - m;

int l1[n1];
int r1[n2];

int left = n1-1;
int right = n2-1;

int tag = r;
for(int i=0;i<n1;i++)
{
	l1[i] = a[i+l];
}

for(int j=0;j<n2;j++)
{
	r1[j] = a[j+m+1];
}



while( left >= 0 && right >= 0 )
{

if(l1[left] >= r1[right])
{
	a[tag] = l1[left];
	left = left - 1;

}
else
{
	a[tag] = r1[right];
	right = right - 1;
}

tag = tag  - 1;


}


while(left>=0)
{
	a[tag] = l1[left];
	left = left - 1;
	tag = tag  - 1;
}


while(right>=0)
{
	a[tag] = r1[right];
	right = right - 1;
	tag = tag  - 1;
}

}





void mergesort(int a[],int l,int r)
{
	if(r>l)
	{
		int m = (r+l)/2;
		

		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}

}







int main()
{

	int a[21]={999,6,89,234,10,11,13,78,897,99,100,23,44,53,70,3,22,65,88,72,10};
	int n = sizeof(a)/sizeof(a[0]);

	mergesort(a,0,n-1);
print(a,n);
return 0;
}