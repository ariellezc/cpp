#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void reverseSentence(string sentence){
    int size = sentence.size();
    if (size ==1){
        cout << sentence << endl;
    }
    else{
        cout << sentence[size - 1];
        reverseSentence(sentence.substr(0, size-1));
    }
}

int main() {
    vector<string> vecSentence;
    string sentence;
    cout << "Enter string:";
    getline(cin,sentence);
    for (int i=0;i<vecSentence.size();i++){
        reverseSentence(vecSentence[i]);
    }
}
