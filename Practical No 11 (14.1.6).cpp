#include <iostream>
#include <cmath>
using namespace std;
int areac();
int main (){
areac();
}
areac(){int number;
int b,h;
int r;

cout<<"Calculations"<<endl;
cout<<"1.Area of Circle. "<<endl;
cout<<"2.Area of Triangle. "<<endl;
cout<<"3.Area of Parallelogram. "<<endl;
cout<<endl<<"Enter (1-3) for any Calculations: ";
cin>>number;


if (number==1){
cout<< "Calculating Area of a circle: "<<endl;
cout<<"Enter the values: "<<endl;
cout<<"Radius of the Circle (r): ";
cin>>r;
cout<<"The Area of Circle is: "<< M_PI * r * r;
}
else if (number==2){
cout<<"Calculating Area of a Triangle: "<<endl;
cout<<"Enter the values: "<<endl;
cout<<"Height of triangle(h) : ";
cin>>h;
cout<<"Height of breath(b) : ";
cin>>b;
cout<<"The Area of Triangle is: ";
cout<<0.5*b*h;
}
else if (number==3){
cout<<"Calculating Area of a Parallelogram: "<<endl;
cout<<"Enter the values: "<<endl;
cout<<"Height of Parallelogram(h) : ";
cin>>h;
cout<<"Breath of Triangle(b) : ";
cin>>b;
cout<<"The Area of Parallelogram is: ";
cout<<b*h;
}
else {
cout<<"No Calculations Applicable: "<<endl;
}

}
