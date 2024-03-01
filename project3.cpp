#include <iostream>
#include <string>

using namespace std;

class Employee{
    private:
    
    string name = "saq";
    int id = 052005;
    int salary = 999999;

    public:

    string getName() {
        string n = name;
        return n;
    }

    int getId() {
        int ei = id;
        return ei;
    }

    int getSalary() {
        int s = salary;
        return s;
    }    

};

int main() {

    Employee e;

    cout << "NAME: " << e.getName() << endl;
    cout << "ID: " << e.getId() << endl;
    cout << "SALARY: " << e.getSalary() << endl;
}