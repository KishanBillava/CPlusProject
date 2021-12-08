#include<iostream>

using namespace std;

//Abstraction class
class AbstractEmployee{
    // any class that uses this class have to use this function 
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    //Encapsulation
    // Name
    void setName(string name ){ // setter
        Name  = name;
    }
    string getName(){ // getter
        return Name;
    }
    // Company
    void setCompany(string company){
        Company = company;  
    }
    string getCompany(){
        return Company;
    }
    // Age
    void setAge(int age){
        if(age>18){
            Age = age;
        }

    }
    int getAge(){
        return Age;
    }

    // Function 
    void IntroduceYourSelf(){
        cout<<"Name - "<< Name <<endl;
        cout<<"Company - "<< Company <<endl;
        cout<<"Age - "<< Age <<endl;
    }
    // Constructors 
    // it does not have return type 
    // it has same name as the class 
    // it needs to be public 
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion(){
        if (Age>30)
            cout<<Name<< " Got promoted "<<endl;
        else
            cout<<Name<< " No Promotion for you "<<endl;
    }

    virtual void work(){
        cout<<Name<<" is checking email, task backlog"<<endl;
    }


};
// Inheritance made public 
class Developer:public Employee {
public:
    string FavProgamLang;

    // Constructors
    Developer(string name, string company, int age, string favprogramlang)
        : Employee(name, company, age)
    {
        FavProgamLang  = favprogramlang;
    };

    void Fixbug(){
        //cout<<getName()<<" fixed bug using "<< FavProgamLang<<endl;
        cout<< Name <<" fixed bug using "<< FavProgamLang<<endl;
    }

    // Polymorphism
    void work(){
        cout<< Name << " is writting "<<FavProgamLang<<" code "<<endl;
    }

};

class Teacher:public Employee {
public:
    string Subject; 

    void prepareLesson(){
        cout<<Name<< " is preparing "<<Subject<<" Lession "<<endl;
    }

    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }

    //Polymorphism
    void work(){
        cout<< Name << " is teaching "<<Subject<<endl;
    }

};


int main()
{
    Employee employee1 = Employee("Kishan", "QuantumVision", 32);
    //employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Jhon", "Amazon", 25);

    //employee1.setAge(15);

    //cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;

    //employee1.AskForPromotion();
    //employee2.AskForPromotion();

    Developer d = Developer("Goku", "YouTube", 25, "C++");

    //d.Fixbug();
    //d.AskForPromotion();

    Teacher t = Teacher("Jack ", "Cool School", 35, "History");
    //t.prepareLesson();
    //t.AskForPromotion();

    // Polymorphism
    //d.work();
    //t.work();

    Employee *e1 = &d;
    Employee *e2 = &t;

    e1->work();
    e2->work(); 
    


};
