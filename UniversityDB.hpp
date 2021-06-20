#pragma once
#include <algorithm>
#include <fstream>
#include <vector>
#include "Student.hpp"

class UniversityDB {
public:
    UniversityDB();

    ~UniversityDB();

    std::vector<Student> getDataBase() const { return dataBase_; }

    void addStudent();
    void showUniversityDB();
    void showSingleStudent(std::vector<Student>::iterator);
    void findStudentBySurname();
    void findStudentByPersonalIdentityNumber();

    Student getStudentData(std::string);

    void writeStudentToFile(Student);
    //std::vector<std::string> readDataFromFileToDataBase();
    void readStudentsFromFile();

private:
    std::vector<Student> dataBase_;
};