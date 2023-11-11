#include <cstdio>
#include<iostream>

using namespace std;

int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;

    /* Task is to ask user favorite number and print it again. Goal of this is to check input and output understanding with iostream*/ 
    int num {0}; // inetialization with a num to avoid garbage value.
    
    cout<<"Enter your favorite number between 0 to 100"<<endl;

    while(true)
    {   
        cin>>num;                                                                          //Declarations

        if(0<=num && num<=100)
        {
        cout<<"You entered: "<<num<<endl;                                                   //logic 
        cout<<"That's great! "<<num<<" is my favorite number too."<<endl;
        break;
        }
        else
        {
            cout<<"Dont try to fool me! lol :)"<<endl;                                       //Testing
            cout<<"Try again! Enter number between 0 and 100"<<endl;
        }
    }

  return 0;

}