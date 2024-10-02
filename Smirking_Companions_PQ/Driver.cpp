/* 
 *  NAME: Christopher Bowman
 *  DATE: 9/18/2024
 *  DESCRIPTION: Calls get_info for Quiz_Taker_Info, Sends get_info to Quiz_Taker_Info, Calls personality_quiz, 
 *  Sends indvidual answers to Answers_class, Sends Personality to Quiz_taker_info 
 *  PROGRAM: Driver.cpp
 */

//#include "Personalities.h"
//#include "Quiz_Answers.h"
//#include "Quiz_Taker_Info.h"
#include <iostream>
#include <iomanip>
#include<time.h>
using namespace std;


/************************  GLOBAL VARIABLES **************************/
const int SIZE = 10;

/***********************  FUNCTION PROTOTYPES ************************/
void personality_quiz(int*, int, string); //Evan function
int personality_calc(int*,int, int*);  //Evan function
string personality_assign(int);  //Evan function
string get_user();  //Zander function
int main()
{
  srand (time(0));
  int choice=0;

    do{

    int question_array[SIZE] = {1,2,2,3,3,3,3,5,1,1}; //delete array values
    int personality_array[5]= {0,0,0,0,0};
    int personality_num = 0;
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
    personality_num = personality_calc(question_array, SIZE, personality_array);
    
    personality = personality_assign(personality_num);
    cout << personality << endl;

    }while (choice != 2);

    cout << "Goodbye!" << endl;
    return 0;
}

      
    /**************************\
    |        FUNCTIONS         |
    \**************************/

/*
 *      FUNCTION: get_user()
 *      DESCRIPTION: 
 */

string get_user()
{


}

/*
 *      FUNCTION: personality_quiz()
 *      DESCRIPTION: 
 */

