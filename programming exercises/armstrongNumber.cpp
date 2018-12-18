/* Check if a 3 digit number is an Armstrong number. An Armstrong number of three digits is an integer
** such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an
** Armstrong number since 3**3 + 7**3 + 1**3 = 371.
** Input: a number, such as 371
** Output: “Yes” if the number is an Armstrong number, “No” if the number is not an Armstrong number.
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int num;
    int result=0;
    cout << "Enter a number:";
    cin >> num;
    int copyOfNum = num;
    while (copyOfNum!=0){
        int last = copyOfNum%10;
        vec.push_back(last);
        copyOfNum = (copyOfNum-last)/10;
    }
   for (int i=0; i<vec.size(); i++) {
       result += pow(vec[i],3);
   }

   if (result==num){
       cout << "It is an armstrong numnber" << endl;
   }
   else{
       cout << "It is not an armstrong number" << endl;
   }

}
