#include<bits/stdc++.h>
using namespace std;
class HanXin{
	private:
    int n;
    int n1,n2,n3;
public:
    void line3(int k){
    	n1=k;
    }
    void line5(int k){
    	n2=k;
    }
    void line7(int k){
    	n3=k;
    }
    void showMany(){
    	int i;
    	bool flag=false;
    	for(i=10;i<=100;i++){
    		if(i%3==n1&&i%5==n2&&i%7==n3){
    			cout<<i<<endl;
    			flag=true;
    			break;
    		}
    	}
    	if(!flag)cout<<"Impossible"<<endl;
    }
};
int main() {

    int n, n1, n2, n3;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //韩信

        hx.line3(n1);  //3人一排

        hx.line5(n2);   //5人一排

        hx.line7(n3);   //7人一排

        hx.showMany();

    }

}
