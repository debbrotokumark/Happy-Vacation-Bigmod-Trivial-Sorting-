#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,a,b,c,sum=0;
    cin>>n;
    while(n--){

    cin>>a>>b>>c;
    if(a+b+c>=2)
    {
        sum++;
    }

    }

    cout<<sum<<endl;
}
