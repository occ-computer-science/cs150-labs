#include <iostream>
#include <string>
using namespace std;
#include "student.h"

int main()
{
    Student steve("Steve", 1007);
    steve.setName("Stephen");
    cout << "getName()->" << steve.getName() << endl;
    cout << "getID()->" << steve.getID() << endl;
}
