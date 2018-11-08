#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <vector>
#include "PhoneNumber.h"

using namespace std;

class Person{

private:
    //Instructor comment
    //Why does your person data have only NID?
    //Where is the name, fathers name, mothers name
    //permanent address, present address
    //date of birth, eye color
    //and all other person attributes?
    //When registering for a phone a person has to
    //put all his personal information to fill up the form.
    //This is extremely basic work.
    //This needs to be modified.
    
    string nidNumber;
public:
    Person();
    Person(string nid);
    string get_nid_numbers();
    void insert_nid_numbers(string nid);
    void print_informations();
};


#endif // PERSON_H_INCLUDED
