#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Emlployee {
	public:
	string name;
	int years;
	double salary;
	double bonus;
	
	double calculateBonus(int x, int y) {
		if(x<=5) {
			return 0;
		}
		else if (5<x && x<=10) {
			return (y/20);
		}
		 
		 else if (10<x && x<15) {
			return (y/10);
		}
		else if (15<x && x<20) {
			return ((y*15)/100);
		}
		 else if (20<x) {
			return (y/5);
		}
	}
	void print() {
		
		cout<<name<<setw(17-name.size())<<years<<setw(17)<<salary<<setw(17)<<bonus<<endl;
	}
	void setName(string str) {
		name=str;
	}
	void setYears(int yea) {
		years=yea;
	}
	void setBonus( int bon) {
		bonus=bon;
	}
	void setSalary(double slr) {
		salary=slr;
	}
	string getName() {
		return name;
	}
	
	
};

int main() {
	int i=4;
	int bonn;
	double sal;
	double ye;
	string str;
	Emlployee emp[4];
	for(i=0;i<3;i++) {
		cout<<"Enter employee name, employed years and salary: ";
		cin>>str>>ye>>sal;
		emp[i].setName(str);
		emp[i].setYears(ye);
		emp[i].setSalary(sal);
		bonn=emp[i].calculateBonus(ye,sal);
		emp[i].setBonus(bonn);
	}
	cout<<"Name          "<<"Years"<<setw(15)<<"Salary"<<setw(17)<<"Bonus"<<endl;
	for(i=0;i<3;i++) {
		emp[i].print();
	}
	

	return 0;
}
