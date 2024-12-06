#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// [Missing Code 1] Write definition of the function findGrade() here.
char findGrade(float score) {
    if (score > 90) {
        return 'A';
    } else if (score > 75) {
        return 'B';
    } else if (score > 60) {
        return 'C';
    } else if (score > 45) {
        return 'D';
    } else {
        return 'F';
    }
}

int main(){

	int N, i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore(); // To ignore the remaining newline character
		// [Missing Code 2] Get name of the i-th students that may include whitespace.
		getline(cin, name[i]);  // Use getline to allow spaces in the name
		cout << "Score of student " << i+1 << ": ";
		// [Missing Code 3] Get score of the i-th students.
		cin >> score[i];
		i++;
	}
	

	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}