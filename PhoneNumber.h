#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include <iostream>

using namespace std;

class PhoneNumber
{
    //Instructor comment:
    //Good thinking. This is exactly what I was proposing.
    //One thing. In this object, you should be able to set the phone
    //number only once, at the time of object construction.
    //If you give a public function to modify
    //both phone and operator, this record can be modified
    //both in terms of phone and operator.
    //We want this PhoneNumber object tied to a "SPECIFIC"
    //phone number, but the operator field can be changed.
    
private:
    string phoneNumber;
    string oparator;
public:
    PhoneNumber();
    PhoneNumber(string phone,string oparator);
    void set_phone(string phone);
    void set_oparator(string oparator);
    string get_oparator();
    string get_phone();
};


#endif // PHONENUMBER_H_INCLUDED
