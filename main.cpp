#include <iostream>
using std::cout;
using std::cin;
using std::endl;

unsigned long long num, factorial = 1;

int main() {
cout << "Enter number: ";
cin >> num; 

if (num >= 2 && num <=25){
      for (int x = 1; x <= num; x++){
        factorial = factorial * x;
      }
      cout << "Factorial = " << factorial << endl;
    }


return 0;

}