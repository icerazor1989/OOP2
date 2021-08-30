#include <iostream>
#include <string>
using namespace std;

class Fruit {
    
    protected:
    
    string m_name;
    string m_color;
    
    public:
    
    Fruit ()
    {
       m_name = "fruit" ;
       m_color = "red";
    }
    
};

class Apple : public Fruit {
    protected:
    string m_name2;
    
    public:
    
     Apple (string red) {
        m_color="red" ;
        m_name="apple" ;
        
    }
    Apple ()  {
       
        m_name2="apple" ;
    }
    
    void setApple()
    {
        
    }
    
    string getName() const{
      return m_name;  
    }
    
    string getColor() const{
        
        return m_color;
    }
    
};

class Banana : public Fruit {
    
    public:
    
    Banana()
    {m_name =  "banana";
     m_color = "yellow";
    }
    
    void setBanana (){
       
    }
    
    string getName() const{
      return m_name;  
    }
    
    string getColor() const{
        
        return m_color;
    }
    
};


class GrannySmith : public Apple {
    
    public:
    
    GrannySmith (){
       m_name =  "Granny Smith ";
       m_name2="apple";
       m_color = "green";
        
    }
    
    void setGrannySmith (){
     
    }
    
    string getName() const{
      return m_name+m_name2;
      
    }
    
    string getColor() const{
        
        return m_color;
    }
    
    
};


int main()
{
    Apple a ("red");
    Banana b;
    GrannySmith c;

    cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}





