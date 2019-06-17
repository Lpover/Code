#include<bits/stdc++.h>
using namespace std;
int zz(int a) {
	int i;
	for(i=2; i<=sqrt(a); i++) {
		if(a%i==0 && a!=0) return 0;
	}
	 return a;
}
int main() {
	int m,a[10000],s=0;
	cin>>m;
	for(int i=2; i<=m; i++) {
		a[i]=zz(i);
	}
	for(int i=5; i<=m; i++) {
		if(a[i]-a[i-1]==2) {
			//cout<<a[i-1]<<" "<<a[i];
			if(s<a[i]){
				s=a[i];
			}
		} else if(a[i]-a[i-2]==2) {
			//cout<<a[i-2]<<" "<<a[i];
			if(s<a[i]){
				s=a[i];
			}
		}
	}
	cout<<s-2<<" "<<s;
	return 0;
}
