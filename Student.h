class student {
private:
	static int counter;
	int ID;
	float *quizscore;
	int quizCapacity;
	int quizTaken;
	float GPA;
public:
	student();
	student(int, float);
	student(const student &);
	~student();

	void addQuizScore(float);
	void setGPA(float);
	float getGPA() const;
	void print () const;
	bool compare(student);
	void updateScore (int, float);
};