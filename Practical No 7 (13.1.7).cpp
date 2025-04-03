#include <iostream>
using namespace std;

int main() {
 int arry[3];
 cout<<"Enter any for values: "<<endl;
 for(int i=0; i<3; i++){
 	cin>>arry[i];
 }

	 int max = arry[0];
	 int min = arry[0];
	 int sum=arry[0]; 
	 
	 for(int k = 1; k<3; k++){
	 	if(max < arry[k]){
		 max = arry[k];
		 }
		 if(min>arry[k]){
		min = arry[k];
		 }
		
sum+=arry[k];
}
double average =(double)sum/3;

	cout<<"The max value is:" <<max<<endl;
	cout<<"The min value is:"<<min<<endl;
	cout<<"The Average is:"<<average<<endl;
	return 0;
}


