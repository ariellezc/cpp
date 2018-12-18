/* adding two polynomials.
** Example input: Degree = 2 P1 = [3,1,9] 𝟑 ∗ 𝒙
** 𝟐 + 𝒙 + 𝟗
** Degree = 3 P2 = [2,1,2,1] 𝟐 ∗ 𝒙
** 𝟑 + 𝒙
** 𝟐 + 𝟐 ∗ 𝒙 + 𝟏
** Example output: Degree = 3 Res = [2,4,3,10] 𝟐 ∗ 𝒙
** 𝟑 + 𝟒 ∗ 𝒙
** 𝟐 + 𝟑 ∗ 𝒙 + 𝟏�
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> p1;
    vector<int> p2;
    vector<int> res;

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

    res.resize(max(p1.size(),p2.size()));
    reverse(p1.begin(), p1.end());
    reverse(p2.begin(), p2.end());

    for(int i=0; i<max(p1.size(),p2.size()); i++){
        res[i] = p1[i] + p2[i];
    }

    int n = res.size();
    if (n == 0) {
        cout << "{}";
    } else if (n == 1) {
        cout << '{' << res[0] << '}';
    } else {
        cout << "res = {" << res.back();
        for(int i = max(p1.size(),p2.size())-2; max(p1.size(),p2.size())>i ; --i){
            cout << ", " << res[i];
        }
        cout << '}';
    }
}
