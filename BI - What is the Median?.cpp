#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int v[10001];
int i=0;
int m;

int main()
{
    int m;
    while(cin>>m){
    v[i]=m;

    sort(v,v+i+1);


    int mid=(i+1)/2;

    if((i+1)%2!=0){
    cout<<v[mid]<<endl;
    }
   else if((i+1)%2==0){

        m=(v[mid]+v[mid-1])/2;

            cout<<m<<endl;

    }


i++;

    }

}
