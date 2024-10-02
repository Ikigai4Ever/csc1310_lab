/* 
 *  NAME: Ty Ahrens
 *  DATE: 10/2/24
 *  DESCRIPTION: Class that goes to calculate the
 *               percentages of quiz takers that have responded to each
 *               answer previously in answers.txt. This also goes to write
 *               each answer into the answers.txt file
 *  PROGRAM: Quiz_Answers.cpp
 */

#include "Quiz_Answers.h"

/*
 *      FUNCTION: getAnswers()
 *      DESCRIPTION: WIP
 */
void Answers::getAnswers(int* answersPtr){
    int totalResponses = 0, answerNum = 0; 
    std::string answer;

    answerFile.open("answers.txt");
    if (answerFile.is_open()){
        while (answerFile.eof())
            totalResponses++;  
    
        totalResponses = totalResponses/2;
        answersPtr = new int [totalResponses];

        while (answerFile.eof()){
            getline(answerFile, answer, ',');
            answersPtr[answerNum] = stoi(answer);
            answerNum++;
        }
    
    }    
}

/*
 *      FUNCTION: removeAnswersPtr()
 *      DESCRIPTION: deletes answer pointer
 */
void Answers::removeAnswersPtr(int* answersPtr){
    delete [] answersPtr;
}

/*
 *      FUNCTION: storeAnswers()
 *      DESCRIPTION: Store all of the answers that the user puts down 
 *                   in the personality quiz in the answers.txt file
 */

void Answers::storeAnswers(int userResponse){
    answerFile.open("answers.txt");     //open answers.txt file
    answerFile << userResponse;     //place answer from questions sent from main into answers text file
    answerFile << ",";      //add delimiter to space out the answers
    answerFile.ignore();
    answerFile.close();     //close answers.txt file
}