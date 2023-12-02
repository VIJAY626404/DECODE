// Foundamental programming -1 || Week 2
/*
1. Take 2 integers input and print the greatest of them
Input 1: a = 5 b = 7
Output 1: second number 7 is the largest.
Input 2: a = 12 b = 1
Output 2 : first number 12 is the largest.
Note : It is ensured that the two numbers will be different
*/

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter your first number: "<<endl;
    cin>>num1;
    cout<<"Enter your second number: "<<endl;
    cin>>num2;
    
// check greater value
if(num1>num2){
    cout<<"Largest value is: "<<num1<<endl;
}
else{
cout<<"Largest value is: "<<num2<<endl;
}

    return 0;
}