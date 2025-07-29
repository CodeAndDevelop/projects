// wap to read two numbers from the user and dispaly largest using concept of oop 
#include<iostream>

using namespace std; 

class number{

	int num; 
	public:
	void input()
	{
		
		cout<<"Enter the number:";
		
		cin>>num;  
	}
	
	int big(number n)
	{
		if(n.num>num)
		{
			return n.num; 
		}
		else
		{
			return num; 
		}
		
	}
	
	void display()
	{
		cout<<"Number="<<num<<endl;  
	}
};


int main()
{
	int large; 
    number n1,n2; 
	n1.input(); 
	n2.input(); 
	n1.display(); 
	n2.display(); 
	large=n1.big(n2);
	
	cout << "largest= "<<large;   
	
	return 0; 
}
