#include <stdio.h>
#include <math.h>
 
int linearsearch(int a[],int l,int r,int k)
{
for(int i=l;i<=r;i=i+1)
	{
		if(a[i] == k)
		{
			return i;
		}
	}
return -1;
}


 int main()
 {
 	

 	int a[23]={2,5,7,34,67,99,123,145,189,190,234,567,789,888,910,999,1200,1346,1456,1500,1501};
	int s = 910;
	int n = sizeof(a)/sizeof(a[0]);
	int r;
    int j = (int)sqrt(n);

	for(int i=0;i<n;i = i + j)
	{
		if(a[i] == s)
		{
			printf("the value found at in if loop %d\n", i);
			return 0;
		}
		if((a[i] < s) && (a[i+j] > s))
		{
			r = linearsearch(a,i,i+j,s);
			if (r == -1)
			{
				printf("the value is not found\n");
			}
			else
				printf("the value is found at position %d\n", r+1);
			break;
		}

	}
	return 0 ;
 }

