#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double meanScore(int num,double score[]) {
	double total = 0;
	for (int i = 0; i < num; i++) {
		total += score[i]; 
	}
	double average = total / num;
	return average;
}
double maxScore(int num,double score[])
{ double highest = score[0];
for (int i = 1; i < num; i++) {
	if (score[i] > highest) {
		highest = score[i];
	}
}
return highest; 
}
int main() {
	int num;
	cin >> num;
	string *name = new string [num];
	double* score = new double [num];
	for (int i = 0; i < num; i++) {
		cout << "name   score";
		cin >> name[i] >>score[i];
	}
	double average = meanScore(num, score);
	double highest = maxScore(num, score);
	for (int i = 0; i < num; i++) {
		cout << name[i] << " "<<fixed << setprecision(2) << score[i] << endl;
	}
	cout << "average score:" << average << endl;
	cout << "highest score:" << highest << endl;
	delete[]name;
	delete[]score;
	return 0; 
}