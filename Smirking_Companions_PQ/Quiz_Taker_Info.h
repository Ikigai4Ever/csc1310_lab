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
        string** infoArray;
        
        
        void makeInfo(); //constructer
        void getInfo(); //gets information on quiztaker and stores it in txt file
        string* getname(int); //gets first name

        //constructor
        Info();

        //deconstructor
        ~Info();

};

#endif