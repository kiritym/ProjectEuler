/*
A palindromic number reads the same both ways. The largest palindrome 
made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<iostream>


using namespace std;

int reverseNumber(int num){
	int rnum = 0;
	while(num > 0){
		rnum = num%10 + rnum*10;
		num = num/10;
	}
	return rnum;
}


bool isPalindrome(int num){
	return (num == reverseNumber(num));
}

int main(){
	int mul = 0, max = 0;
	for(int i = 999; i > 100; i--){
		for(int j = i; j > 100; j--){
			mul = i*j;
			if(isPalindrome(mul) && mul > max){
				max = mul;
			}
		}
	}    
	cout<<"The largest palindrome made from the product of two 3-digit numbers is: "<<max<<endl;
}

