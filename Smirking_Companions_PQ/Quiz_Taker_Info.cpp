/* 
 *  NAME: Zander Underwood
 *  DATE:  10/4/24
 *  DESCRIPTION:    Store the people who take the test's information (first and last name, email, phone number) along with what they scored on the personality.
 *  PROGRAM: Quiz_Taker_Info.cpp
 */

#include "Quiz_Taker_Info.h"

//constructor function
Info::Info()
{
    infoArray = new string*[4];

    for (int i = 0; i<4;i++)
    {
        infoArray[i] = new string;
    }


}

//set info function so I can get the info from the user and record it to the text file
void Info::getInfo()
{
    fstream Infofile;

    //Collecting the info from the user
    cin.ignore();
    cout << "\nWhat's your First name?   :";
    getline(cin,*infoArray[0]);
    
    cout << "\nWhat's your Last Name? :";
    getline(cin,*infoArray[1]);

    cout << "\nWhat's your Email? :";
    getline(cin,*infoArray[2]);

    cout << "\nWhat's your Phone number? :";
    getline(cin,*infoArray[3]);
 
    

    //Opens the file so it can print to it
    Infofile.open("Quiz_Taker_Info.txt", fstream::app);

    //Prints to the file
    Infofile << *infoArray[0] <<"#";
    Infofile << *infoArray[1]<<"#";
    Infofile << *infoArray[2]<<"#";
    Infofile << *infoArray[3]<<endl;
    //Closes file
    Infofile.close();

    

    
}

//deconstructor function
Info::~Info()
{

for(int i = 0 ; i < 4; ++i)
    {
        delete infoArray[i];
    }
    delete [] infoArray;

}

string* Info::getname(int index)
{

return infoArray[index];

}
