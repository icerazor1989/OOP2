#include <iostream>
#include <string>
using namespace std;

class Human {
protected:

    string m_name;
    int m_age;
    string m_gender;
    int m_weight;

public:

    Human()
    {
        m_name = "rodion";
        m_age = 32;
        m_gender = "male";
        m_weight = 60;

    }

};


class Student : public Human {

    int m_year;
    int  k;

public:

    Student() {

        m_year = 2006;
        k = 0;
    }

    void setStudent(string n, int a, string m, int w, int y) {
        m_name = n;
        m_age = a;
        m_gender = m;
        m_weight = w;
        m_year = y;

    }
    
    ~Student(){
        cout<< "Desk";
    }
    
    void setYear(int n){
       m_year = m_year + n;
       cout<< m_year;
      
        
    }



    void setcounter() {
        k++;
    }

    int printcounter() const
    {
        cout << "\n" << " Number of students - " << k << endl;
        
    }




    void print() const {

        cout << "Student :" << " " << m_name << " " << m_age << " " << m_gender << " " << m_weight
            << " " << m_year << " - ";
    }


};


int main() {
    string name ;
    cout << "Enter name of student (Igor,Antonina or Rodion) : " << endl;
    cin >> name;
  
    
    

    Student student;    
    
    student.setStudent("Igor", 20, "male", 70, 2007);
    student.setcounter();

    student.setStudent("Antonina", 23, "female", 55, 2007);    
    student.setcounter();

    student.setStudent("Rodion", 32, "male", 60, 2007);    
    student.setcounter();
    

    if (name == "Igor")
    {
        student.setStudent("Igor", 20, "male", 70, 2007);
        student.print();
        student.setYear(5);
    }
    else if (name == "Antonina") {
        student.setStudent("Antonina", 23, "female", 55, 2007);
        student.print();
        student.setYear(5);
    }
    
    else {
        
        student.setStudent("Rodion", 32, "male", 60, 2007); 
        student.print();
        student.setYear(5);
    }
    
student.printcounter();
    return 0;
}

    






