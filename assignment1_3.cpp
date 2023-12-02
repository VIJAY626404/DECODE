/*
3. Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no
*/
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the value of year: "<<endl;
    cin>>year;

    // check that given year is leap year or not
    if(year%400==0){
        cout<<"Yes, "<<year<<" is leap year."<<endl;
    }
    else{
        cout<<"No, "<<year<<" is not leap year."<<endl;
    }
    return 0;
}

