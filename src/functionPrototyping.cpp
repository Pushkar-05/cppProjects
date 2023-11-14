#include <iostream>
using namespace std;

// Follow the Instructions to solve the lab and execute the code

int cube (int n)
{
	return n*n*n;
}
int add(int a, int b)
{
	return a+b;
}
int subtract(int a, int b)
{
	return abs(a- b);
}

int main(int argc, char ** argv){
   
    (void) argc;
    (void) argv;
	
	int x;
	cout<<"Enter a number for cube: "<<endl;
	cin>>x;															// Part -1
	int result = cube(x);
	cout<<"Cube of entered number: "<<result<<endl;

	int l,y;
	cout<<"Enter two integers: "<<endl;
	cin>>l>>y;

	cout<<"Number sum: "<<add(l,y)<<endl;                           // Part -2
	cout<<"Number difference: "<<subtract(l, y)<<endl;

	return 0;
}
