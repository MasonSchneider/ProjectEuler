#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
* https://projecteuler.net/problem=4
* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
* Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool isPalindrome(int);

int main() {
  int first = 999;
  int second = 999;
  cout << "Answer: " << isPalindrome(1001) << endl;
  return 0;
}

bool isPalindrome(int n)
{

  std::string num = static_cast< std::ostringstream & >(( std::ostringstream() << std::dec << n )).str();
  int start = 0;
  int end = num.length() - 1;
  while(start < end)
  {
    if(num[start] != num[end])
    {
      return false;
    }
    start += 1;
    end -= 1;
  }
  return true;
}