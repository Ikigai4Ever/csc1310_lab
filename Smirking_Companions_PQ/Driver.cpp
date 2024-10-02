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
int validate_user(int, int, int); //Evan function
void personality_quiz(int*, int, string, int, int); //Evan function
int personality_calc(int*, int, int*);  //Evan function
void print_personality(int);
string personality_assign(int);  //Evan function
string get_user();  //Zander function

int main()
{
  srand (time(0));
  int choice=0;

    do{
    int min=0,max=0;
    int question_array[SIZE];
    int personality_array[5]= {0,0,0,0,0};
    int personality_num = 0;
    string name, personality;



    cout << "\n\nHELLO! Welcome to the Smirking Companions persoanlity quiz!" << endl;
    cout << "1) Begin quiz" << endl << "2) End program" << endl;
    cin >> choice;
    while (choice != 1 && choice !=2)
    {
      min = 1;
      max = 2;
      choice = validate_user(choice,min,max);
    }

    if (choice == 2)
    break;
    cout << "The purpose of this program is to find out which Smirking Companion YOU are."<< endl; 
    cout << "Lets's begin!" << endl;
    
    name = get_user();
    personality_quiz(question_array, SIZE, name,min,max);
    personality_num = personality_calc(question_array, SIZE, personality_array);
    print_personality(personality_num);
    personality = personality_assign(personality_num);
    cout <<"congratulations! You got " << personality << "!" << endl;

    }while (choice != 2);

    cout << "Goodbye!" << endl;
    return 0;
}
/**************************\
|        FUNCTIONS         |
\**************************/

/*
 *      FUNCTION: validate_user
 *      DESCRIPTION: validates the user's input
 */
int validate_user(int choice,int min,int max)
{
  
  cout << "oops, please enter a number between " << min << " and " << max << "."<< endl;
  cin >> choice;
  return choice;
}

      
    

/*
 *      FUNCTION: get_user()
 *      DESCRIPTION: 
 */

string get_user()
{
return "Evan";

}

/*
 *      FUNCTION: personality_quiz()
 *      DESCRIPTION: pesonality quiz, asks questions 1-10, stores in q_array 
 */

