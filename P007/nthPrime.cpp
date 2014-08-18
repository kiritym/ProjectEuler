/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <iostream>
#include <vector>
#define UPPER_LIMIT 10001

using namespace std;

bool isPrime(int numb){
	if(numb <= 1){
		return false;
	}
	if(numb == 2){
		return true;
	}
	if(numb % 2 == 0){
		return false;
	}
	int count = 3;
	while(count*count <= numb){
		if(numb % count == 0){
			return false;
		}
		else{
			count += 2;
		}

	}
	return true;
}

int main(){
	std::vector<int> primes;
	primes.push_back(2);
	int j = 3;

	while(primes.size() < UPPER_LIMIT){
		if(isPrime(j)){
			primes.push_back(j);
		}
		j += 2;
	}
	cout<<primes.at(primes.size()-1)<<endl;
	
}

 