//4.  wap to overload >= operator for objects of class weight in kg and gram 
#include<iostream> 

using namespace std; 

class weight{

    float kg,gram; 

    public:
    weight(float x=0,  float y=0){ kg=x; gram=y;}

  friend bool operator >= (weight ,weight); 
        


    


}; 

   bool operator >= (weight w1 ,weight w2){
        
    float gram1,gram2; 
    gram1=w1.kg*1000+ w1.gram;
    gram2=w2.kg*1000+w2.gram;
    

    if(gram1>=gram2)
    {
        return true; 
    }
    else{
        return false; 
    }



   }
int main()
{
    weight w1(2,500),w2(3,600);
    
    if(w1>=w2)
    {
        cout<<"w1 is greater or equal to w2"<<endl; 
    }
    else{
        cout<<"w2 is greater or equal to w1"<<endl; 
    }
    return 0; 
}