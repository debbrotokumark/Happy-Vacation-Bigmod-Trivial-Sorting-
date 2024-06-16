#include <bits/stdc++.h>
using namespace std;
int main() {
int v,a,b,c,sum;
cin>>v>>a>>b>>c;

v=v%(a+b+c);
if(v==0 || v-a<0){
    cout<<'F'<<endl;
return 0;
}
else if(v-a-b<0){
            cout<<'M'<<endl;
}
else{
                cout<<'T'<<endl;


}





return 0;
}
