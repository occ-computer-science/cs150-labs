#include <string>
using namespace std;
#include "person.h"

Person::Person() : Person("unknown") {}
Person::Person(const string& pname) : name{pname} {}

void Person::setName(const string& pname) { name = pname; }
string Person::getName() const { return name; }

string Person::toString() const
{
    return "Name: " + name;
}
