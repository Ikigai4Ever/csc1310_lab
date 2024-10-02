/* 
 *  NAME: Zander Underwood
 *  DATE:  9/27/24
 *  DESCRIPTION:    Store the people who take the test's information (first and last name, email, phone number) along with what they scored on the personality.
 *  PROGRAM: Quiz_Taker_Info.cpp
 */

#include <iostream>
#include <string>
#include <fstream>
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
    fstream Infofile;

    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->phoneNum = phoneNum;

    Infofile.open("Quiz_Taker_Info.txt", fstream::app);
    if(Infofile.is_open())
    {
        Infofile <<this->firstName <<"#";
        Infofile << this->lastName<<"#";
        Infofile << this->email<<"#";
        Infofile << this->phoneNum<<endl;
    }
    else
    {
        cout << "Couldn't find the text file." << endl;
    }
}