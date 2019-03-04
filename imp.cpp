#include <iostream>
#include "Student.h"

using namespace std;

int student :: counter = 0;

student :: student(){ //Constructor
	counter++;
	ID = counter;
	quizCapacity = 3;
	quizscore = new float [quizCapacity];
	for (int i = 0; i < quizCapacity; i++){
		quizscore[i] = 0;
	}
	quizTaken = 0;
	GPA = 0;
}

//Constructor with parameters
student :: student (int qc, float gpa){
	 ID = counter;
	 quizCapacity = qc;
	 quizTaken = 0;
	 quizscore = new float [quizCapacity];
	 for (int i = 0; i < quizCapacity; i++){
		quizscore[i] = 0;
	 }
	 GPA = gpa;
 }

//Copy Constructor
student :: student (const student & a){ 
	counter = a.counter;
	ID = a.ID;
	quizCapacity = a.quizCapacity;
	quizTaken = a.quizTaken;
	quizscore = new float[a.quizCapacity];
	for (int i =0; i< quizTaken; i++){
		quizscore[i] = a.quizscore[i];
	}
	GPA = a.GPA;
}

student :: ~student (){ //Destructor
	counter = -1;
	ID = -1;
	for (int i=0; i < quizTaken; i++){
		quizscore[i] = -1;
	}
	delete [] quizscore;
	quizCapacity = -1;
	quizTaken = -1;
	GPA =-1;
}

//This function will add a new quiz score
void student :: addQuizScore(float score){ 
	if (quizCapacity > quizTaken && quizscore != nullptr){
		quizscore[quizTaken] = score;
		quizTaken++;
	}
	else {
		cout << "No more scores can be added" << endl;
	}
}


void student :: setGPA(float g){ //Setter function for GPA
	GPA = g;
}
float student :: getGPA() const{ //Getter function for GPA
	return GPA;
}

void student :: print() const{ //Printing function
	cout << "ID: " << ID << endl;
	cout << "No. of quiz taken: " << quizTaken << endl;
	cout << "Score of each quiz: " << endl;
	for (int i=0, c=1; i < quizTaken; i++, c++){
		cout << c << " :" << quizscore[i] << endl;
	}
	cout << "GPA of student: " << GPA << endl;
	cout << endl;
}

bool student :: compare (student a){ // Compares 2 GPA's
	if  (GPA > a.GPA){
		return true;
	}
	else {
		return false;
	}
}

//This function will update scores
void student :: updateScore(int quizNumber, float score){ 
	if (quizscore != nullptr && quizNumber < quizCapacity && quizNumber < quizTaken+1){
		quizscore[quizNumber - 1] = score;
	}
	else {
		cout << "Quiz " << quizNumber << " is not taken" << endl;
	}
}
