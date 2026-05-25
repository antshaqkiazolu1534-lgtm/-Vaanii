#include <iostream>

int main() {
    vector<Student> students;
    int choice, id;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(students); break;
            case 2: displayStudents(students); break;
            case 3: cout << "Enter ID: "; cin >> id; searchStudent(students, id); break;
            case 4: cout << "Enter ID: "; cin >> id; updateStudent(students, id); break;
            case 5: cout << "Enter ID: "; cin >> id; deleteStudent(students, id); break;
            case 6: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while(choice != 6);

    return 0;
}
