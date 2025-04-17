#include <iostream>
using namespace std;
//User Defined Function to calculate factorial
int findfactorial ();
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
    return 1;
    else
    return n * factorial(n - 1);
}

int main() {
findfactorial ();
}
findfactorial (){
    int num;

    // Ask the user for input
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the input is valid
    if (num < 0)
    cout << "Error! Factorial of a negative number doesn't exist.";
    else {
    // Call the factorial function and display the result
    unsigned long long result = factorial(num);
    cout << "Factorial of " << num << " is " << result;
    }

    return 0;
}

