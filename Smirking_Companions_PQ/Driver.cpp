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
void personality_quiz(int*, int, string); //Evan function
int personality_calc(int*,int, string);//Evan function
string get_user(); //Zander function
int main(){
    int question_array[SIZE];
    int personality;
    string name; 
    //maybe put a switch case so you have options like taking the quiz or viewing all the data?
    cout << "\n\nHELLO! Welcome to the Smirking Companions persoanlity quiz!" << endl;
    cout << "The purpose of this program is to find out which Smirking Companion YOU are."<< endl; 
    cout << "Lets's begin!" << endl;

    name = get_user();
    personality_quiz(question_array, SIZE, name);
    personality = personality_calc(question_array, SIZE, name);


    return 0;
}

string get_user()
{


}

void personality_quiz(int* q_array,int SIZE, string name)
{
    // 1) glep, childlike, speaks jibberish, might just have his answers be jibberish
    // 2) pim, nice, kind
    // 3) charlie, lazy, realistic, uncle
    // 4) alan, deadpan, dry humor, cares about his job
    // 5) the boss, whacky, evil?, REALLY cares about his comapny
    
    cout << "\nLet's start the quiz now " << name << "!" << endl;
    cout << name << ", the company you work for has new competition. It seems like they are doing the complete opposite of what your company does, and frankly, are quite evil." << endl;
    cout << "What do you do, " << name << "?" << endl;
    cout << "1) tul eðe fdisuuvp edikþaaðl loofobl úww." << endl;
    cout << "2) Seek the evil doingings this company has done and try to help those affected!" << endl;
    cout << "3) Try to correct the opposing company's doingings, but only becasue my bro is doing it. Its also my job so I kinda have to." << endl;
    cout << "4) Check to see if the opposing company has a better 401(k). " << endl;
    cout << "5) Consult my board of shady and corrupt advisors and then \"get rid\" of the compitetion." << endl;
    cout << "Answer: ";
    cin  >> q_array[0];


}


int personality_calc(int* q_array,int SIZE, string name)
{



}
