#include <iostream>
using namespace std;

//class Banana {
//private:
//	string color;
//public:
//	Banana() { color = "green"; }
//	Banana(string fcolor) { color = fcolor; }
//	string getColor() { return color; }
//	void setColor(string fcolor) { color = fcolor; }
//};
//
//int main() {
//	Banana b1;
//	cout << b1.getColor() << endl;
//	b1.setColor("yellow");
//	cout << b1.getColor() << endl;
//	Banana b2("black");
//	cout << b2.getColor() << endl;
//	return 0;
//}

class Apple {
private:
	size_t weight;
	string type;
public:
	Apple() {
		weight = 0;
		type = " ";
	}
	Apple(size_t fweight, string ftype) {
		weight = fweight;
		type = ftype;
	}
	size_t getWeight() { return weight; }
	string getType() { return type; }
	void setWeight(size_t fweight) { weight = fweight; }
	void setType(string ftype) { type = ftype; }
};

int main() {
	Apple a1, a2;
	cout << "Apple 1";
	cout << a1.getType() << endl;
	a1.setType("?");
	cout << a1.getType() << endl;
	
	cout << a1.getWeight() << endl;
	a1.setWeight(0);
	cout << " " << endl;

	cout << "Apple 2";
	cout << a2.getType() << endl;
	a2.setType("yellow");
	cout << a2.getType() << endl;
	
	
	a2.setWeight(10);
	cout << a2.getWeight() << endl;
	return 0;
}