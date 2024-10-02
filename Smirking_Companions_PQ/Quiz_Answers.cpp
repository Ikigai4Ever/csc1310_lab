/* 
 *  NAME: Ty Ahrens
 *  DATE: 10/1/24
 *  DESCRIPTION: Class that goes to calculate the
 *               percentages of quiz takers that have responded to each
 *               answer previously in answers.txt. This also goes to write
 *               each answer into the answers.txt file
 *  PROGRAM: Quiz_Answers.h
 */
#include "Quiz_Answers.h"

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