
/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include<iostream>
//#define input 600851475143

using namespace std;
typedef unsigned long long int longInt;

longInt findLargestPrime(longInt inputNumber);

int main(){
	//Reading input from console
	longInt input;
	cout<<"Enter the number: "<<endl;
	cin>>input;
	//Input should be greater than or equal to 1
 	if(input < 1){
		std::cerr<<"number "<<input<<" should be greater than or equal to 1"<<std::endl;
		return 1;
	}
	longInt largestFactor = findLargestPrime(input);
	cout<<"the largest prime factor of "<<input<< " is: "<<largestFactor<<endl;


}

longInt findLargestPrime(longInt inputNumber){
	longInt largestFactor = 0;
	if(inputNumber <= 3){
		return inputNumber;
	}
	for(longInt factor = 2; factor <= inputNumber/factor; ++factor){
		if(inputNumber%factor == 0){
			largestFactor = factor;
			do{
				inputNumber /= factor;
				cout<<"input: "<<inputNumber<<"  "<<"factor: "<<factor<<endl;
			}while(inputNumber%factor == 0);
		}
		if(inputNumber != 1){
			largestFactor = inputNumber;
		}
	}
	return largestFactor;
}

