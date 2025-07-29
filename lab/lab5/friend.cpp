// 2. wap to overload unary minus operator
// i. Using memmber function 
// ii. Using friend function 


#include<iostream> 

using namespace std; 
class A{
int num;
 public: 
A(int x=0){ num=x; }

friend A operator -(A ); 

void display()
{
    cout<<"Number: "<< num<< endl ; 
}

}; 

 A operator -(A a)
 {
   
    return --a.num; 
 }
int main()
{
    A a1(2),a2; 
    a2=-a1; 

    a2.display();  


 
    

    
    
    return 0; 
}