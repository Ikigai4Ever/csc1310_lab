/* 
 *  NAME: Ty Ahrens
 *  DATE: 10/4/24
 *  DESCRIPTION: Class that goes to calculate the
 *               percentages of quiz takers that have responded to each
 *               answer previously in answers.txt. This also goes to write
 *               each answer into the answers.txt file
 *  PROGRAM: Quiz_Answers.cpp
 */

#include "Quiz_Answers.h"


/*
 *      FUNCTION: printAnswers()
 *      DESCRIPTION: Test case to print out all of the files that have been  
 *                   read into the answersPtr array to make sure it works
 */

void Answers::printAnswers(int* answersPtr){
    float numSpacingTest; 

    std::cout << "Printing previous answers for testing purposes: ";
    for (int i = 0; i < sizeof(&answersPtr); i+2){
        std::cout << answersPtr[i] << answersPtr[i+1] << " ";
        numSpacingTest = i % 19; //test to see if it is the 20th number to print out on the next line
        if (numSpacingTest = 0){
            std::cout << "\n";  //go to the next line after 20 number print outs
        }
    }
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

/*
 *      FUNCTION: Answers()
 *      DESCRIPTION: Get the number of answers from the answers.txt 
 *                   file and dynamically allocate a new array to store
 *                   each number previously answered to calculate 
 *                   percentages
 */
Answers::Answers(int* answersPtr){
    int totalResponses = 0, answerNum = 0; 
    std::string answer;

    answerFile.open("answers.txt");
    if (answerFile.is_open()){
        //get the number of responses from the program
        while (answerFile.eof())
            totalResponses++;   //increment number of responses in the file
    
        totalResponses = totalResponses/2; //divide number of entries by 2 because of commas
        answersPtr = new int [totalResponses];  //dynamically allocate new array based on total responses previously recorded

        //store each number into answersPtr array
        while (answerFile.eof()){
            getline(answerFile, answer, ',');   //read in the value from the file inot answer variable
            answersPtr[answerNum] = stoi(answer);   //change answer from a string to an int and put the value in answersPtr array
            answerNum++;    //increment answerNum to advance to the next part of the array
        }
    }    
}

/*
 *      FUNCTION: ~Answers()
 *      DESCRIPTION: Deconstructor for Answers class
 */
Answers::~Answers(){
    delete [] answersPtr;
    std::cout << "\nDynamic memory for Quiz Answers has been released.\n";
}