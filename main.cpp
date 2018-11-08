#include <iostream>
#include "Customer.h"
#include <vector>

using namespace std;

//Instructor comment:
//Is there any reason to make this vector global?
//The vector has no work in main.
//Why not localize it to runner_function_vector()?
vector<Customer> vectorDB;

void runner_function_vector();

int main()
{

    runner_function_vector();

    return 0;
}

void runner_function_vector(){

    //Instructor comment:
    //Good work here. This is what I was suggesting.
    vectorDB.push_back(Customer("19962878010","01760603847","GrameenPhone"));
    vectorDB.push_back(Customer("19862818317","01836663565","Robi"));

    vectorDB[0].insert_phone_oparator("01986064381","Banglalink");

    vectorDB.push_back(Customer("19956818369","01833975394","Robi"));

    vectorDB.push_back(Customer("19856018360","01842976531","Robi"));
    vectorDB.push_back(Customer("19662890372","01766153598","Grameenphone"));
    vectorDB.push_back(Customer("19765724069","01910358428","Banglalink"));
    vectorDB.push_back(Customer("19908811370","01713607417","Grameenphone"));
    vectorDB.push_back(Customer("19819300168","01630440096","Airtel"));

    vectorDB[0].delete_phone("01986064381");
    vectorDB[0].delete_phone("01760603847");

    if(vectorDB[0].get_phone_size()==0){
        vectorDB.erase(vectorDB.begin()+0);
    }

    for(Customer c : vectorDB){
        c.print_informations();
        c.print_customer_info();
    }


}
