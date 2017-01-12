// Example program
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int reverse (int input) {
    stringstream ss;
    int reverse;
    int quot = input;
    while(quot >= 10) {
        int rem = quot%10;
        quot = quot/10;
        ss << rem;
    }
    ss << quot;
    ss >> reverse;
    return reverse;
}

bool isPalindrome(int sum) {
    
    stringstream ss;
    int j,i;
    ss << sum;
    string str = ss.str();
    int len = str.length();
    for(i = 0, j = len-1; i <= j; ++i,--j) {
        if(str.at(i) != str.at(j)) {
            return false;
        }
    }
    return true;
}

int main()
{
    cout<<
        int input;
        std::cin>>input;
        int itr = 1;
        int sum;
        while (true) {
            int reversenum = reverse(input);
            cout << "reverse num" << reversenum<<endl;
            sum = input + reversenum;
            if(isPalindrome(sum)) {
                
                break;
            }
            itr++;
            input = sum;
        }
        cout << "Itr Count:" << itr<<endl;
        cout << "Palindrome:" << sum << endl;
    
}
