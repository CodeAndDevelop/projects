//4. wap to create a student with details such as: name , rollnumber and marks in 5 subjects .
// Enter the record for 10 student & display the list of students who passed the semester. 


#include<iostream>

using namespace std; 

class student
{
	int roll,m[5]; 
	char name[20]; 
	
	bool pass; 
	
	public:
		
		void input()
		{
			int i; 
			
			cout<<"Enter your name : "; 
			cin>>name; 
			
			cout<<"Enter your Roll number : "; 
			cin>>roll; 
			
			for(i=0;i<5; i++)
			{
				cout<<"Mark "<<i+1<<" = "; 
				cin>>m[i]; 
				
			}
			
		}
		
		void check(student st)
		{
			int i; 
			
			for(i=0;i<5; i++)
			{
				if(st.m[i]<24)
				{
					pass=false;
					break;   
				}
				else{
					pass=true; 
				}
			}
			
			
		}
		
		void display()
		{

			
			if(pass)
			{
				cout <<endl<<"Passed Student is : "<<endl; 
				
				cout<<"Name="<<name<<endl; 
				cout<<"Roll="<<roll<<endl;
				for(int i=0;i<5; i++)
				{
					cout<<"Marks "<< i+1 << " = "<<m[i] << endl;  
				}
				cout<<endl; 
				 
			}
			
		}
		
		
		
		
}; 
int main()
{

   student s[4]; 
   int i; 
   for( i=0;i<4;i++)
   {
   	s[i].input(); 
   }
   
     for( i=0;i<4;i++)
   {
   	
   	s[i].check(s[i]); 
   }
   
        for( i=0;i<4;i++)
   {
   	
   	s[i].display(); 
   }
   
   
   
   
   
   
   
   
	
	return 0; 
}
