// 2. wap to overload unary minus operator
// i. Using memmber function 
// ii. Using friend function 


#include<iostream> 

using namespace std; 
class A{
int num;
 public: 
A(int x=0){ num=x; }

A operator -()
{

         
    return A(-num); 
}
void display()
{
    cout<<"Number: "<< num<< endl ; 
}

}; 
int main()
{
    A a1(2),a2; 
    a2=-a1; 

    a2.display();  


 
    

    
    
    return 0; 
}