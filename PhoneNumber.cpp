#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string phone,string oparator)
{
    this->phoneNumber= phone;
    this->oparator= oparator;
}

string PhoneNumber::get_oparator()
{
    return this->oparator;
}

string PhoneNumber::get_phone()
{
    return this->phoneNumber;
}

void PhoneNumber::set_phone(string phone)
{
    this->phoneNumber = phone;
}

void PhoneNumber::set_oparator(string oparator)
{
    this->oparator = oparator;
}
