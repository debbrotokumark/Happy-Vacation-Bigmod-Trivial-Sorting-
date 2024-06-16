#include <bits/stdc++.h>
using namespace std;


int main() {

int n,a,b,c;

cin>>n;

for(int i=1;i<=n;i++){
        cin>>a>>b>>c;


    if(a*a==(b*b)+(c*c) || b*b==(a*a)+(c*c) || c*c==(a*a)+(b*b))
    {
        cout<<"Case "<<i<<":"<<"yes"<<endl;
    }
    else{
                cout<<"Case "<<i<<":"<<"no"<<endl;

    }

}

    return 0;
}
