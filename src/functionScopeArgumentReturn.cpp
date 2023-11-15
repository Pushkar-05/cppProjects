#include <iostream>
#include<math.h>
using namespace std;

// Follow the Instructions to solve the lab and execute the code

void add(int a, int b)
{
	int sum = a+b;										                                //Function with argument and no return
	cout<<"Sum: "<<sum<<endl;
}

int power(int base, int exponent)
{
	return pow(double(base),double(exponent));		                                	//With argument, With return
}
int x {5};										                                        //Global scope

void print_x()				
{												                                        // No argument no return
	cout<<"X is: "<<x<<endl;					                                        //Called x in local
}
int main(int argc, char ** argv){
   
    (void) argc;
    (void) argv;
	add(8,9);
	cout<<"Power of 2.0 wrt 3.0 is "<<power(2.0,3.0)<<endl;
																			            // Function calls
	print_x();
	return 0;
}