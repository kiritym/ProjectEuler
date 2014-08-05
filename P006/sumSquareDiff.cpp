/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten
natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/

#include <iostream>
#include <cmath>
#define NUM 100
#define SUMOFNUM(N) N*(N+1)/2
#define SUMOFNUMSQUARE(N) N*(N+1)*(2*N+1)/6

using namespace std;

int main(){
	cout<<"The result is: "<<(long int)pow(SUMOFNUM(NUM), 2) - (long int)SUMOFNUMSQUARE(NUM)<<endl;
}

