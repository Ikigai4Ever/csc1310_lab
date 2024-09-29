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
  int choice=0;
    do{

    int question_array[SIZE]  = {1,1,5,1,5,1,5,1,1,1}; //delete array values
    float personality_total=0;
    string name, personality;



    cout << "\n\nHELLO! Welcome to the Smirking Companions persoanlity quiz!" << endl;
    cout << "1) Begin quiz" << endl << "2) End program" << endl;
    cin >> choice;
    if (choice == 2)
    break;
    cout << "The purpose of this program is to find out which Smirking Companion YOU are."<< endl; 
    cout << "Lets's begin!" << endl;
    cout << fixed << setprecision(2);
    //name = get_user();
    //personality_quiz(question_array, SIZE, name);
    personality_total = personality_calc(question_array, SIZE, personality_total);
    
    personality = personality_assign(personality_total,personality);
    cout << personality << endl;

    }while (choice != 2);

    cout << "Goodbye!" << endl;
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
    cout << "3) I'd just kinda sit back and watch what happens, maybe be emotional support." << endl;
    cout << "4) Check to see if the opposing company has a better 401(k). " << endl;
    cout << "5) Consult my board of shady and corrupt advisors and then \"get rid\" of the compitetion." << endl;
    cout << "Answer: ";
    //cin  >> q_array[0];

    cout << "QUESTION 2" << endl;
    cout << name << ",It is a tight race in the presidential vote. The two Candiates are President Jimble and Mr. Frog." << endl;
    cout << "Who are you going to vote for, " << name << "?" << endl;
    cout << "1) oþbnore eþrepe syrhood." << endl;
    cout << "2) I would vote for President Jimble based on the adventure I had with him!" << endl;
    cout << "3) I hate poltics and the system, i'm not voting." << endl;
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

    cout << "QUESTION 4" << endl;
    cout << name << ", if you could describe your physcial appearance in an Adult Swim animated TV show created by Zach Hadel and Michael Cusack, what would it look like?" << endl;
    cout << "1) A small green creature with a purple hat that speaks a language only understandable by characters in the show." << endl;
    cout << "2) A short purple humanoid with an exposed nerve ending." << endl;
    cout << "3) A rotund yellow humanoid with a comically large nose." << endl;
    cout << "4) A tall, long limbed red creature with a tie." << endl;
    cout << "5) A 60-70 year old man with a horseshoe baldspot that is covered with a mismatching toupee." << endl;
    cout << "Answer: ";
    //cin  >> q_array[3];

    cout << "QUESTION 5" << endl;
    cout << name << ", out of the choices below which food would you eat?" << endl; 
    cout << "1) Coffee and french fries." << endl;
    cout << "2) Worms." << endl;
    cout << "3) The Century Egg from Salty's." << endl;
    cout << "4) An Isometric cut of Cheddar Cheese." << endl;
    cout << "5) A warm plate of Spaghetti." << endl;
    cout << "Answer: ";
    //cin  >> q_array[4];

    cout << "QUESTION 6" << endl;
    cout << name << ", out of the choices below which activity would you wanna do?" << endl; 
    cout << "1) Replacing the famous star Mr Frog on the Mr Frog Show." << endl;
    cout << "2) Fetching Firewood from across the road for a Halloween party." << endl;
    cout << "3) Being accosted by James to make him smile." << endl;
    cout << "4) Finding your missing paper clips in a long winded attempt by your landlord to get you to hang out with him." << endl;
    cout << "5) Visit Spamtopia to buy a Magical Red Jewel for your son Tyler." << endl;
    cout << "Answer: ";
    //cin  >> q_array[5];

    cout << "QUESTION 7" << endl;
    cout << name << ", which Smiling Friend do you think you are?" << endl; 
    cout << "1) Glep." << endl;
    cout << "2) Pim." << endl;
    cout << "3) Charlie." << endl;
    cout << "4) Alan." << endl;
    cout << "5) The Boss" << endl;
    cout << "Answer: ";
    //cin  >> q_array[6];

    cout << "QUESTION 8" << endl;
    cout << name << ", what would you do if a snowman you created came to life?" << endl; 
    cout << "1) olhear esûdait hþinfagiv dtyaiwƶ aseset lewyæ." << endl;
    cout << "2) Keep the Snowman alive and show him the meaning of life!" << endl;
    cout << "3) Not my responsibility, I have to go help my uncle with something." << endl;
    cout << "4) I dont really care about the snowman, I have to go to my Doctor Monsters appointment." << endl;
    cout << "5) Destroy the snowman because of its newfound consciousness." << endl;
    cout << "Answer: ";
    //cin  >> q_array[7];

    cout << "QUESTION 9" << endl;
    cout << name << ", who killed Simon S. Salty?" << endl; 
    cout << "1) Mr. Ketchup" << endl;
    cout << "2) The Fun Twins." << endl;
    cout << "3) Mrs. Mustard." << endl;
    cout << "4) Salt and Pepper." << endl;
    cout << "5) Crazy Cup." << endl;
    cout << "Answer: ";
    //cin  >> q_array[8];

    cout << "QUESTION 10" << endl;
    cout << name << ", what would dress up as for Halloween?" << endl; 
    cout << "1) Matching costumes as Ronald and Nancy Reagan." << endl;
    cout << "2) A Cowboy." << endl;
    cout << "3) I'm not dressing up becasue I am scared of what will be considered offensive or what could become offensive later on." << endl;
    cout << "4) Joaquin Phoenix's Joker." << endl;
    cout << "5) Charlie Brown." << endl;
    cout << "Answer: ";
    //cin  >> q_array[9]; 


 
}


float personality_calc(int* q_array,int SIZE, float total) //I dont like this calc i think it is innaccurate and doesnt give an accurate representation
{
  // double array for the win
  for (int i = 0; i < SIZE; i++)
  {
    total = total + q_array[i];
  }
    cout << total << endl; //
    return total;

    // either 2 are equal, 3 are equal, or 5 are equal
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