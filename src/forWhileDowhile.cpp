#include <iostream>
using namespace std;

// Follow the Instructions to solve the lab and execute the code
int main(int argc, char ** argv){
   
    (void) argc;
    (void) argv;
	
	int n {5};
	for (int i=0; i<1+n; i++)						//For loop	
	{
		cout<<"count is : "<<i<<endl;
	}


	int sum{0};
	int j=0;
	while(j<11)
	{
		sum+=j;											//While		
		j++;
	}
	cout<<"sum: "<<sum<<endl;

	int x{50};
	int enteredNumber;
	do
		{cout<<"Enter number greater than x:"<<endl;				//Do-While
		cin>>enteredNumber;
		}													
	while(enteredNumber<x);						//Until condition is true

	return 0;
}
