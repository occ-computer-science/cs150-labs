#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
public:
    void setName(const std::string& pname);
    std::string getName() const;
private:
    std::string name;
};

#endif
