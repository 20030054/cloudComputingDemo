#include <iostream>
#include <cmath>  // for pow function
using namespace std;

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0; // Return 0 if division by zero
    }
    return a / b;
}

// Function to find modulus (for integers)
int modulus(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a % b;
}

// Function to calculate power
float power(float a, float b) {
    return pow(a, b);
}

// Function to find maximum
float maximum(float a, float b) {
    return (a > b) ? a : b;
}

// Function to find minimum
float minimum(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    float num1, num2;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Displaying results
    cout << "Sum: " << add(num1, num2) << endl;
    cout << "Difference: " << subtract(num1, num2) << endl;
    cout << "Product: " << multiply(num1, num2) << endl;
    cout << "Quotient: " << divide(num1, num2) << endl;
    cout << "Power: " << power(num1, num2) << endl;
    cout << "Maximum: " << maximum(num1, num2) << endl;
    cout << "Minimum: " << minimum(num1, num2) << endl;

    // Modulus requires integers
    int int1 = static_cast<int>(num1);
    int int2 = static_cast<int>(num2);
    cout << "Modulus: " << modulus(int1, int2) << endl;

    return 0;
}
