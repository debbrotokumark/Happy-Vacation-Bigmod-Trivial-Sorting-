#include <iostream>
using namespace std;
int main() {

   string a;
   cin>>a;


int l=a.length()%3;

   for(int i=0;i<a.length();i++){

   if(l!=0){

   if(i==l){
    cout<<',';
    l+=3;
   }


   }
   else{
    l=3;
    if(i==l){

   if(i==l){
    cout<<',';
    l+=3;
   }

    }

   }

    cout<<a[i];
   }


    return 0;
}
