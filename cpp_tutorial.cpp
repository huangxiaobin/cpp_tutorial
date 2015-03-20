//============================================================================
// Name        : cpp_tutorial.cpp
// Author      : xiaobin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

#include "burrito.h"
#include "sally.h"
#include "people.h"
#include "birth.h"

using namespace std;

void t2() {
	cout << "hello world" << endl;
}

void t3() {
	cout << " boy\n i\n love\n baccon\n" << " and\n ham" << endl;
}

void t4() {
	int a = 4;
	int b = 5;

	int sum = a + b;

	cout << sum << endl;
}

void t5() {
	int a;
	int b;
	int sum;

	cout << "please input a number:";
	cin >> a;
	cout << "please input another number:";
	cin >> b;

	sum = a + b;
	cout << "the sum of the tow number is " << sum << endl;
}

void t6() {
	int tuna = 0;
	tuna = 1;
	cout << tuna << endl;
}

void t7() {
	int x = (4 + 3) * 7;
	cout << x;
}

void t8() {
	if (5 > 4) {
		cout << "bucky is awsome" << endl;
	}

	if (5 == 5) {
		cout << "bucky is awsome" << endl;
	}
}

void printSomeThing() {
	cout << "something is great" << endl;
}

void t9() {
	printSomeThing();
}

void printCap(int x) {
	cout << "Bucky favorate number is " << x << endl;
}

void t10() {
	printCap(10);
	printCap(20);
}

int addNum(int a, int b) {
	return a + b;
}

void t11() {
	cout << addNum(1, 2) << endl;
	cout << addNum(2, 3) << endl;
}

class BuckysClass{
public:
	BuckysClass() {
	}

	BuckysClass(string z) {
		setName(z);
	}

	void setName(string x){
		name = x;
	}

	string getName() {
		return name;
	}

	void sayCool() {
		cout << "something is cool" << endl;
	}

private:
	string name;
};

void t12() {
	BuckysClass buckyObj;
	buckyObj.sayCool();
}

void t13(){
	BuckysClass buckyObj;
	buckyObj.setName("Sir Bucky Wallace");
	cout << buckyObj.getName();
}

void t14(){
	BuckysClass buckyObj("Sir Bucky Wallace");
	cout << buckyObj.getName();
}

void t15() {
	burrito bo;
}

void t16() {
	int x = 10;
	if (x > 1) {
		cout << "omg "<< endl;
	}
}

void t17() {
	int age = 101;

	if (age > 60) {
		cout << "wow you are old" << endl;
		if (age > 100) {
			cout << "why are you still survive" << endl;
		}
	} else {
		cout << "you are young get a job" << endl;
	}
}

void t18() {
	int bacon = 1;

	while(bacon < 20) {
		cout << "bacon is " << bacon << endl;
		bacon++;
	}
}

void t19() {
	int i = 1;
	int number;
	int total = 0;

	while (i < 5) {
		cin >> number;
		total = total + number;
		i++;
	}

	cout << "total is "<< total << endl;
}

void t20() {
	int age;
	int totalAge = 0;
	int number = 0;

	cout << "Enter age or -1" << endl;
	cin >> age;
	while (age != -1) {
		totalAge = totalAge + age;
		number++;
		cout << "Enter age or -1" << endl;
		cin >> age;
	}

	cout << "avreage age is " << totalAge/number << endl;
}

void t21() {
	int x = 10;

	cout << x++ << endl;
	cout << x << endl;

	x += 10;
	cout << x << endl;
}

void t22() {

	for (int i = 0; i < 10; i++) {
		cout << i <<endl;
	}

	for (int j = 0; j < 50; j += 5) {
		cout << j <<endl;
	}
}

void t23() {
	float amount;
	float p = 1000;
	float r = 0.01;

	for (int month = 0; month < 12; month++) {
		amount = p * pow(1+r, month);
		cout << amount << endl;
	}
}

void t24() {
	int x = 0;

	do {
		cout << x << endl;
		x++;
	} while (x < 10);

}

