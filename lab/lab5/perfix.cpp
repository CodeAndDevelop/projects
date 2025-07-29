// 1. Wap to overload an increment operator (++) perfix notation 
#include<iostream> 

using namespace std; 
class A{
int num;
 public: 
A(int x=0){ num=x; }

A operator ++()
{
    
    return A(++num); 
}
void display()
{
    cout<<"Number: "<< num<< endl ; 
}

}; 
int main()
{
    A a(2),b; 

    cout<<"Before increment : "; 
    a.display(); 
   b= ++a; 


    cout<<"After increment :  "; 



    b.display(); 
    

    
    
    return 0; 
}