/* 
 *  NAME: Ty Ahrens
 *  DATE: 9/25/24
 *  DESCRIPTION: Save quiz answers to questions array, 
 *  PROGRAM: Quiz_Answers.cpp
 */

class Answers{
    private:
        int questions[10];

    public:
        int *questionsptr = questions;
        void Answers::getAnswers();
        void Answers::storeAnswers();
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

void Answers::storeAnswers(){
    for (int i = 0; i < 10; i++){

    }
}