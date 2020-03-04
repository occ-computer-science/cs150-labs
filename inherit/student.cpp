 #include <string>
 using namespace std;
 #include "student.h"

Student::Student(const string sname, long sid)
{
  setName(sname);
  studentID = sid;
}
long Student::getID() const { return studentID; }
