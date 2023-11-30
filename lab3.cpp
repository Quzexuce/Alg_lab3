#include <iostream>
#include <fstream>
#include <string>
#include <math.h> 
using namespace std;
 
class Lab3 
{
public:
 
	void massive() {
		for (int i = 0; i <= 10; i++)
		{
			mass_x[i] = i - 5;
			mass_y[i] = autofunc(i - 5);
		}
	}
 
	void write() {
 
		ofstream out;
		out.open("text.txt");
 
		for (int i = 0; i <= 10; i++)
		{
			string filestring{ "X:= " + to_string(mass_x[i]) + "\t Y: = " + to_string(mass_y[i])};
 
			out << filestring << endl;
		}
 
		out.close();
	}
 
	void read() {
		ifstream in("text.txt");
		string line;
		while (getline(in, line)) cout << line << endl;
	}
 
private:
 
	int mass_x[11] = {};
	int mass_y[11] = {};
 
	double autofunc(double x) {
		double y = 0;
	    if (x<-3) y= 1;
        else if (x<-1) y = -sqrt(4-pow((x+1),2));
        else if (x<2) y = -2;
        else y = x-4;
		return y;
	}
};
  
int main() {
 
	Lab3 test;
 
	test.massive();
	test.write();
	test.read();
 
	return 0;
}
