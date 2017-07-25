#include <iostream>
#include <math.h>
#include "../common/prime.hpp"
using namespace std;

/*
* https://projecteuler.net/problem=3
* The prime factors of 13195 are 5, 7, 13 and 29.
* What is the largest prime factor of the number 600851475143 ?
*/

int main() {
  long target = 600851475143;
  for(int i = 2; i*i < target; i++) {
    while(target % i == 0)
    {
      target /= i;
    }
  }
  cout << "Answer: " << target << endl;
  return 0;
}
