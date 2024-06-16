#include <bits/stdc++.h>
using namespace std;
int main() {

int a,b,c,d;
cin>>a>>b>>c;

if(a==c){
cout<<a<<endl;
return 0;
}

d=a%c;
d=c-d;

if(a+d<=b){

    cout<<a+d<<endl;
}

else
cout<<-1<<endl;
return 0;
}
