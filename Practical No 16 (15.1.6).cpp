#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Memory address of num: " << &num << endl;
    
    cout << "Pointer ptr holds address: " << ptr << endl;
    
    cout << "Value pointed to by ptr: " << *ptr << endl;

    *ptr = 30;
    cout << "Updated value of num using pointer: " << num << endl;

    return 0;
}
