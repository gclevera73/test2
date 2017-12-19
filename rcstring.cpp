#include "rcstring.h"
using namespace std;
int main()
{
	rcstring a,b,c;
	a="10";
	b="ALA ma kota";
	cout << a << " " << b << endl; // 10 ala jkfnvsfjvnsjkfjnsma ma kota
	c=a+b;
	cout << c<<endl; // 10ala ma kota
	c=a+rcstring(" ")+b;
	cout << c << endl; //10 ala ma kota
	rcstring d("a");
	cout << d <<endl; //a
	d+="ula";
	cout << d << endl; //aula
	d+="15";
	cout << d << endl; //aula15
	cout << d[3]<<endl; //a
	d[3]='b';
	cout << d << endl; //aulb15
	d[2]=d[1]=d[0];
	cout << d << endl; //aaab15
	cout<<"--------------------"<<endl;
	cout<< b.mojatoi() << endl;
	cout<< b <<endl;
	cout<< b.toLower() <<endl;
	cout<< b <<endl;
	cout<< b.Left(5) <<endl;
	
	
	
	return 0;
}
