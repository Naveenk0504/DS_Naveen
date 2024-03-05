#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    char grade;

public:
    // Getter for name
    std::string getName() const {
        return name;
    }

    // Setter for name
    void setName(const std::string& newName) {
        name = newName;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    // Setter for age
    void setAge(int newAge) {
        if (newAge >= 0 && newAge <= 120)
            age = newAge;
        else
            std::cerr << "Invalid age!" << std::endl;
    }

    // Getter for grade
    char getGrade() const {
        return grade;
    }

    // Setter for grade
    void setGrade(char newGrade) {
        if (newGrade >= 'A' && newGrade <= 'F')
            grade = newGrade;
        else
            std::cerr << "Invalid grade!" << std::endl;
    }
};

int main() {
    Student student;

    // Setting values using setters
    student.setName("Alice");
    student.setAge(18);
    student.setGrade('A');

    // Getting values using getters
    std::cout << "Name: " << student.getName() << std::endl;
    std::cout << "Age: " << student.getAge() << std::endl;
    std::cout << "Grade: " << student.getGrade() << std::endl;

    // Attempting to set an invalid age and grade
    student.setAge(150);
    student.setGrade('Z');

    return 0;
}
