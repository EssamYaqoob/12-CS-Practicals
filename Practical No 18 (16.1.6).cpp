#include <iostream>
using namespace std;
// Class definition
class Counter {
private:
    int count; // Private data member

public:
    // Constructor to initialize count
    Counter() : count(0) {}

    // Member function to increment count
    void increment() {
    count++;
    }

    // Member function to get the current count
    int getCount() const {
    return count;
    }
};

int main() {
    Counter counter; // Create an object of Counter

    // Increment the counter
    counter.increment();

    // Display the current count
    cout << "Current count: " << counter.getCount() << std::endl;

    return 0;
}

