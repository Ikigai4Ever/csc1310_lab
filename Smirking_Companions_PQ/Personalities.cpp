/* 
 *  NAME: Christopher Bowman
 *  DATE: 10/4/2024
 *  DESCRIPTION: stores number version of personality in txt file, and calculates percent of users who got personality
 *  PROGRAM: Personalities.cpp
 */

#include "Personalities.h"


void P_Percent::storePersonality(int personality_num)
{
    
    
    outfile.open("Personalities.txt", ofstream::app);
    outfile << personality_num; 
    outfile <<"#";
    outfile.close();


}

float P_Percent::getPercent(int personality_num)
{
    
    int total=0;
    float part=0, fltotal = 0;
    int i =0;
    int* total_personality_array;
    string temp;

    infile.open("Personalities.txt");
    while(getline(infile, temp, '#'))
    {
        
        total++;

    }
    infile.close();

    total_personality_array = new int[total];


    infile.open("Personalities.txt");
    while(getline(infile, temp, '#'))
    {
    total_personality_array[i] = stoi(temp);
    i++;
    
    }

    for (int x = 0;x < total;x++)
    {
        if (total_personality_array[x] == personality_num)
        part++;


    }
    infile.close();

    
    fltotal = total;
    
    delete [] total_personality_array;
    
    return (part/total) * 100;

}