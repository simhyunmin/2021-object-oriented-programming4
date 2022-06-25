////휴대폰의 프로그램과 스피드 출력하는 코드
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Software {
//private:
//
//public:
//
//	virtual void getprogram() = 0;
//	virtual double getspeed() = 0;
//
//};
//
//class IPhone : public Software {
//private:
//	char program[50];
//	double speed;
//public:
//	IPhone(const string& word, double _speed) 
//		:speed{ _speed } {
//		word.copy(program, word.length());
//	}
//	virtual void getprogram() {
//		cout << "IPone software" << endl;
//		cout << program;
//	}
//	virtual double getspeed() {
//		return speed;
//	}
//};
//
//class Samsung : public Software {
//private:
//	char program[50];
//	double speed;
//public:
//	Samsung(const string& word, double _speed) 
//		:speed{ _speed } {
//		word.copy(program, word.length());
//	}
//
//	virtual void getprogram(const string& word) {
//		cout << "Samsung software" << endl;
//		cout << program;
//	}
//	virtual double getspeed() {
//		return speed;
//	}
//};
//
//int main() {
//	Samsung s("hisamsung", 34.1);
//	IPhone i("hiIPhone", 19.2);
//
//	return 0;
//}