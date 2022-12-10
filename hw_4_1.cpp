#include <iostream>
#include <string.h>

using namespace std;

class Calculator {
	public:
	string str;
	int x1;	
	int x2;
	double result;
	
	void run() {
		
		cout<<"Enter your operation: ";
		cin>>str;
		cin>>x1;
		cin>>x2;
		if(str=="subtract") {
			result=x1*x2;
			
		}
		else if(str=="add") {
			result=x1+x2;
		}
		else if(str=="multiply") {
			result=x1-x2;
		}
		else if(str=="divide") {
			result= (double)x1/x2;
			
		}
		
	}
	

};
int main() {
	
	Calculator d1;
	d1.run();
	cout<<"Result: "<<d1.result;
	
	
	
	
	return 0;
}
