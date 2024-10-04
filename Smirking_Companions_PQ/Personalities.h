/* 
 *  NAME: Christopher Bowman
 *  DATE: 9/18/2024
 *  DESCRIPTION: header for Personalities.cpp
 *  PROGRAM: Personalities.h
 */

#ifndef PERSONALITIES_H
#define PERSONALITIES_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class P_Percent
{
    public:
    fstream infile; //reader
    ofstream outfile; //writer
    float getPercent(int); //calculates percent of users with your personality
    void storePersonality(int); //stores your persoanlity in txt file


};


#endif