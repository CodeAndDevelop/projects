//3. create a class first with data member data 1 and another class second with data member data2.
// Use friend to subtract smallest data from largest data . 
#include<iostream>

using namespace std;
class second; 
class first
{
	int data1;
	public:
	first(int x=0)
	{
		data1=x; 
	}
	void display(){cout<< "First Number: "<< data1 <<endl;  }
	friend void subtract(first, second); 
	 
 };  
 
 class second{
 	int data2;
	 public:  
 		second(int x=0)
	{
		data2=x; 
	}

	void display(){cout<< "Second Number: "<< data2 << endl;   }
 	friend void subtract(first, second); 
 	
 };
 
 void subtract(first f, second s)
 {
 	int sub; 
 	if(f.data1>=s.data2)
 	{
 		sub=f.data1-s.data2; 
	 }
	 else
	 {
	 	sub=s.data2-f.data1; 
	 }
	 cout<<"subtraction = " << sub; 
 }

int main()
{
	first f(5); second s(10); 
	f.display(); 
	s.display(); 
	subtract(f,s); 
	return 0; 
}
