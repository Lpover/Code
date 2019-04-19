#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<map>
#define INF 0x3f3f3f3f
#define N 110
using namespace std;
int next[4][2]= {{0,1},{1,0},{0,-1},{-1,0}};
int len[N][N],a[N][N];
int m,n;
int dp(int x,int y)
{
    int tx,ty,k,s,ms;
    ms=0;
    if(len[x][y]!=0)//µÝ¹é³ö¿Ú£»
        return len[x][y];
    for(k=0; k<=3; k++)
    {
        tx=next[k][0]+x;
        ty=next[k][1]+y;
        if(tx<0||ty<0||tx>m-1||ty>n-1)
            continue;
        if(a[tx][ty]<a[x][y])
        {
            s=dp(tx,ty);
            ms=max(ms,s);
        }
    }
    len[x][y]=ms+1;
    return len[x][y];
}
int main()
{
    int i,j,Max;
    while(~scanf("%d%d",&m,&n))
    {
        memset(a,0,sizeof(a));
        memset(len,0,sizeof(len));
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        Max=-1;
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                Max=max(Max,dp(i,j));
        printf("%d\n",Max);
    }
    return 0;
}
