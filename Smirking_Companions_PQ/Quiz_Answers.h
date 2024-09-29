/* 
 *  NAME: Ty Ahrens
 *  DATE: 9/28/24
 *  DESCRIPTION: Class that goes to calculate the
 *               percentages of quiz takers that have responded to each
 *               answer previously in answers.txt. This also goes to write
 *               each answer into the answers.txt file
 *  PROGRAM: Quiz_Answers.h
 */
#include <fstream>

class Answers{
    private:
        int questionsPtr;           //questions pointer for allocated questions array to calculate percentages
        std::fstream answerFile;    //file that all of the previous answers are stored in

    public:
        void Answers::getAnswers();         //definition to function getAnswers()
        void Answers::storeAnswers(int);    //definition to function storeAnswers()
};

/*
 *      FUNCTION: getAnswers()
 *      DESCRIPTION: WIP
 */
void Answers::getAnswers(){

}

/*
 *      FUNCTION: storeAnswers()
 *      DESCRIPTION: Store all of the answers that the user puts down 
 *                   in the personality quiz in the answers.txt file
 */

void Answers::storeAnswers(int userResponse){
    answerFile.open("answers.txt");
    answerFile >> userResponse;
    answerFile.ignore();
    answerFile.close();
}