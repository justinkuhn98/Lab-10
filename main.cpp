/**********************************************************
 * AUTHOR       : Justin Kuhn, Vincent Li, Brad Kim
 * Lab       #10: Student List
 * CLASS        : CS3A
 * SECTION      : MW: 1:00p - 2:25p, TR: 1:00p - 3:05p
 * Due Date     : 10/15/18
*********************************************************/
#include "header.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    StudentNode *head = NULL;
    string name;


    name = "Anna White";

    readFile(head);

    //Testing display Function
    display(head);

    //Testing findSTudent function;
    findStudent(head, name);

    //Testing remove first node function;
    remove(head);

    //Testing display new  Student list after node removal
    cout<<"\nUpdated Student List:\n";
    display(head);


    //Testing display average GPA
    avgGPA(head);
}
