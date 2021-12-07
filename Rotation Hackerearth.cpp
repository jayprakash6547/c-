#include<bits/stdc++.h>

using namespace std;

int main(){

int n;

cin>>n;

string s,t;

cin>>s;

cin>>t;

int count = 0;

string tmp;

for(int i=0;i<n;i++){

tmp=s.substr(i);

if(t.find(tmp)==0){

cout<<count<<endl;

return 0;

}

count++;

}

}