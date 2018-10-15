#ifndef HEADER_H
#define HEADER_H

#include <iostream>

using namespace std;

struct StudentNode
{
    string name;
    int age;
    string major;
    double gpa;
    StudentNode *next;
};

void readFile(StudentNode *&templist);
void display(StudentNode *templist);
void findStudent(StudentNode *templist, string name);
void remove(StudentNode *&templist);
void avgGPA(StudentNode *templist);


#endif // HEADER_H
