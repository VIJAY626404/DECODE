/*
4. Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7
Output 1: Area is greater than perimete
*/
#include<iostream>

using namespace std;

int main() {
    // Declare variables to store length and breadth
    double length, breadth;

    // Input length and breadth from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Calculate area and perimeter
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    // Compare area and perimeter numerically
    if (area > perimeter) {
        cout << "Area is greater than perimeter." << endl;
    } else {
        cout << "Perimeter is greater than or equal to area." << endl;
    }

    return 0;
}
