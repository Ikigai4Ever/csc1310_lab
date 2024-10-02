/* 
 *  NAME: Zander Underwood
 *  DATE:  10/2/24
 *  DESCRIPTION:    Store the people who take the test's information (first and last name, email, phone number) along with what they scored on the personality.
 *  PROGRAM: Quiz_Taker_Info.cpp
 */

#include "Quiz_Taker_Info.h"

//set info function so I can get the info from the user and record it to the text file
void Info::setinfo(string firstName,string lastName,string email,string phoneNum)
{
    fstream Infofile;

    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->phoneNum = phoneNum;

    Infofile.open("Quiz_Taker_Info.txt", fstream::app);
    if(Infofile.is_open())                                  //Making sure the text file is opening
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