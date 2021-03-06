/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/
#include <iostream>
#include <chrono> //Used for time calculation
#include <cmath>

#define FACT_COUNT 500


using namespace std;

int allDevisors(long int &n){
	int nod = 0;
	int sqrtNum = (int) sqrt(n);
	
	for(long int i = 1; i <= sqrtNum; i++){
		if(n%i == 0){
			nod += 2;
		}
	}
	if (sqrtNum*sqrtNum == n){
		nod --;
	}
	return nod;
}

int main(){
	long int triangNumber = 0;
	int factorsCount = 0;
	int i = 1;
	chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
	while(factorsCount <= FACT_COUNT){
		triangNumber = triangNumber+i;
		factorsCount = allDevisors(triangNumber);
		i++;
	}
	cout<<"First triangle number having more than "<<FACT_COUNT<<" factors: "<<triangNumber<<endl;
	chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
	chrono::duration<double>time_span = chrono::duration_cast<chrono::duration<double>>(t2-t1);
	cout<<"time taken: "<<time_span.count()<<" seconds"<<endl;

}

