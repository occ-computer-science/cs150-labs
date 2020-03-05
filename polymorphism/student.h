#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "person.h"

class Student : public Person
{
public:
    Student(const std::string sname, long sid);
    long getID() const;
    std::string toString() const;
private:
    long studentID;
};

#endif
