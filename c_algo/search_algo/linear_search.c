#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int main()
 {

int a[10]={5,8,2,3,6,9,0,1,4,7};
int s = 6;
int i;
for(i=0;i<10;i++)
{

	if (a[i] == s)
	{
		printf("the value is at position %d \n", i+1);
		break;
	}
}

return 0;
 }