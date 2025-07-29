#include<iostream> 

using namespace std; 

class weight{

    float kg,gram; 

    public:
    weight(float x=0,  float y=0){ kg=x; gram=y;}

   bool operator >= (weight w){
        
    float gram1,gram2; 
    gram1=kg*1000+ gram;
    gram2=w.kg*1000+w.gram;
    

    if(gram1>=gram2)
    {
        return true; 
    }
    else{
        return false; 
    }



   }

    


}; 
int main()
{
    weight w1(2,500),w2(3,600);
    
    if(w1>=w2)
    {
        cout<<"W1 is greater"<<endl; 
    }
    else{
        cout<<"W2 is greater"<<endl; 
    }
    return 0; 
}