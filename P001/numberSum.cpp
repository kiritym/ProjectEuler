/*
If we list all the natural numbers below 10 that are multiples
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include<iostream>
#include<cmath>
#define MAX 1000

using namespace std;

typedef long int lint;

lint sumOfMultiple(int num, int limit);

int main(){
	lint sumThree = sumOfMultiple(3, MAX);
	lint sumFive = sumOfMultiple(5, MAX);
	lint sumFifteen = sumOfMultiple(15, MAX);
	cout<<"the output is: "<< sumThree+sumFive-sumFifteen <<endl;

}

lint sumOfMultiple(int number, int limit){
	int numOfMultiples = 0;
	limit%number ? numOfMultiples = floor(limit/number) :
				   numOfMultiples = limit/number - 1;
	return number*numOfMultiples*(numOfMultiples + 1)/2 ;
}

