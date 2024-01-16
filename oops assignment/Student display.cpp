#include <iostream>
#include <string>
#include <vector>

class Student {
public:
    int student_id;
    std::string name;
    int age;
    std::vector<int> marks;

    // Constructor
    Student(int id, const std::string& n, int a) {
        student_id = id;
        name = n;
        age = a;
    }

    // Function to add marks for a student
    void addMarks(int mark) {
        marks.push_back(mark);
    }

    // Function to display student information
    void displayInfo() {
        std::cout << "Student ID: " << student_id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;

        if (!marks.empty()) {
            std::cout << "Marks: ";
            for (int mark : marks) {
                std::cout << mark << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "No marks available for this student." << std::endl;
        }
    }
};

int main() {
    std::vector<Student> students; // A vector to store student objects

    // Adding a new student
    Student student1(1, "John Doe", 18);
    student1.addMarks(90);
    student1.addMarks(85);
    students.push_back(student1);

    // Displaying student information
    std::cout << "Student Information:" << std::endl;
    for (const Student& student : students) {
        student.displayInfo();
    }

    return 0;
}

