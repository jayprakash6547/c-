#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	char s;
	int a=0,d=0;
	while(n--){
		cin>>s;
		if(s=='A')a++;
		else d++;
	}
	if(a>d)cout<<"Anton\n";
	else if(d>a)cout<<"Danik\n";
	else cout<<"Friendship\n";
	}