#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
public:
    Person();
    Person(const std::string& pname);
    void setName(const std::string& pname);
    std::string getName() const;
    virtual std::string toString() const;
private:
    std::string name;
};

#endif
