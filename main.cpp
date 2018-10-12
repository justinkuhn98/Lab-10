#include "header.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    StudentNode *temp = nullptr;
    string name;

    readFile(temp);

    //Testing display Function
    display(temp);

    //Testing findSTudent function;
    findStudent(temp, name);

    //Testing remove first node function;
    remove(temp);

    //Testing display new  Student list after node removal
    updatedList(temp);

    //Testing display average GPA
    avgGPA(temp);
}
