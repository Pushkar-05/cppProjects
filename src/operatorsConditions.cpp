#include<cstdio>
#include <iostream>
using namespace std;

/* Work Permit based on conditions. If else with program flow explained*/


int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;

    int age{0};
    string parental_consent;
    string ssn;                                                     //Declarations
    string accidents;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Do you have valid ssn?: yes or no"<<endl;
    cin>>ssn;                                                       //inputs

    cout<<"Did you have any car accidents?: yes or no"<<endl;
    cin>>accidents;
    
    if(age>15 && age <18)
    {
        cout<<"Do you have parental consent?: yes or no"<<endl;
        cin>>parental_consent;
        
    }

    


    if((age>=18 && ssn == "yes" && accidents == "no") || (age>15 && age<18 && parental_consent == "yes" && ssn == "yes" && accidents == "no") )
    {
        cout << "You can work"<<endl;
    }                                                                                                                                                               // Logic
    else{
        cout<<"You cannot work"<<endl;
    }


    return 0;

}