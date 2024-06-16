#include <bits/stdc++.h>
using namespace std;


int main() {

int n,a,b,sum=0;

cin>>n;

for(int i=1;i<=n;i++){

    cin>>a;
sum=0;
    while(a--){
      cin>>b;
      if(b>0){
        sum+=b;
      }
        

    }


  cout<<"Case "<<i<<": "<<sum<<endl;

}

    return 0;
}
