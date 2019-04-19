#include<bits/stdc++.h>
using namespace std;
double a[1111];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF) {
        for(int i=1;i<=n;i++) {
            scanf("%lf",&a[i]);
        }
        if(n==1) {
            printf("%.6f\n",a[1]);
            continue;
        }
        if(n==2) {
            printf("%.6f\n",(a[1]+a[2])/2.0);
            continue;
        }
        double sum1=0.0;
        for(int i=3;i<=n;i++) {
            sum1+=(double)(i-1)*(double)(i-2)/2.0;
        }
        sum1/=(double)n*(double)(n-1)*(double)(n-2);
        sum1*=2.0;
        double sum2=0.0;
        for(int i=2;i<=n;i++) {
            sum2+=(double)(i-1);
        }
        sum2/=(double)n*(double)(n-1);
        double sum11=0.0;
        for(int i=2;i<=n-1;i++)
            sum11+=a[i];
        double sum22=0.0;
        sum22=a[1]+a[n];
        double ans=0;
        ans=sum1*sum11+sum2*sum22;
        printf("%.6f\n",ans);
    }
    return 0;
}
