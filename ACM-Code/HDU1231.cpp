#include <iostream>
#include <cstdio>
#define N 10000
using namespace std;
int a[N];
int main()
{
    int n,temp,flag,sum,s,e,Max;
    while(~scanf("%d",&n)&&n!=0)
    {
        flag=1;
        Max=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=0)
                flag=0;
        }
        if(flag)
        {
            printf("%d %d %d\n",Max,a[0],a[n-1]);
            continue;
        }
        else
        {
            sum=a[0];
            Max=a[0];
            temp=0;
            s=0;
            e=0;
            for(int i=1;i<n;i++)
            {
                if(sum<0)
                {
                    temp=i;
                    sum=0;
                }
                sum+=a[i];
                if(sum>Max)
                {
                    Max=sum;
                    e=i;
                    s=temp;
                }
            }
        }
        printf("%d %d %d\n",Max,a[s],a[e]);
    }
    return 0;
}
