#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double meanScore(int num, double score[]) {
	double total = 0;
	for (int i = 0; i < num; i++) {
		total += score[i];
	}
	double average = total / num;
	return average;
}
double maxScore(int num, double score[])
{
	double highest = score[0];
	for (int i = 1; i < num; i++) {
		if (score[i] > highest) {
			highest = score[i];
		}
	}
	return highest;
}

class Student {
public:
	string name;
	double score;
};

int main() {
	Student student;
	cin >> student.name;
	cin >> student.score;
	cout << student.name << " " <<fixed<<setprecision(2)<< student.score;



	return 0;
}