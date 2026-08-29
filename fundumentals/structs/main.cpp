#include <iostream>
#include <string>

struct Employee
{
    int id;
    std::string name;
    double salary;
};

int main()
{
    Employee employee;

    employee.id = 1;
    employee.name = "Adham";
    employee.salary = 5000;

    std::cout << employee.id << '\n';
    std::cout << employee.name << '\n';
    std::cout << employee.salary << '\n';
}