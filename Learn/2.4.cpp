#include <iostream>
#include<cmath>
int main2_4() {
	using namespace std;
	double area;
	double side;
	cout << "enter the floor area in qrf,of your home:";//as notice
	cin >> area;
	side=sqrt(area);
	cout<<"that's the equivalent of a square"<< side << "feet to the side"<<endl;
	cout << "how fasinating!" << endl;
	return 0;
}