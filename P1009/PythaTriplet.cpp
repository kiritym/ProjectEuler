/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <iostream>
#include <cmath>
#define SUM 1000


using namespace std;

int main(){
	for(int a = 1; a < SUM/3; a++)
		for(int b = a+1; b < SUM/2; b++){
			int c = SUM - a - b;
			if(c>0 && pow(c, 2) == pow(a, 2)+pow(b, 2)){
				cout<<"a: "<<a<<endl;
				cout<<"b: "<<b<<endl;
				cout<<"c: "<<c<<endl;
				cout<<"Product(abc): "<<a*b*c<<endl;

			}
		}
}

