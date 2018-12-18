/*
The factorial for a non-negative integer n, n!, is defined as: 0! = 1 n! = n * (n-1)! (n > 0). The input to
your program consists of several lines, each containing two non-negative integers, n and m, both less
than 2^31. For each input line, output a line stating whether or not m divides n!.
Example input:
6 9
6 27
20 10000
20 100000
Example output:
9 divides 6!
27 does not divide 6!
10000 divides 20!
100000 doe not divide 20!
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

unsigned long long factorial(unsigned long long n){
    if (n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    unsigned long long n,m,copyOfN;
    vector<string> nmvalues;
    cout << "Enter two numbers:" << endl;
    while (cin >> n && cin >> m){
        copyOfN = n;
        if (factorial(n) % m == 0) {
            string value1= to_string(m) + " divides " + to_string(copyOfN) + "!";
            nmvalues.emplace_back(value1);
        }
        else {
            string value2= to_string(m) + " does not divides " + to_string(copyOfN) + "!";
            nmvalues.emplace_back(value2);
        }
        if (cin.get() == 'S'){
            break;
        }
    }
    cout << endl;
    for (int i=0;i<nmvalues.size();i++){
        cout << nmvalues[i] << endl;
    }
}
