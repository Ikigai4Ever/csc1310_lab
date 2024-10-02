/* 
 *  NAME: Ty Ahrens
 *  DATE: 10/2/24
 *  DESCRIPTION: Class that goes to calculate the
 *               percentages of quiz takers that have responded to each
 *               answer previously in answers.txt. This also goes to write
 *               each answer into the answers.txt file
 *  PROGRAM: Quiz_Answers.h
 */

#ifndef QUIZ_ANSWERS_H
#define QUIZ_ANSWERS_H

#include <fstream>

class Answers{
    private:
        std::fstream answerFile;    //file that all of the previous answers are stored in

    public:
        int *questionsPtr;           //questions pointer for allocated questions array to calculate percentages
        void Answers::getAnswers();         //definition to function getAnswers()
        void Answers::storeAnswers(int);    //definition to function storeAnswers()
};

#endif