void personality_quiz(int* q_array,int SIZE, string name,int min,int max)
{
    
    min = 1;
    max = 5; 

    //QUESTION ONE
    cout << "\nLet's start the quiz now " << name << "!" << endl << endl;
    cout << "QUESTION 1" << endl;
    cout << name << ", the company you work for has new competition. It seems like they are doing the complete opposite of what your company does, and frankly, are quite evil." << endl;
    cout << "What do you do, " << name << "?" << endl;
    cout << "1) tul eðe fdisuuvp edikþaaðl loofobl úww." << endl;
    cout << "2) Seek the evil doingings this company has done and try to help those affected!" << endl;
    cout << "3) I'd just kinda sit back and watch what happens, maybe be emotional support." << endl;
    cout << "4) Check to see if the opposing company has a better 401(k). " << endl;
    cout << "5) Consult my board of shady and corrupt advisors and then \"get rid\" of the compitetion." << endl;
    cout << "Answer: ";
    cin  >> q_array[0];
    while (q_array[0] < 1 || q_array[0] > 5)
    {
      q_array[0] = validate_user(q_array[0],min,max);
    }
    storeAnswers(q_array[0]);
    cout << endl;

    //QUESTION TWO
    cout << "QUESTION 2" << endl;
    cout << name << ", It is a tight race in the presidential vote. The two Candiates are President Jimble and Mr. Frog." << endl;
    cout << "Who are you going to vote for, " << name << "?" << endl;
    cout << "1) oþbnore eþrepe syrhood." << endl;
    cout << "2) I would vote for President Jimble based on the adventure I had with him!" << endl;
    cout << "3) I hate poltics and the system, i'm not voting." << endl;
    cout << "4) I would vote for President Jimble becasue of his policies." << endl;
    cout << "5) Why of course I voted for President Jimble! I got a 10,000 bet he will win! If he doesn't win there will be repercussions." << endl;
    cout << "Answer: ";
    cin  >> q_array[1];
    while (q_array[1] < 1 || q_array[1] > 5)
    {
      q_array[1] = validate_user(q_array[1],min,max);
    }
    storeAnswers(q_array[1]);
    cout << endl;

    //QUESTION THREE
    cout << "QUESTION 3" << endl;
    cout << name << ", If you could describe yourself in one word what would it be?" << endl;
    cout << "1) ielinutle." << endl;
    cout << "2) Innocent." << endl;
    cout << "3) Chill." << endl;
    cout << "4) Deadpan." << endl;
    cout << "5) Eccentric." << endl;
    cout << "Answer: ";
    cin  >> q_array[2];
    while (q_array[2] < 1 || q_array[2] > 5)
    {
      q_array[2] = validate_user(q_array[2],min,max);
    }
    storeAnswers(q_array[2]);
    cout << endl;

    //QUESTION FOUR
    cout << "QUESTION 4" << endl;
    cout << name << ", if you could describe your physcial appearance in an Adult Swim animated TV show created by Zach Hadel and Michael Cusack, what would it look like?" << endl;
    cout << "1) A small green creature with a purple hat that speaks a language only understandable by characters in the show." << endl;
    cout << "2) A short purple humanoid with an exposed nerve ending." << endl;
    cout << "3) A rotund yellow humanoid with a comically large nose." << endl;
    cout << "4) A tall, long limbed red creature with a tie." << endl;
    cout << "5) A 60-70 year old man with a horseshoe baldspot that is covered with a mismatching toupee." << endl;
    cout << "Answer: ";
    cin  >> q_array[3];
    while (q_array[3] < 1 || q_array[3] > 5)
    {
      q_array[3] = validate_user(q_array[3],min,max);
    }
    storeAnswers(q_array[3]);
    cout << endl;

    //QUESTION FIVE
    cout << "QUESTION 5" << endl;
    cout << name << ", out of the choices below which food would you eat?" << endl; 
    cout << "1) Coffee and french fries." << endl;
    cout << "2) Worms." << endl;
    cout << "3) The Century Egg from Salty's." << endl;
    cout << "4) An Isometric cut of Cheddar Cheese." << endl;
    cout << "5) A warm plate of Spaghetti." << endl;
    cout << "Answer: ";
    cin  >> q_array[4];
    while (q_array[4] < 1 || q_array[4] > 5)
    {
      q_array[4] = validate_user(q_array[4],min,max);
    }
    storeAnswers(q_array[4]);
    cout << endl;

    //QUESTION SIX
    cout << "QUESTION 6" << endl;
    cout << name << ", out of the choices below which activity would you wanna do?" << endl; 
    cout << "1) Replace the famous star Mr Frog on the Mr Frog Show." << endl;
    cout << "2) Fetch Firewood from across the road for a Halloween party." << endl;
    cout << "3) Be accosted by James to make him smile." << endl;
    cout << "4) Find your missing paper clips in a long winded attempt by your landlord to get you to hang out with him." << endl;
    cout << "5) Visit Spamtopia to buy a Magical Red Jewel for your son Tyler." << endl;
    cout << "Answer: ";
    cin  >> q_array[5];
    while (q_array[5] < 1 || q_array[5] > 5)
    {
      q_array[5] = validate_user(q_array[5],min,max);
    }
    storeAnswers(q_array[5]);
    cout << endl;

    //QUESTION SEVEN
    cout << "QUESTION 7" << endl;
    cout << name << ", which Smiling Friend do you think you are?" << endl; 
    cout << "1) Glep." << endl;
    cout << "2) Pim." << endl;
    cout << "3) Charlie." << endl;
    cout << "4) Alan." << endl;
    cout << "5) The Boss" << endl;
    cout << "Answer: ";
    cin  >> q_array[6];
    while (q_array[6] < 1 || q_array[6] > 5)
    {
      q_array[6] = validate_user(q_array[6],min,max);
    }
    storeAnswers(q_array[6]);
    cout << endl;

    //QUESTION EIGHT
    cout << "QUESTION 8" << endl;
    cout << name << ", what would you do if a snowman you created came to life?" << endl; 
    cout << "1) olhear esûdait hþinfagiv dtyaiwƶ aseset lewyæ." << endl;
    cout << "2) Keep the Snowman alive and show him the meaning of life!" << endl;
    cout << "3) Not my responsibility, I have to go help my uncle with something." << endl;
    cout << "4) I dont really care about the snowman, I have to go to my Doctor Monsters appointment." << endl;
    cout << "5) Destroy the snowman because of its newfound consciousness." << endl;
    cout << "Answer: ";
    cin  >> q_array[7];
    while (q_array[7] < 1 || q_array[7] > 5)
    {
      q_array[7] = validate_user(q_array[7],min,max);
    }
    storeAnswers(q_array[7]);
    cout << endl;

    //QUESTION NINE
    cout << "QUESTION 9" << endl;
    cout << name << ", who killed Simon S. Salty?" << endl; 
    cout << "1) Mr. Ketchup" << endl;
    cout << "2) The Fun Twins." << endl;
    cout << "3) Mrs. Mustard." << endl;
    cout << "4) Salt and Pepper." << endl;
    cout << "5) Crazy Cup." << endl;
    cout << "Answer: ";
    cin  >> q_array[8];
    while (q_array[8] < 1 || q_array[8] > 5)
    {
      q_array[8] = validate_user(q_array[8],min,max);
    }
    storeAnswers(q_array[8]);
    cout << endl;

    //QUESTION TEN
    cout << "QUESTION 10" << endl;
    cout << name << ", what would dress up as for Halloween?" << endl; 
    cout << "1) Matching costumes as Ronald and Nancy Reagan." << endl;
    cout << "2) A Cowboy." << endl;
    cout << "3) I'm not dressing up becasue I am scared of what will be considered offensive or what could become offensive later on." << endl;
    cout << "4) Joaquin Phoenix's Joker." << endl;
    cout << "5) Charlie Brown." << endl;
    cout << "Answer: ";
    cin  >> q_array[9];
    while (q_array[9] < 1 || q_array[9] > 5)
    {
      q_array[9] = validate_user(q_array[9],min,max);
    }
    storeAnswers(q_array[9]);
    cout << endl; 


 
}

