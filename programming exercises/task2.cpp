/* Read from the keyboard a list of positive integers, for example: 1, 4, 7, 9
** a. Write a function that prints the binary representation of the numbers in the list, for the example
** above it is: 1: 0001 4: 0100 7: 0111 9: 1001
** b. Print the numbers from the previous list that are palindromes. For example, 9: 1001 is a
** palindrome.
** c. Remove all the numbers in the list whose binary representation is a palindrome and print the list
** after their removal.
*/

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

void isNotPalindrome(vector<int> vec, vector<int> isPalindromeNum, vector<string> newVec, vector<string> isPalindromeVec){
	cout << "Non-Palindrome numbers:" << endl;
	vector<string> diff;
	vector<int> diff2;
	set_difference(newVec.begin(), newVec.end(), isPalindromeVec.begin(), isPalindromeVec.end(), inserter(diff, diff.begin()));
	set_difference(vec.begin(), vec.end(), isPalindromeNum.begin(), isPalindromeNum.end(), inserter(diff2, diff2.begin()));
	
	for (int i=0;i<diff.size();i++){
		cout << diff2[i] << ":" << diff[i] << endl;
	}
}

void isPalindrome(vector<int> vec, vector<string> newVec){
	vector<string> isPalindromeVec;
	vector<int> isPalindromeNum;
	for (int i=0;i<newVec.size(); i++){
		int num = vec[i];
		string copyOfNewVec = newVec[i];
		if (string(copyOfNewVec.begin(), copyOfNewVec.end()) == string(copyOfNewVec.rbegin(), copyOfNewVec.rend())){
			isPalindromeNum.emplace_back(num);
			isPalindromeVec.emplace_back(copyOfNewVec);
		}
		else{
			continue;
		}
	}
	cout << "Palindrome numbers:" << endl;
	for (int i=0; i<isPalindromeVec.size(); i++){
		cout << isPalindromeNum[i] << ":" << isPalindromeVec[i] << endl;
	}	
	isNotPalindrome(vec, isPalindromeNum, newVec, isPalindromeVec);
	
}


void decToBin(vector<int> vec){
	vector<string> newVec;
	int r;
	for (int i=0; i<vec.size(); i++){
		int num = vec[i];
		string s;
		vector<int> convertedVec;
		while(num!=0){
			r=num%2;
			convertedVec.emplace_back(r);
			num/=2;
		}
		for (int i=convertedVec.size()-1; i>=0; --i){
			s.append(to_string(convertedVec[i]));
		}
		newVec.emplace_back(s);
	}  
	for (int i=0; i<newVec.size(); i++){
		cout << vec[i] << ":" << newVec[i] << endl;
    }
	
	isPalindrome(vec, newVec);
}

int main(){
	vector<int> vec;
	int dec;
	cout << "Enter the number:";
	while (cin>>dec){
		if (dec>0){
			vec.emplace_back(dec);
		}
		if (cin.get() == '\n'){
			break;
		}
	}
	decToBin(vec);
}
