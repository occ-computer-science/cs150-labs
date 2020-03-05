 #include <string>
 using namespace std;
 #include "student.h"

Student::Student(const string sname, long sid)
    : Person{sname}, studentID{sid}
{}

long Student::getID() const { return studentID; }

string Student::toString() const
{
    return Person::toString() + ", ID: "
        + to_string(studentID);
}
