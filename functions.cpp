#include "header.h"
#include <string>
#include <fstream>
#include <iomanip>



void readFile(StudentNode *&templist)
{

    bool first;

    first = true;

    StudentNode *head;
    StudentNode *temp;

    ifstream inFile;

    inFile.open("inFile.txt");


    if(inFile.fail())
    {
        cout<< "file did not open"<<endl;
    }


    while(!inFile.eof())
    {

        head = new StudentNode;

        getline(inFile, head->name);
        inFile >> head->age;
        inFile.ignore(1000,'\n');
        getline(inFile, head->major);
        inFile >> head->gpa;
        inFile.ignore(1000,'\n');
        inFile.ignore(1000,'\n');

        if(first)
        {
            head->next = NULL;
            first = false;
        }
        else
        {
            head->next = temp;
        }

        temp = head;

    }

    templist = head;

}



void findStudent (StudentNode *templist, string name)
{
    bool found;

    found = false;

    while(templist != NULL)
    {
        if(templist->name == name)
        {
            cout<<"\nStudent Found:\n";
            cout<<setw(15)<<left<<templist->name;
            cout<<setw(8)<<left<<templist->age;
            cout<<setw(15)<<left<<templist->major;
            cout<<templist->gpa<<endl;
            found = true;
        }
       templist = templist->next;
    }

    if(found != true)
        cout<<"Student not Found.\n";


}

void display(StudentNode *templist)
{
    cout<<setw(15)<<left<<"Name";
    cout<<setw(8)<<left<<"Age";
    cout<<setw(15)<<left<<"Major";
    cout<<"GPA"<<endl;

    while(templist != NULL)
    {
        cout<<setw(15)<<left<<templist->name;
        cout<<setw(8)<<left<<templist->age;
        cout<<setw(15)<<left<<templist->major;
        cout<<templist->gpa<<endl;
        templist = templist->next;
    }

}
\
void remove(StudentNode *&templist)
{
    StudentNode *temp;

    temp = templist;
    templist = templist->next;

    cout<<"\nFront Node Deleted:\n";
    cout<<setw(15)<<left<<temp->name;
    cout<<setw(8)<<left<<temp->age;
    cout<<setw(15)<<left<<temp->major;
    cout<<temp->gpa<<endl;
    delete temp;
}

void updatedList(StudentNode *templist)
{
    cout<<"\nUpdated Student List:\n";
    cout<<setw(15)<<left<<"Name";
    cout<<setw(8)<<left<<"Age";
    cout<<setw(15)<<left<<"Major";
    cout<<"GPA"<<endl;

    while(templist->next != NULL)
    {
        cout<<setw(15)<<left<<templist->name;
        cout<<setw(8)<<left<<templist->age;
        cout<<setw(15)<<left<<templist->major;
        cout<<templist->gpa<<endl;
        templist = templist->next;
    }
}

void avgGPA(StudentNode *templist)
{
    double avg;
    int count;

    avg = 0;
    count = 0;

    while(templist->next != NULL)
    {
       avg+=templist->gpa;
       count++;
       templist = templist->next;
    }
    avg/=count;

    cout<<"\nGPA: "<<avg<<endl;
}


