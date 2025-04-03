#include <iostream>
using namespace std;

int main(){
int num=10;
int *ptr;

ptr=&num;
cout << "The value of num: " << num << endl;
    cout << "The memory address of num: " << &num << endl;
    cout << "The pointer ptr holds the address: " << ptr << endl;
    cout << "The value pointed to by ptr: " << *ptr << endl;
    return 0;
}
