//1. wap to count the no of objects created. 
//Use constructor and destructor to dispaly the object created and destroyed .

#include<iostream>

using namespace std; 


class abc {
	static int count; 
	int id; 
	public: 
	abc()
	{
		count++; 
		id=count; 
		cout<<"Object "<< id<< " created"<<endl; 
	}
	
	~abc()
	{
		cout<<"Object "<<id<<" destroyed"<<endl; 
	} 
	
}; 

int abc :: count=0; 

int main()
{
	{abc A1,A2,A3; 
	
	 { 
	abc B1,B2,B3; 
	 }
	}
	
	return 0; 
}
