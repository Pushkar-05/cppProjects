#include<cstdio>
#include<iostream>
using namespace std;
/*The task is to provide bill of carpet cleaning based on number of small rooms and large rooms*/
/*Frank's Carper Cleaning service*/

int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;
    
    int smallRoom {0};
    int largeRoom {0};                     //Declarations
    double tax {0};
    double cost{0};

    cout<<"Number of small rooms: ";
    cin>>smallRoom;
    cout<<"Number of large rooms: ";        //inputs
    cin>>largeRoom;

    cost = (smallRoom*25 + largeRoom*35);       //Calculations
    tax = cost*6.60/100;

    cout<<"cost: "<<cost<<endl;
    cout<<"Tax: "<<tax<<endl;                   //Result
    cout<<"Total cost: "<<tax+cost<<endl;

    cout<<"Thank you";


    return 0;
}