#include <iostream>
using namespace std;
// Class declaration
class Rectangle {
private:
    double length;
    double width;

public:
    // Member functions to set the dimensions
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    // Member function to calculate the area
    double getArea() {
        return length * width;
    }

    // Member function to display the dimensions
    void display() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    // Create objects of Rectangle
    Rectangle rect1, rect2;

    // Set dimensions for rect1
    rect1.setLength(5.0);
    rect1.setWidth(3.0);

    // Set dimensions for rect2
    rect2.setLength(7.0);
    rect2.setWidth(4.0);

    // Display dimensions and area of rect1
    cout << "Rectangle 1:" << std::endl;
    rect1.display();
    cout << "Area: " << rect1.getArea() << std::endl;

    // Display dimensions and area of rect2
    cout << "\nRectangle 2:" << std::endl;
    rect2.display();
    cout << "Area: " << rect2.getArea() << std::endl;

    return 0;
}

