#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    
    if(age>=18)
    {
        cout<<"\nYou are eligible to vote\n and pay taxes too(we're sorry)";
    }
    else
        cout<<"\nYou are not eligible to vote\nsee you in a few!";
return 0;
}
