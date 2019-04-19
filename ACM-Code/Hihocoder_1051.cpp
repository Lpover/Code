#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        if(m>=n) 
		{
		printf("100\n");
		continue;
		}
        int max=0;
        for(int i=m+1;i<=n;i++)
        {
            if(a[i]-a[i-m-1]-1>max)
                max=a[i]-a[i-m-1]-1;
        }
        printf("%d\n",max);
    }
    return 0;
}
