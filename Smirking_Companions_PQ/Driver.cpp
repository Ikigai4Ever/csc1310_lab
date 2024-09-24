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
#include <iomanip>
using namespace std;

const int SIZE = 10;
void personality_quiz(int*, int, string); //Evan function
float personality_calc(int*,int, float);//Evan function
string personality_assign(float,string);//Evan function
string get_user(); //Zander function
int main()
{
    int question_array[SIZE]  = {1,2,5,4,5,1,5,2,4,5}; //delete array values
    float personality_total=0;
    
    string name, personality; 
    //maybe put a switch case so you have options like taking the quiz or viewing all the data?
    cout << "\n\nHELLO! Welcome to the Smirking Companions persoanlity quiz!" << endl;
    cout << "The purpose of this program is to find out which Smirking Companion YOU are."<< endl; 
    cout << "Lets's begin!" << endl;
    cout << fixed << setprecision(2);
    //name = get_user();
    //personality_quiz(question_array, SIZE, name);
    personality_total = personality_calc(question_array, SIZE, personality_total);
    
    personality = personality_assign(personality_total,personality);
    cout << personality << endl;

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
    cout << "QUESTION 1" << endl;
    cout << name << ", the company you work for has new competition. It seems like they are doing the complete opposite of what your company does, and frankly, are quite evil." << endl;
    cout << "What do you do, " << name << "?" << endl;
    cout << "1) tul eðe fdisuuvp edikþaaðl loofobl úww." << endl;
    cout << "2) Seek the evil doingings this company has done and try to help those affected!" << endl;
    cout << "3) Try to correct the opposing company's doingings, but only becasue my bro is doing it. Its also my job so I kinda have to." << endl;
    cout << "4) Check to see if the opposing company has a better 401(k). " << endl;
    cout << "5) Consult my board of shady and corrupt advisors and then \"get rid\" of the compitetion." << endl;
    cout << "Answer: ";
    //cin  >> q_array[0];
    cout << "QUESTION 2" << endl;
    cout << name << ", It is a tight race in the presidential vote. The two Candiates are President Jimble and Mr. Frog." << endl;
    cout << "Who are you going to vote for, " << name << "?" << endl;
    cout << "1) oþbnore eþrepe syrhood." << endl;
    cout << "2) I would vote for President Jimble based on the adventure I had with him!" << endl;
    cout << "3) I hate poltics, i'm not voting." << endl;
    cout << "4) I would vote for President Jimble becasue of his policies." << endl;
    cout << "5) Why of course I voted for President Jimble! I got a 10,000 bet he will win! If he doesn't win there will be repercussions." << endl;
    cout << "Answer: ";
    //cin  >> q_array[1];
    cout << "QUESTION 3" << endl;
    cout << name << "If you could describe yourself in one word what would it be?" << endl;
    
    cout << "1) ielinutle." << endl;
    cout << "2) Innocent." << endl;
    cout << "3) Chill." << endl;
    cout << "4) Deadpan." << endl;
    cout << "5) Eccentric." << endl;
    cout << "Answer: ";
    //cin  >> q_array[2];

}


float personality_calc(int* q_array,int SIZE, float total) //I dont like this calc i think it is innaccurate and doesnt give an accurate representation
{
  for (int i = 0; i < SIZE; i++)
  {
    total = total + q_array[i];
  }
    cout << total << endl; //
    return total;
}

string personality_assign (float total, string personality)
{
    
    total = (total/10);
    
    cout << total << endl; //
    if (total < 2)
    personality = "Glep";
    else if (total > 2 && total < 3)
    personality = "Pim";
    else if (total > 3 && total < 4)
    personality = "Charlie";
    else if (total > 4 && total < 5)
    personality = "Alan";
    else 
    personality = "The Boss";

    return personality;



}