#include<string>
#include<iostream>  
using namespace std;
const int maxn = 100000 + 5;
int n, d;
char a[maxn];
int main()
{
    while (cin>>n>>d && n&&d)
    {
        getchar();
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            char c = getchar();
            while (k>0 && k+(n-i)>n-d && a[k] < c)
                k--;                       
            if (k < n-d) a[++k] = c;
        }
        a[++k] = '\0';
        cout << a+1 << endl;
    }
    return 0;
}

