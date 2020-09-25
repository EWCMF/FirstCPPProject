#include "person.h"

Person::Person (std::string name, int age, std::string gender) {
    this->name = name;
    this->age = age;
    this->gender = gender;
}

std::string Person::getName() {
    return Person::name;
}

int Person::getAge() {
    return Person::age;
}

std::string Person::getGender() {
    return Person::gender;
}