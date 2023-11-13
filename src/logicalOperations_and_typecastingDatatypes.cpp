#include <iostream>
using namespace std;

// Logical Operators Lab
int main(int argc, char ** argv){
   
    (void) argc;
    (void) argv;
  
    bool a {true};
    bool b{false};
    bool result;                                                //Part -1 
    result = a && b;
    cout<<"a && b = "<<result<<endl;
    result = a || b;
    cout <<"a || b = "<< result<<endl;
    result = !result;                                            //Logical operations
    cout<<"!a = "<<result<<endl;


    bool c {false};
    int x {0};                                                  //Part - 2
    result = (c || (x =42));
    cout<<"x = "<< x<<endl;

	
    
    
    int myInt {8};
	double myDouble{3.4459};
	int sum = myInt + (int)myDouble;
	cout<<"sum: "<<sum<<endl;


	cout<<"Enter integer value"<<endl;
	int userInt;                                                //Typecasting - Implicit and Explicit
	cin>>userInt;

	int product = myInt*userInt;
	cout<<"product: "<<product<<endl;

	string myString = "THIS IS STRING";
	cout<<myString<<endl;
	


  return 0;
}
