#include "Menu.hpp"

void printMenu() {
    std::cout << "Main menu\n";
    std::cout << "1. Add student\n";
    std::cout << "2. Display list of students\n";
    std::cout << "3. Search by surname\n";
    std::cout << "4. Search by personal identity number\n";
    std::cout << "5. Sort by personal identity number\n";
    std::cout << "6. Sort by surname\n";
    std::cout << "7. Delete by index number\n";
    std::cout << "8. Exit\n";
    std::cout << "Choose an option: ";
}

void selectOption(UniversityDB& universityDB) {
    printMenu();
    auto select = std::getchar();
    std::cin.clear();
    std::cin.ignore(100, '\n');
    switch (select) {
    case '1':
        universityDB.addStudent();
        break;
    case '2':
        universityDB.showUniversityDB();
        break;
    case '3':
        universityDB.findStudentBySurname();
        break;
    case '4':
        universityDB.findStudentByPersonalIdentityNumber();
        break;
    case '5':
        universityDB.sortStudentsByPersonalIdentityNumber();
        break;
    case '6':
        universityDB.sortStudentsBySurname();
        break;
    case '7':
        universityDB.removeStudentByIndexNumber();
        break;
    case '8':
        exit(0);
    }
}
