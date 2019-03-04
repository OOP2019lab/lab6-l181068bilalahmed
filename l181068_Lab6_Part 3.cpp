#include <iostream>
#include "Student.h"

using namespace std;

void printStudentArray(student arr[], int size) {
	for (int i = 0; i < size; i++)
		arr[i].print();
}

//Function to return array of only student objects with GPA's higher then 2
student* GetGPAabove2(student arr[], int size) {
	int count = 0;
	student *temp = new student[count];
	for (int i = 0; i < size; i++) {
		if (arr[i].getGPA() > 2) {
			count++;
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i].getGPA() > 2) {
			temp[i] = arr[i];
		}
	}
	return temp;
}

//My Swap function to support sorting function
void MySwap(student &a, student &b) {
	student temp;
	temp = a;
	a = b;
	b = temp;
}
//Function to sort the array
void SortArr(student arr[], int size) {
	for(int i = 0; i < size-1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j].getGPA() < arr[j + 1].getGPA()) {
				MySwap(arr[j], arr[j + 1]);
			}
			else {}
		}
	}
}

int main() {
	//Constructor was invoked when the fisrt student object was created, it was created for all elements of the object

	//Declaring array of students
	student arr[3] = { student(3, 2.0) , student(3, 3), student(4, 2.33) }; 
	arr[0].addQuizScore(1);
	arr[0].addQuizScore(4);
	arr[0].addQuizScore(10);

	arr[1].addQuizScore(10);
	arr[1].addQuizScore(4);
	arr[1].addQuizScore(9);
	
	arr[2].addQuizScore(9);
	arr[2].addQuizScore(8);
	arr[2].addQuizScore(7);

	//printStudentArray(arr, 3);

	//New dynamic array of students
	student** arr2 = new student*[4]; 
	arr2[0] = new student(3, 2);
	arr2[1] = new student(3, 3);
	arr2[2] = new student(4, 2.33);
	arr2[3] = new student(4, 1);

	arr2[0]->addQuizScore(1);
	arr2[0]->addQuizScore(4);
	arr2[0]->addQuizScore(10);

	arr2[1]->addQuizScore(10);
	arr2[1]->addQuizScore(4);
	arr2[1]->addQuizScore(9);

	arr2[2]->addQuizScore(9);
	arr2[2]->addQuizScore(8);
	arr2[2]->addQuizScore(7);

	arr2[3]->addQuizScore(2);
	arr2[3]->addQuizScore(3);

	system("pause");
	//Destructor was invoked at the end of the main block for each element of each object type, it is triggered by the ending bracket
}