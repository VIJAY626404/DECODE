/*
9. Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
Input 1: ch = ‘9’
Output 1: digi
*/
#include<iostream>

using namespace std;

int main() {
    // Declare a variable to store the character
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet, digit, or special character
    if (isalpha(ch)) {
        cout << "Alphabet" << endl;
    } else if (isdigit(ch)) {
        cout << "Digit" << endl;
    } else {
        cout << "Special Character" << endl;
    }

    return 0;
}
