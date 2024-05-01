// inheritance allows a new class to be based on an existing class.
// derived class is inherited all the member variables and functions expect the constructor 
// and destructor of the base class

// inheritance and the  "is a"  relationship 
// "derived class"  is a "base class"
//       car        is a   vehicle
//     truck        is a   vehicle
//     tree         is a    plant
//    poddle        is a     dog
//  labrador        is a    dog

#include<iostream>
#include<iomanip>
using namespace std;
    
    class GradedActivity{
        private:
        double score;
        public:
        GradedActivity()          // Default Constructor               
        {
             score = 0.0; 
        }
        GradedActivity(double s)  // constructor
        {
            score = s;
        } 
        void setScore(double s)   // mutator setter
        {
            score=s;
        }
        double getScore() const  // accessor getter marked with const
        {
            return score;
        }
        char getLetterGrade() const;
    };
    char GradedActivity::getLetterGrade() const
    {
        char LetterGrade;
        if (score>89)
        LetterGrade='A';
        else if (score>79)
        LetterGrade='B';
        else if (score>69)
        LetterGrade='C';
        else if (score>59)
        LetterGrade='D';
        else 
        LetterGrade='F';

        return LetterGrade;
       
    }
    class FinalExam : public GradedActivity  //final exam is a gradedactivity.   final exam is aderived classb from base class GradedActivity and it have all the characteristics of Graded activity and plus more
    {
        private:
        int numQuestions;    //number of questioms
        double pointsEach;   //points for each question
        int nummissed;       //number of question missed
       public:
       FinalExam() {
        numQuestions = 0;
        pointsEach=0.0;
        nummissed=0;
       }
       FinalExam(int questions , int missed){set(questions , missed);}
       void set (int ,int );
       double getNumQuestions() const{
        return numQuestions;
       }
       double getPointsEach() const 
       {
       return pointsEach; 
       }
       int getnumMissed() const{
        return nummissed;
       }
    };
void FinalExam::set(int questions ,int missed){
    double numericScore;
    numQuestions=questions;
    nummissed=missed;
    pointsEach=100.0/numQuestions;
    numericScore=100.0-(missed*pointsEach);
    setScore(numericScore);
}    

int main (){
    int questions;
    int missed;

    cout<<"how many questions where there";
    cin>>questions;
    cout<<"how many question did student missed";
    cin>>missed;

    FinalExam test(questions , missed) ;
    
    cout<<setprecision(2);
    cout<<"\nEach question counts "<<test.getPointsEach()
    <<" points. \n";
    cout<<"the exam score is "<< test.getScore()<<endl;
    cout<<"the exam grade is "<< test.getLetterGrade()<<endl;
return 0;
}