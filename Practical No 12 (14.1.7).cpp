#include <iostream>
#include <cmath>
using namespace std;
int areac();
int main (){
areac();
}
areac(){int number;
int b,l,h;
int r;

cout<<"Calculations"<<endl;
cout<<"1.Volume of Cylinder. "<<endl;
cout<<"2.Area of Sphere. "<<endl;
cout<<"3.Volume of Cube. "<<endl;
cout<<endl<<"Enter (1-3) for any Calculations: ";
cin>>number;


if (number==1){
cout<< "Volume of Cylinder";
cout<<"Enter the values: "<<endl;
cout<<"Radius of the Cylinder (r): ";
cin>>r;
cout<<"Height of the Cylinder(h) : ";
cin>>h;
cout<<"The Volume of Cylinder is: "<< M_PI * r * r*h;
}
else if (number==2){
cout<< "Calculating Volume of Sphere"<<endl;
cout<<"Enter the values: "<<endl;
cout<<"Radius of the Sphere (r): ";
cin>>r;
cout<<"The Volume of Sphere is: "<< M_PI * 0.75 * r * r * r;
}
else if (number==3){
cout<<"Calculating Volume of Cube: "<<endl;
cout<<"Enter the values: "<<endl;
cout<<"length of side of the cube(l) : ";
cin>>l;
cout<<"The Volume of Cube is: ";
cout<<l*l*l;
}
else {
cout<<"No Calculations Applicable: "<<endl;
}

}
