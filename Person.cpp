#include "person.h"
#include "PhoneNumber.h"

#include <vector>

using namespace std;

Person::Person()
{
}

Person::Person(string nid)
{
    if(nid.length()==11)
        this->nidNumber= nid;
    else
        this->nidNumber= "NULL";
}

//Instructor comment
//Why is this function named insert_nid_numbers?
//Are you inserting multiple numbers?
//This is misnomer.
void Person::insert_nid_numbers(string nid)
{
     if(nid.length()==11)
        this->nidNumber= nid;
    else
        this->nidNumber= "NULL";
    //Instructor comment: This is interesting.
    //This is one way to do it.
    //How about leaving the string empty?
    //Later on, when you are checking for consistency
    //Just check if the string is empty or not.
    //Checking against string stored NULL would take some time
    //And for no reason.
}

string Person::get_nid_numbers()
{
    return this->nidNumber;
}


void Person::print_informations()
{
    cout << "NID Number: " << this->nidNumber << endl; //using string.c_str()
}
