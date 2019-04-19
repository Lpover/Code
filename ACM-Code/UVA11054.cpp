#include <stdio.h>
#include <stdlib.h>
 
int n, num, sb;
long long sum;
 
int main() {
    while (~scanf("%d", &n) && n) {
    sum = num = 0;
    for (int i = 0; i < n ; i ++) {
        scanf("%d", &sb);
        num += sb;
        sum += abs(num);
    }
    printf("%lld\n", sum);
    }
    return 0;
}
