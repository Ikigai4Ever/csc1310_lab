/* 
 *  NAME: Zander Underwood
 *  DATE:  9/18/24
 *  DESCRIPTION:    Store the people who take the test's information (first and last name, email, phone number) along with what they scored on the personality.
 *  PROGRAM: Quiz_Taker_Info.cpp
 */

#include <iostream>
#include <string>
using namespace std;

#include "Quiz_Taker_Info.h"

//class decleration for quiz taker's info
class Info
{
    private:
        string firstName;
        string lastName;
        string email;
        string phoneNum;
    public:
        void setinfo(string,string,string,string);

};

void Info::setinfo(string firstName,string lastName,string email,string phoneNum)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->phoneNum = phoneNum;

}