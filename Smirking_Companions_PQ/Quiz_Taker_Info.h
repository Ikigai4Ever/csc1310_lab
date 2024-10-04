/* 
 *  NAME: Zander Underwood
 *  DATE: 10/2/24
 *  DESCRIPTION: Header File for the Quiz_Taker_Info.cpp file
 *  PROGRAM: Quiz_Taker_Info.cpp
 */

#ifndef QUIZ_TAKER_INFO_H
#define QUIZ_TAKER_INFO_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//class decleration for quiz taker's info
class Info
{
    public:
        string firstName;
        string lastName;
        string email;
        string phoneNum;

        string* infoArray[4];
        string** dblpntr = infoArray;

        //Get info
        string getInfo();

};

#endif