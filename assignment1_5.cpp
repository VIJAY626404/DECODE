/*
5. Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle
*/

#include<iostream>

using namespace std;

int main() {
    // Declare variables to store sides of the triangle
    double side1, side2, side3;

    // Input sides from the user
    cout << "Enter the length of side1: ";
    cin >> side1;

    cout << "Enter the length of side2: ";
    cin >> side2;

    cout << "Enter the length of side3: ";
    cin >> side3;

    // Check for the type of triangle
    if (side1 == side2 && side2 == side3) {
        cout << "This is an Equilateral triangle." << endl;
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "This is an Isosceles triangle." << endl;
    } else {
        cout << "This is a Scalene triangle." << endl;
    }

    return 0;
}
