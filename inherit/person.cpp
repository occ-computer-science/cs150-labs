#include <string>
using namespace std;
#include "person.h"

void Person::setName(const string& pname) { name = pname; }
string Person::getName() const { return name; }
