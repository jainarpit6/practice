// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int count;
  cout << "Enter the count of prime nums you want" << endl;
  cin >> count;
  int n = 2;
  int primenum = 0;
  while(primenum != count) {
      bool prime = true;
      for(int i = 2; i <= n/2; ++i) {
          if(n%i == 0) {
              prime = false;
              break;
          }
      }
      if(prime) {
          cout <<"Prime: "<<n<<endl;
          primenum++;
      }
      n++;
  }
  
}
