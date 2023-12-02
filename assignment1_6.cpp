/*  
6. If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring the least marks.
Input 1: A = 23 , B = 34 , C = 71
Output : ‘A’ has the least marks
*/

#include<iostream>

using namespace std;

int main() {
    // Declare variables to store marks of A, B, and C
    int A, B, C;

    // Input marks from the user
    cout << "Enter the marks of student A: ";
    cin >> A;

    cout << "Enter the marks of student B: ";
    cin >> B;

    cout << "Enter the marks of student C: ";
    cin >> C;

    // Determine the student with the least marks
    if (A <= B && A <= C) {
        cout << "'A' has the least marks." << endl;
    } else if (B <= A && B <= C) {
        cout << "'B' has the least marks." << endl;
    } else {
        cout << "'C' has the least marks." << endl;
    }

    return 0;
}
