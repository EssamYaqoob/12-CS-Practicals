#include <iostream>
#include <cstring> // For strcpy, strcat, strlen, strcmp
using namespace std;
int main() {
    char str1[100], str2[100], str3[100];

    // Copy a string to str1
    strcpy(str1, "Hello");
    cout << "str1 after strcpy: " << str1 << std::endl;

    // Concatenate str1 and str2
    strcpy(str2, " World");
    strcat(str1, str2);
    cout << "str1 after strcat: " << str1 << std::endl;

    // Get the length of str1
    cout << "Length of str1: " << std::strlen(str1) << std::endl;

    // Compare str1 and str2
    int result = std::strcmp(str1, str2);
    if (result == 0) {
    cout << "str1 and str2 are equal." << std::endl;
    } else if (result < 0) {
    cout << "str1 is less than str2." << std::endl;
    } else {
    cout << "str1 is greater than str2." << std::endl;
    }

    return 0;
}