void t25() {
	int age = 21;

	switch (age) {
	case 16:
		cout << "you can drive now" << endl;
		break;
	case 18:
		cout << "go buy a lotto ticket now" << endl;
		break;
	case 21:
		cout << "go buy a cup of beer" << endl;
		break;
	default:
		cout << "sorry you get nothing" << endl;
		break;
	}
}

void t26() {
	int age =23;
	int money = 600;

	if (age >21 && money >500) {
		cout << "you are allowed in" << endl;
	}
}

void t27() {
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		cout << rand()%3 << endl;
	}
}

int volume(int l=1, int w=1, int h=1);
int volume(int l, int w, int h) {
	return l*w*h;
}

void t28() {
	cout << volume(4) << endl;
	cout << volume(4,5) << endl;
	cout << volume(4,5,6) << endl;
}

void printNumber(int x) {
	cout << "i am print a integer " << x << endl;
}

void printNumber(float x) {
	cout << "i am print a float " << x << endl;
}

int tuna = 1;
void t29() {
	int tuna = 2;
	cout << tuna << endl;
	cout << ::tuna << endl;
}

void t30() {
	printNumber(1);
	float a = 1.0;
	printNumber(a);
}

int factorial(int x) {
	if(x == 1) {
		return 1;
	}else{
		return x*factorial(x-1);
	}
}

void t31() {
	cout << factorial(5);
}

void t32() {
	int arr[5] = {1,2,3,4,5};
	cout << arr[4];
}

void t33() {
	int arr[10];

	cout << "elment       value" <<endl;
	for (int i = 0; i < 10; i ++) {
		arr[i] = 99;
		cout << i << "            " << arr[i] << endl;
	}
}

void t34() {
	int sum = 0;
	int arr[] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++) {
		sum = sum + arr[i];
		cout << sum << endl;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}

void t35(){
	int bucky[4] = {1,2,3,4};
	int jessica[5] = {5,6,7,8,9};

	printArray(bucky, 4);
	printArray(jessica, 5);
}

void t36(){
	int sally[2][3] = {{1,2,3},{4,5,6}};

	cout << sally[0][0] << endl;
	cout << sally[0][1] << endl;
	cout << sally[0][2] << endl;
	cout << sally[1][0] << endl;
	cout << sally[1][1] << endl;
	cout << sally[1][2] << endl;
}

