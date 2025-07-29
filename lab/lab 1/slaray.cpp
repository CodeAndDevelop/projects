#include<iostream>

using namespace std; 

inline float salary(float s)
{
    return (s-s*0.1); 
}

int main()
{
    float s; 

    cout<<"Enter the salary of employee:"; 

    cin>>s; 

    cout<<"The net salary="<<salary(s)<<endl; 

    return 0; 
}