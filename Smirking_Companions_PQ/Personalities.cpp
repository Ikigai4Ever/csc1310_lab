/* 
 *  NAME: Christopher Bowman
 *  DATE: 10/4/2024
 *  DESCRIPTION: stores number version of personality in txt file, and calculates percent of users who got personality
 *  PROGRAM: Personalities.cpp
 */

#include "Personalities.h"

/*
 *      FUNCTION: storePersonalities()
 *      DESCRIPTION: stores number value of personalities in txt file
 */

void P_Percent::storePersonality(int personality_num)
{
    
    
    outfile.open("Personalities.txt", ofstream::app);
    outfile << personality_num; 
    outfile <<"#";
    outfile.close();


}

/*
 *      FUNCTION: getPercent()
 *      DESCRIPTION: calcs what perecent of users got your personality
 */

float P_Percent::getPercent(int personality_num)
{
    
    int total=0; //total num of entries in txt file
    float part=0, fltotal = 0; //have to have float total to do division for percent
    int i =0; //index
    int* total_personality_array; //array of all users' personality
    string temp; //temp to do stoi

    infile.open("Personalities.txt"); //opens txt
    while(getline(infile, temp, '#')) //reads and gets total num of personality
    {
        
        total++;

    }
    infile.close(); //closes txt to reset

    total_personality_array = new int[total]; //array of num personality size


    infile.open("Personalities.txt"); //open again
    while(getline(infile, temp, '#'))
    {
    total_personality_array[i] = stoi(temp); //reads and stores entry
    i++; //increment index
    
    }

    for (int x = 0;x < total;x++)
    {
        if (total_personality_array[x] == personality_num) 
        part++; //increments part based on how many of the users' personalities is in the array


    }
    infile.close(); //close again

    
    fltotal = total; //have to use a float for division
    
    delete [] total_personality_array; //release dynamic
    
    return (part/total) * 100; //returns percent

}