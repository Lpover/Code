#include <stdio.h>

int main()
{
	int n, max = 0, i, count = 1;
	scanf("%d", &n);
	int arr[1004];
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	arr[0]=0;arr[n+1]=1001;
	for (i = 1; i <= n+1; i++)
	{
		if (arr[i] - arr[i - 1] == 1)
		{
			count++;
			if (count-2 > max)
			{
				max = count-2 ;
			}
		}
		else
			count = 1;
	}
	/*if (!(max == n - 1) && max != 0)
		max--;*/
	printf("%d", max);
}