void personality_quiz(int* q_array,int SIZE, string name)
{
    // 1) glep, childlike, speaks jibberish, might just have his answers be jibberish
    // 2) pim, nice, kind
    // 3) charlie, lazy, realistic, uncle
    // 4) alan, deadpan, dry humor, cares about his job
    // 5) the boss, whacky, evil?, REALLY cares about his comapny
    
    //QUESTION ONE
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

    //QUESTION TWO
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

    //QUESTION THREE
    cout << "QUESTION 3" << endl;
    cout << name << "If you could describe yourself in one word what would it be?" << endl;
    cout << "1) ielinutle." << endl;
    cout << "2) Innocent." << endl;
    cout << "3) Chill." << endl;
    cout << "4) Deadpan." << endl;
    cout << "5) Eccentric." << endl;
    cout << "Answer: ";
    //cin  >> q_array[2];

    //QUESTION FOUR
    cout << "QUESTION 4" << endl;
    cout << name << ", if you could describe your physcial appearance in an Adult Swim animated TV show created by Zach Hadel and Michael Cusack, what would it look like?" << endl;
    cout << "1) A small green creature with a purple hat that speaks a language only understandable by characters in the show." << endl;
    cout << "2) A short purple humanoid with an exposed nerve ending." << endl;
    cout << "3) A rotund yellow humanoid with a comically large nose." << endl;
    cout << "4) A tall, long limbed red creature with a tie." << endl;
    cout << "5) A 60-70 year old man with a horseshoe baldspot that is covered with a mismatching toupee." << endl;
    cout << "Answer: ";
    //cin  >> q_array[3];

    //QUESTION FIVE
    cout << "QUESTION 5" << endl;
    cout << name << ", out of the choices below which food would you eat?" << endl; 
    cout << "1) Coffee and french fries." << endl;
    cout << "2) Worms." << endl;
    cout << "3) The Century Egg from Salty's." << endl;
    cout << "4) An Isometric cut of Cheddar Cheese." << endl;
    cout << "5) A warm plate of Spaghetti." << endl;
    cout << "Answer: ";
    //cin  >> q_array[4];

    //QUESTION SIX
    cout << "QUESTION 6" << endl;
    cout << name << ", out of the choices below which activity would you wanna do?" << endl; 
    cout << "1) Replacing the famous star Mr Frog on the Mr Frog Show." << endl;
    cout << "2) Fetching Firewood from across the road for a Halloween party." << endl;
    cout << "3) Being accosted by James to make him smile." << endl;
    cout << "4) Finding your missing paper clips in a long winded attempt by your landlord to get you to hang out with him." << endl;
    cout << "5) Visit Spamtopia to buy a Magical Red Jewel for your son Tyler." << endl;
    cout << "Answer: ";
    //cin  >> q_array[5];

    //QUESTION SEVEN
    cout << "QUESTION 7" << endl;
    cout << name << ", which Smiling Friend do you think you are?" << endl; 
    cout << "1) Glep." << endl;
    cout << "2) Pim." << endl;
    cout << "3) Charlie." << endl;
    cout << "4) Alan." << endl;
    cout << "5) The Boss" << endl;
    cout << "Answer: ";
    //cin  >> q_array[6];

    //QUESTION EIGHT
    cout << "QUESTION 8" << endl;
    cout << name << ", what would you do if a snowman you created came to life?" << endl; 
    cout << "1) olhear esûdait hþinfagiv dtyaiwƶ aseset lewyæ." << endl;
    cout << "2) Keep the Snowman alive and show him the meaning of life!" << endl;
    cout << "3) Not my responsibility, I have to go help my uncle with something." << endl;
    cout << "4) I dont really care about the snowman, I have to go to my Doctor Monsters appointment." << endl;
    cout << "5) Destroy the snowman because of its newfound consciousness." << endl;
    cout << "Answer: ";
    //cin  >> q_array[7];

    //QUESTION NINE
    cout << "QUESTION 9" << endl;
    cout << name << ", who killed Simon S. Salty?" << endl; 
    cout << "1) Mr. Ketchup" << endl;
    cout << "2) The Fun Twins." << endl;
    cout << "3) Mrs. Mustard." << endl;
    cout << "4) Salt and Pepper." << endl;
    cout << "5) Crazy Cup." << endl;
    cout << "Answer: ";
    //cin  >> q_array[8];

    //QUESTION TEN
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

/*
 *      FUNCTION: personality_calc()
 *      DESCRIPTION: 
 */

int personality_calc(int* q_array,int SIZE, int* p_array) //calcs personliaty based on which persoanlity you answered the most, i.e. mode
{
  
  int highest=-1; //set the highesst value to -1 because you can have a 0 in the array
  int p_index = 0; //the number value of the personlality that will be returned
  int t_size=1; //works as the size of the tie_array
  int t_index = 0;//index for t_array
  int rnum = 0;//random number
   

  
  for (int i = 0; i < SIZE; i++) //populates the p_array to see which personlaity was the most frequent
  {
    if (q_array[i] == 1)
      p_array[0] = p_array[0] + 1;
    else if (q_array[i] == 2)
      p_array[1] = p_array[1] + 1;
    else if (q_array[i] == 3)
      p_array[2] = p_array[2] + 1;
    else if (q_array[i] == 4)
      p_array[3] = p_array[3] + 1;
    else if (q_array[i] == 5)
      p_array[4] = p_array[4] + 1;
  }
    

  for (int i = 0; i < 5; i++) //Looks for the highest frequency is the p_array
  {
    
    if (p_array[i] > highest) //checks which is highest
    {
    highest = p_array[i];
    p_index = i;
    }

    else if (p_array[i] == highest) //checks for ties
    {
        t_size++;
    }
    
  }
    
    

    if (t_size == 1) //there are no ties retuen the index with the highest number
    return p_index+ 1;

    else //there are ties
    {
        
        int* tie_array= new int [t_size]; //creates an array that will be the size of the ties, i.e one tie is size 2

        for (int i = 0; i < t_size;i++) //intiliazes the tie_array to 0
        {
            tie_array[i] = 0;
        }
        
        for (int i = 0; i < 5; i++) //populates the tie_array
        {
            
            if (highest == p_array[i]) //checks which index is equal to the highest
            {
    
                tie_array[t_index] = i+1; //places that index plus 1 into the value of the tie_array
                
                t_index++;
                
            }
             

        }

        rnum = rand() % (t_size);    //generates a range from t_size to 0
           
        p_index = tie_array[rnum];

        delete[] tie_array; //release memory
        
        return p_index;
        
        

    }
    
}

/*
 *      FUNCTION: personality_assign()
 *      DESCRIPTION: 
 */

string personality_assign (int p_num)
{

    if (p_num == 1)
    return "Glep";

    else if (p_num == 2)
    return "Pim";

    else if (p_num == 3)
    return "Charlie";

    else if (p_num == 4)
    return "Alan";

    else 
    return "The Boss";
}