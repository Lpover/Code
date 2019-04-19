#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <map>
#include <cmath>
#include <algorithm>
#define INF 0x3f3f3f3f
#define MAXN 100010
#define mod 1000000007
using namespace std;
char s[105];
int main()
{
    while(scanf("%s",s)==1)
    {
        if(strlen(s)>10)
        {
            printf("TAT\n");
            continue;
        }
        long long num;
        sscanf(s,"%I64d",&num);
        if(num==0||num>=4294967296)
        {
            printf("TAT\n");
        }
        else
        {
            for(long long i=0,e=2;i<=5;e=e*e,++i)
            {
                if(num<e)
                {
                    printf("%I64d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}

