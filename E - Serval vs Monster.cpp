#include <bits/stdc++.h>
using namespace std;
int main() {
int h,a;
cin>>h>>a;

if(a>=h)
{
    cout<<1<<endl;
    return 0;
}
else{
    int c =h/a;
    if(h%a!=0)
    {
        c++;
    }
    cout<<c<<endl;

}

return 0;
}
