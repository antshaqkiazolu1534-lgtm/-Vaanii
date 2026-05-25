#include <iostream>

void addStudent(vector<Student>& students) {
    Student s;
    cout << "Enter ID: "; cin >> s.id;
    cout << "Enter Name: "; cin >> s.name;
    cout << "Enter Age: "; cin >> s.age;
    cout << "Enter Course: "; cin >> s.course;
    students.push_back(s);
}

void displayStudents(const vector<Student>& students) {
    for (const auto& s : students) {
        cout << s.id << " " << s.name << " " << s.age << " " << s.course << endl;
    }
}

void searchStudent(const vector<Student>& students, int id) {
    for (const auto& s : students) {
        if (s.id == id) {
            cout << "Found: " << s.name << " " << s.age << " " << s.course << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void updateStudent(vector<Student>& students, int id) {
    for (auto& s : students) {
        if (s.id == id) {
            cout << "Enter new Name: "; cin >> s.name;
            cout << "Enter new Age: "; cin >> s.age;
            cout << "Enter new Course: "; cin >> s.course;
            cout << "Updated successfully!" << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void deleteStudent(vector<Student>& students, int id) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->id == id) {
            students.erase(it);
            cout << "Deleted successfully!" << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}
