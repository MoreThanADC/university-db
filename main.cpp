#include <iostream>
#include "Student.hpp"
#include "UniversityDB.hpp"

int main() {
    // Student student1("Adam", "Nowak", "Wroclaw", "12445", "12312421", 'm');
    // std::cout << student1.getName() << '\n';
    // std::cout << student1.getSurname() << '\n';
    // std::cout << student1.getAddress() << '\n';
    // std::cout << student1.getIndexNumber() << '\n';
    // std::cout << student1.getPersonalIdentityNumber() << '\n';
    // std::cout << student1.getGender() << '\n';

    UniversityDB universityDB;
    Student student2;
    universityDB.addStudent();
    universityDB.showUniversityDB();


}