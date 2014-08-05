/*
2520 is the smallest number that can be divided by each of the numbers
from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of
the numbers from 1 to 20?
*/

#include <iostream>
#include <vector>


using namespace std;

void insertIntegers(vector<int> &v){
	for(int i = 1; i <= 20; i++){
		v.push_back(i);
	}
}

void readVector(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<", ";
	}
	cout<<endl;
}



int main(){
	vector<int> numbers;
	insertIntegers(numbers);
	readVector(numbers);
	vector<int> prime = {2,3,5,7,11,13,17,19};
	
	int leastMultiple = 1;
	for(int i = 0; i < prime.size(); i++){
		bool flag;
		do{
			flag = false;
			int counter = 0;
			//cout<<"Vector values:"<<endl;
			for(int j = 0; j < numbers.size(); j++){
					if( numbers[j]%prime[i] == 0){
						numbers[j] = numbers[j]/prime[i];
						counter++;
					}	
				cout<<numbers[j]<<", ";
			}
			cout<<endl;
			if(counter >= 1){
						leastMultiple = leastMultiple*(prime[i]);
						cout<<"multiplication value: "<<leastMultiple<<"[ Factor is: "<<prime[i]<<" ]"<<endl;
						flag = true;
			}
		}while(flag == true);
	
	}
	for(int j = 0; j < numbers.size(); j++){
		if(numbers[j] != 1){
			leastMultiple = leastMultiple*numbers[j];
		}
	}
	cout<<"The smallest positive number that is evenly divisible by all of"<<endl;
	cout<<"the numbers from 1 to 20 is: "<<leastMultiple<<endl;
}

