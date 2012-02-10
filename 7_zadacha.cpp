#include<iostream>
#include <bitset>
using namespace std;
function changes the places of neighboring bits
unsigned long change ( unsigned long x );
int main(){
	unsigned long x;
	 unsigned long long x1;
	 cout<<"Enter value x= ";
	 cin>>x;
	 x1=static_cast<unsigned long long> (x);
	 cout<<"Binary value x= "<<bitset<32> (x1)<<endl;
	 x1=static_cast<unsigned long long>( change(x));
	 cout<<"the result is x="<<bitset<32> (x1)<<endl;
	return 0;
}
unsigned long change ( unsigned long x )
{
	unsigned long mask;
	 mask=x<<31;
	 x=x>>1;
	 x=x^mask;
	 return x;
}

