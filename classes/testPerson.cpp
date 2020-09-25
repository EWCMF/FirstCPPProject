#include<iostream>
#include "person.h"

int main() 
{
    Person person("Hans", 33, "Male");

    std::cout << "Name: " << person.getName() << "\n";
    std::cout << "Age: " << person.getAge() << "\n";
    std::cout << "Gender: " << person.getGender() << "\n\n";

    Person* pointerPerson;
    pointerPerson = new Person("Gunnar", 56, "Male");

    std::cout << "Name: " << pointerPerson->getName() << "\n";
    std::cout << "Age: " << pointerPerson->getAge() << "\n";
    std::cout << "Gender: " << pointerPerson->getGender() << "\n";

    delete pointerPerson;

    return 0;
}