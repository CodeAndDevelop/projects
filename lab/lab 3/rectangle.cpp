//2.  wap to add two retangular box to construct a third reatangular box 
//(add corresponding length, breadth , height of each box to make third box)
//i)  using object as argument
//ii) using function that return 
  
#include<iostream>


using namespace std; 

class rectangle
{
	double l,b,h; 
	
	public:
		void input()
		{
			cout<<"Enter the lenght and breadht and height of recangle:"; 
			cin>>l>>b>>h; 
			
		}
		
    void display() {
        cout << "Length: " << l << ", Breadth: " << b << ", Height: " << h << endl;
    }

    
    void add(rectangle r) {
        rectangle r3;
        r3.l = l + r.l;
        r3.b = b + r.b;
        r3.h = h + r.h;
        cout << " Resulting rectangle:\n";
        r3.display();
    }
		
		
	
};
int main()
{
	rectangle r1,r2;
	
	r1.input() ; 
	
	r2.input(); 
	
	r1.add(r2); 
	
	
	return 0; 
}


