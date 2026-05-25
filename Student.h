#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

void addStudent(vector<Student>& students);
void displayStudents(const vector<Student>& students);
void searchStudent(const vector<Student>& students, int id);
void updateStudent(vector<Student>& students, int id);
void deleteStudent(vector<Student>& students, int id);

#endif
