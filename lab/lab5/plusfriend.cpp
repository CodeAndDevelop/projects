//3  wap to overload plus operator to add two complex number 
// i. Using member funciton 
// ii. Using Friend function 





#include<iostream> 

using namespace std; 
class Complex{
int real ;
int img ; 
 public: 
Complex(int x=0, int y=0){ real=x; img=y; }
 
void display()
{
    cout<<real<<"+i"<<img<<endl; 
}
 

  friend Complex operator + (Complex ,Complex); 

}; 

   Complex operator + (Complex c, Complex d)
 {
   Complex sum; 
   sum.real=c.real+d.real; 
   sum.img=c.img+d.img; 
    return sum; 
 }

int main()
{
    Complex c1(5,3), c2(4,2),c3; 

    c3=c1+c2;
    
    c1.display(); 
    c2.display(); 

    cout<<"After addition : "; 

    c3.display(); 
    
      
    




 
    

    
    
    return 0; 
}