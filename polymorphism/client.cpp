#include <iostream>
#include <string>
using namespace std;
#include "student.h"

int main()
{
    Student sam{"Samuel", 201795};
    Person pam{"Pam B."};

    cout << "sam says->" << sam.toString() << endl;
    cout << "pam says->" << pam.toString() << endl;
}
