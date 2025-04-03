#include <iostream>
using namespace std;
double average();

int main(){
average();
}
double average(){
	
int sum;
int n;
int num;

cout<<"Enter the Number of Elements to Find Average: ";
cin>>n;

for (int i = 0; i < n; i++) {
cout << "Enter the " << i+1 << " Numbers: ";
cin >> num;
sum += num;
    }
	cout<<"The Sum of above "<<n<<" Numbers is: "<<sum<<endl;
	cout<<"The Average of above "<<n<<" Numbers is: "<<sum/n;
return 0;

}
