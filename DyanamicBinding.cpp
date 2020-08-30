#include <iostream>
using namespace std;

class A {
public:
	virtual void test() {
		cout << "I am in A class";
	}

};

class B : public A {
public:
	void test() {
	 cout << "I am in B class";
	}
};

int main(){
	A *a = new B();
	a->test();
}