#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    int i1;
    double d1;
    string s1;

    string tmp;

    getline(cin,tmp);
    i1=stoi(tmp);

    getline(cin,tmp);
    d1=stod(tmp);

    getline(cin,s1);

    
    cout<<i1+i<<endl;
    cout<<fixed<<setprecision(1)<<d+d1<<endl;
    cout<<s+s1<<endl;


    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
