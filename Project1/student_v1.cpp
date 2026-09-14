#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student {
public:
	string name;
	double score;
};

double meanScore(int num, Student students[]) {
	double total = 0;
	for (int i = 0; i < num; i++) {
		total += students[i].score;
	}
	double average = total / num;
	return average;
}
double maxScore(int num, Student students[])
{
	double highest = students[0].score;
	for (int i = 1; i < num; i++) {
		if (students[i].score > highest) {
			highest = students[i].score;
		}
	}
	return highest;
}
int main() {
	int num;
	cin >> num;
	Student* students = new Student[num];
	for (int i = 0; i < num; i++) {
		cout << "name:";
		cin >> students[i].name;
		cout << "score:";
		cin >> students[i].score;

	}
	for (int i = 0; i < num; i++) {
		cout << "name:" << students[i].name << " " << "score:" << fixed << setprecision(2) << students[i].score << endl;
	}
	double average = meanScore(num, students);
	double highest = maxScore(num, students);
	cout << "average:" << average << " " << "highest:" << highest << endl;
	delete[]students;
	return 0;
}