#include <iostream>

using namespace std;

int main(){
int a,b;
cout<<"Enter the Values: "<<endl;
cout<<"a: ";
cin>>a;
cout<<"b: ";
cin>>b;

if(a>b){
    cout<<"a is greater than b.";
}
else if(a<b){
    cout<<"a is less than b.";
}

if (a==b){
    cout<<"a is equal to b.";
    
}
else {
cout<<"Not applicable";
return 0;
}
}