/*
 *      FUNCTION: personality_calc()
 *      DESCRIPTION: calculates which personality based on answers from personality_quiz 
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
 *      FUNCTION: print_personality()
 *      DESCRIPTION: prints an ascii art of the personality you got 
 */
void print_personality(int p_num)
{
if (p_num == 1)
{
cout<<"                                                           @@@%@"<<endl;
cout<<"                                                       @@@*++%@"<<endl; 
cout<<"                                                     @%*+++*@@"<<endl;  
cout<<"                                                   @%+++++*@@"<<endl;   
cout<<"                                                 @@+++++++@@"<<endl;    
cout<<"                                             @@@#++++++++@@"<<endl;     
cout<<"                                          @@#++++++++++*@"<<endl;       
cout<<"                                       @@*++++++++++++@@"<<endl;        
cout<<"                   @@@@@@@@@        @@#+++++++++++++#@"<<endl;          
cout<<"     @@@@@@@@@@@@  @%/%@#+++++%@@@@%*+++++++++++++++*@"<<endl;           
cout<<"   @+-------------=+@@%/#%@++++++++++++++++++++++++*@"<<endl;            
cout<<"   @*-------------------*%@@+++++++++++++++++++++*@"<<endl;             
cout<<"     @@=--------------------%#++++++++++++++++++*@"<<endl;              
cout<<"        @@*------------------=@*+++++++++++++++*@"<<endl;               
cout<<"           @@*-----------------=@#+++++++++++*##@"<<endl;               
cout<<"              @@+------*@%=--=%@+-@#++++++++*#%@"<<endl;                
cout<<"                @+---+%::=@@@%+.:%*-*@*++++++#@@"<<endl;                
cout<<"             @@*----=%.:%@@@@@@@:.%+--+@*++++*@"<<endl;                 
cout<<"         @@@=-------+#.-@@@@@@@@=.+*----+@++++%@"<<endl;                
cout<<"      @@*------------@:.+@@@@@@@::@=-----=@#++#@ "<<endl;               
cout<<"     @*---------------@=:.:=+=::-@--------%/%@+#@"<<endl;                
cout<<"    @=------------------+%@%/%/%@#=---------+@#@*@"<<endl;                
cout<<"   @@-------------+#%=---------------------@##@@"<<endl;                
cout<<"    @@@*====*%@@@@ @*----------------------#@@@@  @@@@"<<endl;          
cout<<"        @@@@@@@    @+----------------------*@ @@*=--=@"<<endl;          
cout<<"        @#-----=+**@=--------------------*##*-----+@@"<<endl;           
cout<<"          @@%=-----@--------------------------+@@@"<<endl;              
cout<<"                @@@%------------------=++++*@"<<endl;                   
cout<<"                  @*-----------------------+@"<<endl;                   
cout<<"                  @*-----------------------*@"<<endl;                   
cout<<"                  @*-----------------------%@"<<endl;                   
cout<<"                  @#----------------------=@"<<endl;                    
cout<<"                   @----------------------%@"<<endl;                    
cout<<"                   @#--------------------+@"<<endl;                     
cout<<"                    @#-------------------@@"<<endl;                     
cout<<"                    @@@+-----------%----#@ "<<endl;                     
cout<<"                   @*-=%#+-------+#---+@  "<<endl;                     
cout<<"                    @+--=@ @@@@@@@@=---@@ "<<endl;                      
cout<<"                    @+--+@        @=--+@  "<<endl;                      
cout<<"                    @#--+@        @+--*@  "<<endl;                      
cout<<"                     @#-=@         @=-=@  "<<endl;                      
cout<<"                      @@@@          @#*@  "<<endl;                      


}
    
else if (p_num == 2)
{
     cout << "                         @                                      \n"
             "                         @@                                     \n"
             "                          @@                                    \n"
             "                          @@                                    \n"
             "                         @@#**+*****+**#@@                      \n"
             "                     %#==-----------------==#@                  \n"
             "                 %#+-----------------------=++::...:-*#%       \n"
             "              @#=-----------------------==-:...........:=%%     \n"
             "             #=----------=*=:.....:**=-+:..:-@@@@@%=::....*@   \n"
             "           #=----------==:..:-+++-:...==:.-#*#**%%%#%#:...:+   \n"
             "          *-----------*:..:+@@@@@@@+:..:-:@%@%%%%%@#%%+....=#  \n"
             "         #-----------+...:*#%##*#@@@+:..=%%#%%**:+%=@%#:...-#  \n"
             "        %-----------=-...:%@%%#*#%@@+:.:-#%*+%%#*#%%@#*....-#  \n"
             "       @+------------=....=*%*=*=%@#:..--.%%+*%%@%@#%+....:+    \n"
             "       %=------------=+:...:=#@@#+-..:+-..:-*#%@%%#+-:...:*#+@  \n"
             "   @%@@%=#-+-----------+=:.........:=+-+:..............:++=-*@  \n"
             "   %=-----=+--------------+=-===-=+------*--:......:-=+=+===*+# \n"
             " @#==-----==---------------------------------======----==----*%% \n"
             "%=----*+----*---------------------========----------==*----@   \n"
             " @%+---------==-----------------=%@@@@@@@@@@%%###+==-----+%%    \n"
             " *=-----------=+----------------=#+*@@@@@    @*+*=------*       \n"
             "  @@%+----------+=----------------+*#@@@@   #-:..:-+=--#        \n"
             "      #----------+*=-----------------=*%@@@#**+===+::*@         \n"
             "       #=------==..:+-----------------------------+:..-@        \n"
             "        @#---==:....:-+--------------------------+-..:#         \n"
             "          %*=.........:+----------------------=+:..:-*          \n"
             "          *:...........:*+++=-----------=++==+:.:-:=%           \n"
             "           @=............:+-:...:::-#=....:+:...:-#              \n"
             "             #-:............:===--=::-+-==:......-*              \n"
             "              @#:...............:::::+:::........:+              \n"
             "               %--.................::-:............=%           \n"
             "              @=..................=---#-::.........:=@          \n"
             "              %:....................==.+:...........-#          \n"
             "              *:.......................-=:..........-*          \n"
             "              =:.....................:%:-:..........-*          \n"
             "             @#+=-:::...::.............:-:.....:--:-+%          \n"
             "             @%%%%%*#**#%%#=::..:::::=+#####%##%%%%*#@          \n"
             "             @##%%%#***%%%%%%%%%%%+:::::::-*%%%%%%#*%           \n"
             "              %****%***############******+#*****##*%@           \n"
             "              @#***##***************#***%*******%*#@            \n"
             "               %***##**************%#**##*******#*%             \n"
             "               %***#**********#@  @************##*%             \n"
             "               %***#*********#@    %***********%#%               \n"
             "               %=+*#######*+%       *=++++==-----*               \n"
             "               %------------#       #*==-----=++*@@              \n"
             "               @%%%%%%%%%%%%@       @%%%%%%%%%%%%%%@@           \n"
             "               @%%%%%%%%%%%%%%@@    @%%%%%%%%%%%%%%%@           \n"
             "                @%%%%%%%%%%%%%%@     @@@@%%%%%%%%%@@            \n"
             "                 @@@@@@@%%%%@@@                                  \n";
    

}

else if (p_num == 3)
{
     cout << "                    @%@                                          \n"
             "                    @**#@    @#****#@                            \n"
             "                     @#**#@@*********%@                          \n"
             "                     @@%%###%###******#%@                        \n"
             "                @+-::::::::::::::-+%###*%                        \n"
             "            @*::::::::::::::::::::::::+#%                        \n"
             "          @-::::::::-*-::::::::::::::::::#@                      \n"
             "         =::::::::::*@%:::::-*:::::::::::::+@                    \n"
             "       @-:::::::::::::::::::@@*::::::::::::::*   @               \n"
             "       %::::::::::::::::::::::::::::::::::::::-@                 \n"
             "        *:::::::::::::::::::::::::::::::::::::::#@@              \n"
             "          @@%**#@@*::::::::-=-:::::::::::::::::::+               \n"
             "                 #::::-%@@@@@@=:::::::::::::::::::=@             \n"
             "                        @@@%+*:::::::::::::::::::::=            \n"
             "   @+:% @:+             @@%**:::::::::::::::::::::::=           \n"
             " %%@#::::::@         #--:::::::::::::::::::::::::::::+%@@       \n"
             "@+::::::::-#@        %=:::::::::::::::::::::::::::::::##*++*@   \n"
             " %+-#-::-%++++%@      #::::::::::::::::::::::::::::::::#**#++#  \n"
             "#:::::**++++++++*%@   @-:::::::::::::::::::::::::::-#%*+**++++% \n"
             "   @%+++++++++++++++#@ *::::::::::::::::::::::+**++++++++++++*@ \n"
             "     %+++++++++++++++++#-:::::::::::::::::-#+++++++++++++#      \n"
             "      @+++++++++++++++++%==**-:::-+#+===*+++++++++++++++++%     \n"
             "       @*++++++++++++++++*+=#+===+#*+#++++++++++++++++++++*@    \n"
             "         @+++++++++++++++++++++++++++++++++++++++++++++++++%    \n"
             "           %++++++++**++++*+#++++*%#++++++++++++++++++++++*+%   \n"
             "             #++++++*+++++***+++++##++++++++++++++++++++++*+*@  \n"
             "               @+++#++++++*@*+++++***++++++*++++++++++++++*++%  \n"
             "                 @%++++++++++++++++++++++++**+++++++++++++*++#  \n"
             "                  #+++++++++++++++++++++++++#+++++++++++++*++@ \n"
             "                  *++++++++++++++++++++++++++#+++++++++++**+++@ \n"
             "                 @+*+++++++++++++++++++++++++*+++++++++++#++++% \n"
             "                 @++#+++++++++++++++++++++++*+#++++++++++#++++@ \n"
             "                 @+++++++++++++++++++++++##++++#+%#++*%*+#+++#@ \n"
             "                  %%%%###**+++++++++++++++++++*::::::::::*%##@  \n"
             "                  @###########################:--:::::::::=%%@  \n"
             "                   %#############################::%#::%#%%#@   \n"
             "                   @############################%-####+%###%@   \n"
             "                    %######################################@    \n"
             "                    @######################################@    \n"
             "                    @%###########%%%%@@@@%################%@    \n"
             "                    @%###############@   @################%@    \n"
             "                    @%###############@   @%###############%@    \n"
             "                    @%###############@   @%###############%@    \n"
             "                    @%###############@   @%###############%@    \n"
             "                    %*%%%%%%#####%%%%@   @%###############%     \n"
             "                  #:::....::..::....:#   %=+#%%%%%%%%%%%%#%     \n"
             "                 +.................:+@  *:...:...:...::...#     \n"
             "                  @%*++===++*#%@@     #...............:=@       \n"
             "                                       %+-:::::-=**#@@           \n";


}

else if (p_num == 4)
{
     cout << "                          @@@@@@                                 \n"
             " @@@                 @%*++++++++++*@@                            \n"
             "  @%**% @#@        @*++*#*==+-=*%+++++#@                         \n"
             "@#++*@%+%@+%      %++++#%+-:-=*%#++*+++++@                       \n"
             "@***%%+#++@+%    %+++++++++++++++#+*+++++++%                    \n"
             "    @*+++++++@   %*%#+++++++**#::%++++++++++*@                  \n"
             "      @++%+++#@     @@@@:::+.:@*++++++++++++++@                 \n"
             "        @*++++%       @@#**++++++++++++++++++++%                 \n"
             "           @+++%         %++++++++++++++++++++++%               \n"
             "             %++*@        @#+++++++++++++++++++++@              \n"
             "              @+++@         @+++++++++++++++++++++@             \n"
             "               @*++#         @+++++++++++++++++++++@            \n"
             "                 #++*@        @*+++++++++++++++++++*@            \n"
             "                  @+++%        @++++++++++++++++++++%            \n"
             "                   @#++*@       @++++++++++++++++++++@           \n"
             "                     @*++*@      @++++++++++++++++++++@          \n"
             "                       @++++#@    #+++++++++++++++++++@          \n"
             "                         @*++++%@ @+++++++++++++++++++##         \n"
             "                           @%+++++@=#**+*###*++**##+=+#@         \n"
             "                              @%++++*##*#=+=#++#%#++++++@       \n"
             "                                 @%++++++#%=#++++++++++++@      \n"
             "                                    %++++*==+*+++++++*%++#      \n"
             "                                    @++++#===#+++++++++#++%     \n"
             "                                    @++++#===*+++++++++*+++@    \n"
             "                                    @*+++#===+++++++++++%++%    \n"
             "                                     *+++#===+*++++++++++*++@   \n"
             "                                     *+++#====#++++++++++%++#   \n"
             "                                     *+++#=*+=*++++++++++%*++@  \n"
             "                                    @*+++*====+++++++++++%%++#  \n"
             "                                    @+++*+=====#+++++++++@@++#  \n"
             "                                    %+++#======#++++++++*@@++#  \n"
             "                                    *+++*======*++++++++% @++#  \n"
             "                                   @+++*+======+++++++++@ %++%  \n"
             "                                   #+++#=======+++++++++@ *++@  \n"
             "                                  @++++*+======#+++++++% @++#   \n"
             "                                  *+++++#====+*++++++++@ #++%   \n"
             "                                 @+++++++#+#*+++++++++# @*+@    \n"
             "                                 #++++++++++++++++++++@ %++%    \n"
             "                                @++++#  @@@@%##**++++@ @+++@    \n"
             "                                *++++@         %++++#  %++%     \n"
             "                               @++++%         @#++++@ @+++@     \n"
             "                              @++++%          %++++@@*++++%     \n"
             "                              #++++@         @*+++*@++*+++%     \n"
             "                             @++++@          %++++@##  **++@    \n"
             "                            @*+++#          @*+++# #@  *%+#*@   \n"
             "                            @++++@          %++++@    @+@*%*%   \n"
             "                           @*+++%           #+++%     *#@*%*%   \n"
             "                           @++++@          @+++*@    @+@%#@*@   \n"
             "                           %+++#           %+++%       @#@      \n"
             "                           @++++@          #+++@                \n"
             "                            @++++@         %+++*                \n"
             "                             %+++#          #+++%                \n"
             "                              *+++@         @*+++@               \n"
             "                              @++++@         @++++@              \n"
             "                               @++++@         %+++*              \n"
             "                                %+++#@         %+++#             \n"
             "                                 *+++%         @*+++@            \n"
             "                                 @++++@         @++++@           \n"
             "                                  *+++*@         @++++@          \n"
             "                            @%%*+++++++%          %++++@          \n"
             "                       @%*+++++++++++++%          @++++*@        \n"
             "                     @**++++***###%@@       @%#*++++++++%        \n"
             "                                       @@*++++++++++++++@         \n"
             "                                     @*+++++**#%%%%@@              \n";


}

else 
{
     cout << "                       @%###########%####%                       \n"
             "                   %####******###****##**###%                    \n"
             "                 ###*******####********##*####%                  \n"
             "            #+=--+*##*****#*****###**###**###**#%                \n"
             "        #=-=-:-=***++****#**##*****###**##***##*#*=-=*          \n"
             "       *=--:-==-==---+****###*##******######**####+-::-=        \n"
             "      +-::=-=----------=+***##**#**###******##**#**==:::-+#     \n"
             "    +=::::==---=----------=+***********####*#***##*=--:---=*@   \n"
             "   *::-:::---=---------------++----=********###**#*=-=-:=-:-+   \n"
             "  *:::=::-----------------------------=+*******#**+=--:::::::=  \n"
             " %*-:--:-+---------------------------------====+**=--+--:::-::-*  \n"
             "  =::-::-=---------------------------------------=---==-:::::::= \n"
             " *:::::::-+-----------------------------------------==-:::-:::=+ \n"
             " +=-::::::-=---------------------------------------=-:--:-:-::-*  \n"
             " *::::::-::----------------------------------------=-::::--::=:+ \n"
             " =:::::=:-=------------------------------------------=-::::::--+ \n"
             "#-:::::--=--------------------------------------------=-::::::=+ \n"
             "#=:::::+=---------------------------------------------=---::::=+ \n"
             " =:-:::+-----------------------------------------------==:::::=  \n"
             " =:=::-----------------===--------===--------------------:::-:=  \n"
             " *-==:---------------=**+=--------=+++=-----------------=:::--#  \n"
             " +-*--------------=+===*+--==--===*@@#+=-=--------------=-:=+#   \n"
             " #+=-----------------------==-==-------------------------===-+   \n"
             "   %+=---------------===---==--==---==--------------------==*   \n"
             "   %=-=--------==---------==---==------------=----------=-+*    \n"
             "    #-----=-----=------==-------=--==-------==------------+     \n"
             "      +=--==----=-----=+=----------=+=------=---+=----+***      \n"
             "        *=-=-----=--=======-----=++=====---=---=----+*          \n"
             "         #==----=+-==--==++=----=+++=:-===-==--=--=+            \n"
             "           %#*+-=+=+--==---=======--==--=--=----+#%              \n"
             "          %%%%#+==-----====-=========---=-=--=+#%%%%            \n"
             "          %%%%%%#=------------------------==#%%%%%%@            \n"
             "         %%%%%%%%%%%*+-=-------==---------+#%%%%%%%%            \n"
             "         @%%%%%%%%%%*-=-==--=+---==-====*%%%%%%%%%%%            \n"
             "        @%%%%%%%%%%%*-:-=-----------=-:+%%%%%%%%%%%%@           \n"
             "        %%%%%%%%%%%%%*::--=+=-------::+#%%%%%%%%%%%%%           \n"
             "       @%%%%%%%%%%%%%%*------===-----=#%%%%%%%%%%%%%%@          \n"
             "       @%%%%%%%%%%%%%%%*---===++=-:-+#%%%%%%%%%%%%%%%%          \n"
             "       @%%%%%@@%%%%%%%%%*-====--=+-+%%%%%%%%%%@%%%%%%%          \n"
             "       %%%%%%@%%%%%%%%%%%#+=----==*%%%%%%%%%%@ %%%%%%%@         \n"
             "      @%%%%%%%%%%%%%%%%%##==-=+=-==*##%%%%%%@  @%%%%%%%         \n"
             "      @%%%%%%%%%%%%%%%%*==--=--=-====*%%%%%%%%%%%%%%%%%         \n"
             "      @@@%%%%%%%%%%%%%%#+***%%%%%**+*%%%%%%%%%%%%%%%%%@         \n"
             "       @@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@         \n"
             "                %%%%%%%%%%%%%%%%@%%%%%%%%%%%     @@@@           \n"
             "                %%%%%%%%%%%%%%%%%%%%%%%%%%%@                      \n"
             "                @%%%%%%%%%%%%%%%%%%%%%%%%%%@                      \n"
             "                @@%%%%%%%%%%%%%%%%%%%%%%%%%@                      \n"
             "                @@%%%%%%%%%%%%%%%%%%%%%%%%%@                      \n"
             "                @@%%%%%%%%%%%%%%%%%%%%%%%%%@                      \n"
             "                  %%%%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                  %%%%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                  %%%%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                  %%%%%%%%%%%%%%%%%%%%%%%@                       \n"
             "                  @%%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                  @@%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%                        \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                       \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                       \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                       \n"
             "                   %%%%%%%%%%%%%%%%%%%%%@                       \n"
             "                  @@%%%%%%%%%%%%%%%%%%%%%                       \n"
             "                  @%%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                  %%%%%%%%%%%%%%%%%%%%%%%                        \n"
             "                 %%%%%%%%%%%%%%%%%%%%%%%%%@                      \n"
             "               @%%%%%%%%%%%%%%%%%%%%%%%%%%%%@                    \n"
             "              %%%%%%%%%%%%@%@@@@@%%%%%%%%%%%%%                   \n"
             "             %%%%%%%%%%%%         @%%%%%%%%%%%%                  \n"
             "            %%%%%%%%@                  @@%%%%%%@                 \n";



}

}

/*
 *      FUNCTION: personality_assign()
 *      DESCRIPTION: assigns the string for which personality you are 
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