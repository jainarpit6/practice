#include <iostream>
#include <string>
using namespace std;

void findPal(string& mystr, int len) {
    
    int low = 0;
    int high = 0;
    int start = 0;
    
    int palinlen = 1;
    for(int i = 1; i < len; ++i) {

        low = i - 1;
        high = i + 1;
        while(low >= 0  && high < len && (mystr.at(low) == mystr.at(high))) {

            if(palinlen < (high - low + 1)) {
                palinlen = high - low + 1;
                start = low;
            }
            low--;
            high++;
        }

        low = i - 1;
        high = i;
        while(low >= 0 && high < len && (mystr.at(low) == mystr.at(high)) ) {
            if(palinlen < (high - low + 1)) {
                palinlen = high - low + 1;
                start = low;
            }
            low--;
            high++;

        }
    }

    cout << "Longest string is:" << mystr.substr(start,palinlen) << endl;
}

int main()
{
  string mystr;
  cout << "Enter the String" << endl;
  cin >> mystr;
  int len = mystr.length();
  findPal(mystr,len);

}

