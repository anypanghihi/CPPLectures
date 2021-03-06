/*
	File name: basicDestruct.cc
	Author: Geun-Hyung Kim
*/

#include <iostream>
using namespace std;

class Person{
private:
	string name;
	int age;
public:
	~Person();
	void setName(string n) { name = n;}
	void setAge(int a) { age = a;}
	void show() {
		cout << name << ", " << age << endl;
	}
};

Person::~Person() {
	cout << "소멸자 호출" << endl;
}

int main(int argc, char const *argv[])
{
	Person s;  // 컴파일러가 자동 생성한 기본 생성자 호출 
	s.setName("Chul-soo Lee");
	s.setAge(20);
	s.show();
	return 0;
}