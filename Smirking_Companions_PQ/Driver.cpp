/* 
 *  NAME: Christopher Bowman
 *  DATE: 9/18/2024
 *  DESCRIPTION: Calls get_info for Quiz_Taker_Info, Sends get_info to Quiz_Taker_Info, Calls personality_quiz, 
 *  Sends indvidual answers to Answers_class, Sends Personality to Quiz_taker_info 
 *  PROGRAM: Driver.cpp
 */

#include "Personalities.h"
#include "Quiz_Answers.h"
#include "Quiz_Taker_Info.h"
#include <iostream>
using namespace std;

const int SIZE = 10;
void personality_quiz(int*, int); //Evan function
int personality_calc(int*,int);//Evan function
void get_user(); //Zander function
int main(){
    int question_array[SIZE];
    int personality;

    //maybe put a switch case so you have options like taking the quiz or viewing all the data?
    cout << "\n\nHELLO! Welcome to the Smirking Companions persoanlity quiz!" << endl;
    cout << "The purpose of this program is to find out which Smirking Companion YOU are."<< endl; 
    cout << "Lets's begin!" << endl;

    get_user();
    personality_quiz(question_array, SIZE);
    personality = personality_calc(question_array, SIZE);


    return 0;
}

void get_user()
{


}

void personality_quiz(int* q_array,int SIZE)
{



}

int personality_calc(int* q_array,int SIZE)
{



}
