#include <iostream>
using namespace std;


int main() {

long long  n,s=1;

cin>>n;

for(int l=2;l<=n;l++)
{

    s=s*l;
    s=s%10000;


}

if(s==0){

    cout<<"0000"<<endl;

}
else{
    cout<<s<<endl;

}
    return 0;
}
