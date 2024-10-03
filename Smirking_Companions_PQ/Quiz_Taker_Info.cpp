/* 
 *  NAME: Zander Underwood
 *  DATE:  10/2/24
 *  DESCRIPTION:    Store the people who take the test's information (first and last name, email, phone number) along with what they scored on the personality.
 *  PROGRAM: Quiz_Taker_Info.cpp
 */

#include "Quiz_Taker_Info.h"

//set info function so I can get the info from the user and record it to the text file
string Info::getInfo()
{
    fstream Infofile;
    Info* person;
    string* infoArray[] = {&firstName,&lastName,&email,&phoneNum};
   

    //Collecting the info from the user
    cout << "\nWhat's your First name?   :";
    getline(cin,firstName);
    infoArray[0] = &firstName;
    cout << "\nWhat's your Last Name? :";
    getline(cin,lastName);
    infoArray[1] = &lastName;
    cout << "\nWhat's your Email? :";
    getline(cin,email);
    infoArray[2] = &email;
    cout << "\nWhat's your Phone number? :";
    getline(cin,phoneNum);
    infoArray[3] = &phoneNum;

    person->firstName = firstName;
    person->lastName = lastName;
    person->email = email;
    person->phoneNum = phoneNum;


    Infofile.open("Quiz_Taker_Info.txt", fstream::app);
    if(Infofile.is_open())                                  //Making sure the text file is opening
    {
        Infofile << firstName <<"#";
        Infofile << lastName<<"#";
        Infofile << email<<"#";
        Infofile << phoneNum<<endl;
    }
    else
    {
        cout << "Couldn't find the text file." << endl;
    }

    return person->firstName;
}
