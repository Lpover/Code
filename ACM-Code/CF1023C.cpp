#include <stdio.h>
#include <string.h>
#define N 200005

int main()
{
    int n, m;
    char s[N];
    char k[N];
    scanf("%d %d", &n, &m);
    int l = 0, r = 0, ans = 0,i;
    scanf("%s", s); 
    for (i = 0; i < n ; i++)
    {
        if (s[i] == '('&& l < m / 2)
        {
                l++;
                printf("(");
        }
        else if(s[i]==')'&& r < m / 2)
        {
                r++;
                printf(")");
        }
    }
    /*for (i = 0 ; i < strlen(k) ; i++)
    printf("%c", k[i]);*/
    printf("\n");
    return 0;
}
