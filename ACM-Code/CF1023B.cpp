#include <stdio.h>
int main(void)
{
    long long n, k, c=0;
    scanf("%lld %lld", &n, &k);
    if (k <= n )
    {
        c = (k -1)/ 2;
    }
    else if ( 2 * n > k)
        c = n-k/2;
    else
    {
       c=0;
    }
    printf("%lld", c);
    return 0;
}
