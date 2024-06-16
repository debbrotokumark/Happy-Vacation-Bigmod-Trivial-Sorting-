#include <iostream>
using namespace std;


int main() {

int n,j;

cin>>n;

for(int i=1;i<=n;++i){

    for(j=i;j<n;j++)
        cout<<' ';


        for(j=1;j<=i;j++){
            if(j==i)
            cout<<"*";
            else{
                cout<<"* ";
            }
        }


       cout<<endl;
    }





    return 0;
}
