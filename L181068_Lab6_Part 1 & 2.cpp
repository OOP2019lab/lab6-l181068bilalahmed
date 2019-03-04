#include <iostream>
#include "Student.h"

using namespace std;

int main(){ // Construcor is invoked when the first object is created, it is invoked for each element of the object
	student s1; //Declaring s1 using normal const
	s1.addQuizScore(10);
	s1.addQuizScore(3);
	s1.addQuizScore(7);


	student s2 (4, 2); // Declaring s2 using constructor with parameters
	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);


	student s3(s1); //Declaring s3 using copy constructor
	s3.updateScore(1, 3);

	s1.compare(s2); // vool function that compares s1 and s2 gpas
	s3.setGPA(3);
	
	
	s3.print();
	s1.print();
	system ("pause");
	//Destructor is invoked at the end of the main block, it is triggered by the ending bracket
}
