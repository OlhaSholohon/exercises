#include<iostream>
#include <bitset>
using namespace std;
//function returns 1 if the two set bits differ
int different (int first, int second, unsigned long x );
int main(){
	unsigned long x;
	int first, second;
	cout<<"Enter value x= ";
	cin>>x;
	unsigned long long x1;
	x1=static_cast<unsigned long long> (x);
	cout<<"Binary value of x= "<<bitset<32>(x1)<<endl;
	cout<<"Enter number of bit first number= ";
	cin>>first;
	cout<<"Enter number of bit second number= ";
	cin>>second;
	cout<<"The result is = "<<different(first,second,x)<<endl;;
	return 0;
}

int different (int first, int second, unsigned long x ){
	int result;
	long a,b;
	//select 2 bit and analyze it
	long temp=0x1;
	a=temp<<second;
	a=x^a;
	a=~a & x;
	a=a>>second;
	//select 1 bit and analyze it
	b=temp<<first;
	b=x^b;
	b=~b & x;
	b=b>>first;
	//compare bits
	result=a | b;
	return result;
}