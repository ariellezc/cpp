/* Computing the derivative for each of the two polynomials.
** Example input: Degree = 2 P1 = [3,1,9] 𝟑 ∗ 𝒙
** 𝟐 + 𝒙 + 𝟗
** Degree = 3 P2 = [2,1,2,1] 𝟐 ∗ 𝒙
** 𝟑 + 𝒙
** 𝟐 + 𝟐 ∗ 𝒙 + 𝟏
** Example output: Degree = 1 Res1 = [6,1] 𝟔 ∗ 𝒙 + 𝟏
** Degree = 2 Res2 = [6,2,2] 𝟔 ∗ 𝒙
** 𝟐 + 𝟐 ∗ 𝒙 + �
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    vector<int> derivativeVec = {3, 1, 9};
    vector<int> derivativeOfVec;
    int count = derivativeVec.size()-1;
    derivativeOfVec.resize(derivativeVec.size());
    for (int i = 0; i <= derivativeVec.size()-1; i++) {

        derivativeOfVec[i] = derivativeVec[i]*count;
        count--;
    }
    for (int i=0; i<derivativeOfVec.size()-1; i++){
        cout << derivativeOfVec[i] << endl;
    }
}