void t37(){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	for (int row = 0; row < 2; row++){
		for(int col = 0; col < 3; col++){
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}
}

void t38() {
	int fish = 8;
	cout << &fish << endl;

	int *fishPointer;
	fishPointer = &fish;

	cout << fishPointer << endl;
}

void passByValue(int x) {
	x = 99;
}

void passByReference(int *x) {
	*x = 66;
}

void t39() {
	int betty = 13;
	int sandy = 50;

	cout << "betty is " << betty << endl;
	cout << "sandy is " << sandy << endl;
	passByValue(betty);
	passByReference(&sandy);
	cout << "betty is " << betty << endl;
	cout << "sandy is " << sandy << endl;
}

void t40() {
	char c;
	int i;
	double d;
	int arr[10];

	cout << sizeof(c) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(arr) << endl;
//	cout << sizeof(arr) / arr[0] << endl;
}

void t41() {
	int arr[5];

	int *p0 = &arr[0];
	int *p1 = &arr[1];
	int *p2 = &arr[2];

	cout << p0 << endl;
	cout << p1 << endl;
	cout << p2 << endl;
	p0++;
	cout << p0 << endl;
}

void t42() {
	burrito bo;
	burrito *bop = &bo;

	bo.show();
	bop->show();
}

void t43() {
	sally so;
	cout << "omg" << endl;
}

void t44() {
	sally so;
	so.printRegular();
	const sally constSo;
	so.printConst();
}

void t45() {
	sally so(3,4);
	so.show();
}

void t46() {
	birth day(10,29,2012);
	people li("li", day);
	li.printInfo();
}
class stank{
public:
	stank(){
		stank_var = 0;
	}

	void printInfo() {
		cout << stank_var << endl;
		cout << this->stank_var << endl;
	}

private:
	int stank_var;

	friend void stank_freind(stank &so);
};

void stank_freind(stank &so)
{
	so.stank_var = 99;
	cout << so.stank_var << endl;
}


void t47() {
	stank bob;
	stank_freind(bob);
}

void t48() {
	stank bob;
	bob.printInfo();
}

class cat{
public:
	cat(){
	}

	cat(int a){
		age = a;
	}

	int age;

	cat operator+(cat co) {
		cat new_co;
		new_co.age = age + co.age;
		return new_co;
	}
};

void t50() {
	cat a(1);
	cat b(2);
	cat c(0);

	c = a+b;
	cout << c.age << endl;
}

#include "daughter.h"
#include "mother.h"

void t52() {
	mother mo;
	mo.say_name();
	daughter my_do;
	my_do.say_name();
}

void t53() {
	daughter my_do;
	my_do.print_info();
}

void t54() {
	daughter dina;
}

class enemy {
public:
	void set() {
		cout << "set" << endl;
	}
	virtual void attack(){
		cout << "enemy attack" << endl;
	}
//	virtual void speak(){
//		cout << "enemy speak" << endl;
//	};
	virtual void speak() = 0;
	virtual ~enemy(){}
};

class ninja :public enemy {
public:
	void attack() {
		cout << "ninja attack" << endl;
	}

	void speak() {
		cout << "ninja speak" << endl;
	}
};

class monster :public enemy {
public:
//	void attack() {
//		cout << "monster attack" << endl;
//	}
	void speak() {
		cout << "monster speak" << endl;
	}
};

void t55() {
	ninja n;
	monster m;

	enemy *enemy1 = &n;
	enemy *enemy2 = &m;
	enemy1->set();
	enemy2->set();
	n.attack();
	m.attack();
}

void t56() {
	//enemy e;
	ninja n;
	monster m;

	//enemy *enemy1 = &e;
	enemy *enemy2 = &n;
	enemy *enemy3 = &m;
	//enemy1->attack();
	enemy2->attack();
	enemy3->attack();
}

void t57() {
	ninja n;
	monster m;

	enemy *enemy1 = &n;
	enemy *enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	enemy1->speak();
	enemy2->speak();
}

template <class anytype>
anytype addCrab(anytype x, anytype y) {
	return x+y;
}

void t58() {
	int a = 1, b = 2, c;
	c = addCrab(a, b);
	cout << c << endl;

	double e = 1.001, f = 2.012, g;
	g = addCrab(e, f);
	cout << g << endl;
}

template <class FIRST, class SECOND>
FIRST min(FIRST a, SECOND b) {
	return (a<b?a:b);
}

void t59() {
	int a = 10;
	double b = 9.9999;
	cout << min(b, a) << endl;
}

template <class T>
class bucky{
public:
	bucky(T a, T b) {
		first = a;
		second = b;
	}
	T min() {
		return (first<second?first:second);
	}
private:
	T first;
	T second;

};

void t60() {
	bucky <int> bo(1,2);
	cout << bo.min() << endl;

	bucky <int> bo2(3,4);
	cout << bo2.min() << endl;
}

template <class T>
class spucky{
public:
	spucky(T x) {
		cout << x << " is not the character" << endl;
	}
};

template <>
class spucky <char>{
public:
	spucky(char x) {
		cout << x << " is indeed a character" << endl;
	}
};

void t61() {
	spucky<int> so1(1);
	spucky<double> so2(2.111);
	spucky<char> so3('q');
}

void t62() {
	int momAge = 30;
	int sonAge = 40;

	try{
		if (sonAge > momAge) {
			throw 99;
		}
	}
	catch(int e) {
		cout << "exception number is " << e << endl;
	}
}

void t63() {
	int num1;
	int num2;

	try{
		cout << "enter first number"  << endl;
		cin >> num1;
		cout << "enter second number"  << endl;
		cin >> num2;

		if (num2 == 0) {
			throw 0;
		} else if(num2 == 1) {
			throw 'e';
		}

		cout << num1/num2 << endl;
	}
	catch(int e) {
		cout << "can't devide by " << e << endl;
	}
	catch(...) {
		cout << "catch default exception "<< endl;
	}
}

void t64() {
	ofstream outf;
	outf.open("tuna.txt");

	outf << "hello output file test" << endl;
	outf.close();
}

void t65() {
	ofstream fobj("beef.txt");

	if (fobj.is_open()) {
		cout << "file is open" << endl;
		fobj << "i love beef!!" << endl;
	} else {
		cout << "file is not open" << endl;
	}

	fobj.close();
}

void t66() {
	ofstream outf("player.txt");

	cout << "enter id, name, money" << endl;

	int id;
	string name;
	int money;

	cin >> id >> name >> money;

	outf << id << '\t' << name << '\t' << money << endl;

	outf.close();
}

void t67() {
	ifstream inf("player.txt");

	int id;
	string name;
	int money;

	inf >> id >> name >> money;

	cout << id << '\t' << name << '\t' << money << endl;

	inf.close();
}

int getChoice() {
	int choice;

	cout << "enter your choice" << endl;
	cin >> choice;
	return choice;
}

void display(int x) {
	ifstream inf("account.txt");
	string name;
	int money;
	while(inf >> name >> money) {
		if (money == 0 && x == 1)
			cout << name << '\t' << money << endl;
		if (money > 0 && x == 2)
			cout << name << '\t' << money << endl;
		if (money < 0 && x == 3)
			cout << name << '\t' << money << endl;
	}
}

void t68() {
	int num = 0;
	num = getChoice();
	cout << num << endl;
	display(num);
}

void writeFile() {
	struct accout{
		string name;
		int money;
	};

	accout a = {"Li", 1};

	ofstream outf("test.txt");
	outf.write((char *)&a, sizeof(a));
}

void t71() {
	string s1("hanson");
	string s2;
	string s3;

	s2 = s1;
	s3.assign(s1);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	cout << s1.at(3) << endl;

	for (unsigned int i = 0; i < s1.length(); i++) {
		cout << s1.at(i);
	}
	cout << endl;
}

void t72() {
	string s1 = "welcome to sweden";

	cout << s1.substr(11, 5) << endl;

	string a = "hello";
	string b = "hej";

	cout << a << b << endl;
	a.swap(b);
	cout << a << b << endl;

	string s = "ham is ham , yes i am";

	cout << s.find("am") << endl;
	cout << s.rfind("am") << endl;
	cout << s.find("yes") << endl;
}

void t73() {
	string s = "hi my name is bucky, i love bacon ham";

	cout << s << endl;
	//s.erase(20);
	//s.replace(14, 5, "jacky");
	s.insert(14, "lucky ");
	cout << s << endl;
}

int main() {
	//t2();
	//t3();
	//t4();
	//t5();
	//t6();
	//t7();
	//t8();
	//t9();
	//t10();
	//t11();
	//t12();
	//t13();
	//t14();
	//t15();
	//t16();
	//t17();
	//t18();
	//t19();
	//t20();
	//t21();
	//t22();
	//t23();
	//t24();
	//t25();
	//t26();
	//t27();
	//t28();
	//t29();
	//t30();
	//t31();
	//t32();
	//t33();
	//t34();
	//t35();
	//t36();
	//t37();
	//t39();
	//t40();
	//t41();
	//t42();
	//t43();
	//t44();
	//t45();
	//t46();
	//t47();
	//t48();
	//t50();
	//t52();
	//t53();
	//t54();
	//t55();
	//t56();
	//t57();
	//t58();
	//t59();
	//t60();
	t61();
	//t62();
	//t63();
	//t64();
	//t65();
	//t66();
	//t67();
	//t68();
	//writeFile();
	//t71();
	//t72();
	//t73();
}
