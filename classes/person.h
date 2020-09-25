#include <string>

class Person {
        std::string name;
        int age;
        std::string gender;
    public:
        Person(std::string name, int age, std::string gender); 
        std::string getName();
        int getAge();
        std::string getGender();
};