#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string nam, int sal, int password)
    {
        this->name = nam;
        this->salary = sal;
        this->pass = password;
    }

    void Printing()
    {
        cout <<endl<< this->name << " is the name and the salary " << this->salary;
    }

    void passPrint()
    {
        cout << "the password is " << this->pass;
    }

private:
    int pass;
};

int main()
{
    Employee EM("king ", 212121,7878);
    // EM.name="Ashutosh";
    // EM.salary=9999999;
    // cout<<"the name is "<<EM.name<<" and the salary is "<<EM.salary<<endl;
    EM.Printing();
    EM.passPrint();
    return 0;
}
