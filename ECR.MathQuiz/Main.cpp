
// Math Quiz
// Ethan Rabideau

#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc,char**argv)
{
	srand(time(NULL));
	//cout << argv[0];
	string filepath = "QuizQuestions.txt";
	// load file & questions
	ifstream ifs(filepath);
	string line;
	vector<string> questions;
	while (getline(ifs, line))
	{
		questions.push_back(line);
	}
	ifs.close();

	cout << "Welcome to the Math Quiz! \n";

	//Send the questions
	int answer1 = 0;
	int answer2 = 0;
	int answer3 = 0;
	
	int randomNumber = rand() % 10 + 1;

	cout << questions[randomNumber] << " = ";
	cin >> answer1;

	randomNumber = rand() % 10 + 1;

	cout << questions[randomNumber] << " = ";
	cin >> answer2;
	
	randomNumber = rand() % 10 + 1;

	cout << questions[randomNumber] << " = ";
	cin >> answer3;

	filepath = "StudentAnswers.txt";
	// Open answer save file and save answers
	ofstream ofs;
	ofs.open(filepath);
	ofs << answer1 << "\n" << answer2 << "\n" << answer3;
	ofs.close();

	cout << "Answers Saved!";

	(void)_getch();
	return 0;
}
