/*
7. Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
Input 1: 2 0
Output 1: the point lies on the x - axis
*/

#include<iostream>

using namespace std;

int main() {
    // Declare variables to store the coordinates of the point
    int x, y;

    // Input coordinates from the user
    cout << "Enter the x-coordinate: ";
    cin >> x;

    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Check the position of the point
    if (x == 0 && y == 0) {
        cout << "The point lies at the origin (0, 0)." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point does not lie on either axis." << endl;
    }

    return 0;
}
