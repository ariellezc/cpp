/* Given the following pseudocode, first understand how it works, then implement the code for multiplying
** the two polynomials in the programming language of your choice.
** • Create a result array Res[], of size m + n + 1, where m is the degree of the first polynomial and n is
** the degree of the second polynomial
** • Initialise all the array elements as 0
** • For each element of P1 (corresponding to index i) and each element of P2 (corresponding to index
** j), perform the following operation
** res[i+j] = res[i+j] + P1[i]*P2[j], where i is the index for P1 and j is the index for P2.
** Hint: Use a nester FOR loop to traverse both arrays.
** • Return res
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Question 1b multiplying polynomials
vector<int> multiplyPoly(vector<int> p1, vector<int> p2, vector<int> res){
    res.resize(p1.size()+p2.size()-1,0);
    for (int i=0;i!=p1.size();i++){
        for (int j=0; j!=p2.size(); j++){
            res[i+j] += p1[i]*p2[j];
        }
    }
    return res;
}
int main(){
    vector<int> p1;
    vector<int> p2;
    vector<int> res;
    vector<int> final;
    int first,second;

    cout << "p1: ";
    while (cin>>first){
        p1.emplace_back(first);
        if (cin.get() == '\n'){
            break;
        }
    }

    cout << "p2: ";
    while (cin>>second){
        p2.emplace_back(second);
        if (cin.get() == '\n'){
            break;
        }
    }

    final = multiplyPoly(p1,p2,res);

    int n = final.size();
    if (n == 0) {
        cout << "{}";
    } else if (n == 1) {
        cout << '{' << final[0] << '}';
    } else {
        cout << "res = {" << final[0];
        for(int i = 1; i < n; ++i) {
            cout << ", " << final[i];
        }
        cout << '}';
    }
}
