#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstdio>
#include<cassert>
#include<iomanip>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#define C 0.5772156649
#define pi acos(-1.0)
#define ll long long
#define mod 1000000007
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1
#pragma comment(linker, "/STACK:1024000000,1024000000")

using namespace std;

const double g=10.0,eps=1e-7;
const int N=100000+10,maxn=500+100,inf=0x3f3f3f;

struct edge{
    int to,Next,w;
}e[N];
int dis[N],father[20][N],depth[N];
int cnt,head[N],value[N];
void add(int u,int v,int w)
{
    e[cnt].to=v;
    e[cnt].w=w;
    e[cnt].Next=head[u];
    head[u]=cnt++;
}
void dfs(int u,int f)
{
    father[0][u]=f;
    for(int i=head[u];~i;i=e[i].Next)
    {
        int To=e[i].to;
        if(To!=f)
        {
            dis[To]=dis[u]+e[i].w;
            depth[To]=depth[u]+1;
            dfs(To,u);
        }
    }
}
void init(int n)
{
    depth[1]=1;
    dis[1]=0;
    dfs(1,-1);
    for(int i=1;i<20;i++)
        for(int j=1;j<=n;j++)
            father[i][j]=father[i-1][father[i-1][j]];
}
int lca(int x,int y)
{
    if(depth[x]>depth[y])swap(x,y);
    for(int i=0;i<20;i++)
        if((depth[y]-depth[x])>>i&1)
            y=father[i][y];
    if(x==y)return x;
    for(int i=19;i>=0;i--)
    {
        if(father[i][x]!=father[i][y])
        {
            x=father[i][x];
            y=father[i][y];
        }
    }
    return father[0][x];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cnt=0;
        memset(head,-1,sizeof head);
        for(int i=1; i<n; i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            add(a,b,c);
            add(b,a,c);
        }
        init(n);
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            cout<<dis[a]+dis[b]-2*dis[lca(a,b)]<<endl;
        }
    }
    return 0;
}

