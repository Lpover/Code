#include<bits/stdc++.h>
using namespace std;
int a[50],ans=0;
class Number{
private:
    int n;
    int w=0; 
public:
    Number(int a,int j){
    	n=a;
    }
    Number converto(int k){
    	ans=0;
    	while(n){
		w++;
		a[w]=n%k;
		n=n/k;	
    	}
    	for(int i=w;i>=1;i--)ans=ans*10+a[i];
    }
    void show(){
    	cout<<ans<<endl;
    }
};
#include <iostream>

int main() {

    int n, n1, n2;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1,10);     //n1是10进制正整数

        Number no3 = no1.converto(n2);  //no3是n2进制的正整数

        no3.show();     //输出结果

    }

}

