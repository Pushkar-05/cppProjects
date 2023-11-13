#include <iostream>
using namespace std;

//Switch case implimentations

int main(int argc, char ** argv){
   
    (void) argc;
    (void) argv;

	int choice;
	cout<<"Input choice: ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cout<<"You chose option 1"<<endl;
			break;
		case 2:
			cout<<"You chose option 2"<<endl;
			break;
		case 3:
			cout<<"You chose option 3"<<endl;
			break;
		case 4:
			cout<<"You chose option 4"<<endl;
			break;
		case 5:
			cout<<"You chose option 5"<<endl;
			break;
										
		default:
			cout<<"Choice out of contitions"<<endl;
			break;
	}

	return 0;
}
