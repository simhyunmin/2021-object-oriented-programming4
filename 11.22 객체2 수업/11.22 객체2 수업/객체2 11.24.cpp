//예외처리문

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int number1{ 5 };
//	int number2{ 0 };
//
//	try {
//		if (number2 == 0)
//			throw number2;
//		else
//			cout << number1 / number2 << endl;
//	}
//	catch (int) {                 //throw 문에서 던져진 대상을 사용하고 싶으면 
//		                          //데이터 타입 옆에 어떤 대상으로 받을지를 적으면 된다.
//                                //throw에서 던진 대상의 데이터 타입과 catch문에서 받는 데이터 타입이 다르면 에러 발생
//                                //main 함수 안에서 catch 문을 찾지 못하게 되면 scope를 상위 단계로 올려서 찾게된다.
//                                //전역 영역까지 나가게 되면 내부적으로 terminate()라는 함수가 실행된다.
//                                //terminate() 함수는 abort()라는 함수를 실행해서 프로그램을 종료시킨다.
// 
// 
//		cout << "error: int" << endl;
//	}
//
//	return 0;
//}

//원하는 방식으로 terminate 함수 사용하기 
//#include<iostream>
//using namespace std;
//
//void MyHandier() {
//	cout << "처리되지 않은 예외." << endl;         
//	exit(EXIT_FAILURE);
//}
//
//int main() {
//
//	set_terminate( MyHandier );           //처리문을 만들고 함수에 넣으면 된다.
//
//	int number1{ 5 };
//	int number2{ 0 };
//
//	try {
//		if (number2 == 0)
//			throw number2;
//		else
//			cout << number1 / number2 << endl;
//	}
//	catch (int) {                
// 
//		cout << "error: int" << endl;
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int select;
//
//	try {
//		cin >> select;
//		switch (select) {
//		case 1:
//			throw 1;
//			break;
//		case 2:
//				throw 'a';
//				break;
//		default:
//			throw 1.5;
//			break;
//		}
//	}
//
//	catch (int) {                                    //thorw를 던지고 위에서부터 순서대로 맞는 catch가 있는지 찾는다. 
//		cout << "error : int" << endl;
//		
//	}
//	catch (char) {
//		cout << "error : char" << endl;
//		
//	}
//
//	catch (...) {                     //어떤 타입의 throw이든 다 잡을 수 있다. 
//		cout << "error" << endl;      //
//	}
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//	try {
//		try {
//			throw 1.5;
//		}
//		catch (int a) {                        //double 타입이라서 이쪽 catch에 들어오지 않는다.
//			cout << "inner: " << a << endl;
//		}
//		catch (...) {                           //이쪽으로 들어와서 rethrow 된다.
//			                                    //rethrow이기 때문에 같은 단계에서 더이상 catch문을 찾지 않는다.
//			                                    //바깥쪽 scope에서 catch문이 있는지 찾게 된다.
//			cout << "inner: rethrow" << endl;
//			throw;
//		}
//
//
//	}
//
//	catch (double e) {
//		cout << "outer: " << e << endl;
//	}
//
//	
//
//
//	return 0;
//}


//stack unwinding (스택 풀기)
//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//public:
//	Test() {
//		cout << "생성" << endl;
//	}
//	~Test() {
//		cout << "소멸" << endl;
//	}
//};
//
//void function3() { 
//	Test t1;
//	throw 1; }
//void function2() { function3(); }
//void function1() { function2(); }
//
//int main() {
//
//	try {                                 //현재 이 상태에서 stack에는      f3   throw          이런 형태로 쌓여있는데
//		function1();                      //                                f2                  f3 부분에서 throw를 만나고 catch문을 f3 영역에서 못 찾았을 경우 
//	}                                     //                                f1                  상위 영역으로 올리고 f3과 관련된 모든 stack 부분을 삭제하게 된다.
//	catch (int) {                         //                               main                 그 과정에서 객체가 소멸될 경우 소멸자가 실행된다.
//		cout << "error" << endl;
//	}
//
//
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class MyError {
//private:
//	string message;
//public:
//	MyError(const string& s)
//		:message(s)
//	{
//		cout << "constructor: " << message << endl;
//	}
//	MyError(const MyError& r)
//		:message{ r.message + "(copy)" } {
//		cout << "copy constructor: " << message << endl;
//	}
//	string what() const { return message; };
//	~MyError() {
//		cout << "destructor: " << message << endl;
//
//	}
//};
//
//int main() {
//	try {
//		MyError my{ "MyError!" };
//		throw my;
//	}
//	catch (MyError e) {                      //복사 연산자 두번이나 실행되서 굉장히 무거운 코드이다.
//		cout << e.what() << endl;            //따라서 보통은 catch문에서 예외를 받을 때 pass by value 방식을 사용하지 않음
//	}                                        //const MyError& e 이렇게 참조자 형식으로 하는 것이 좋다.
//	return 0;
//}


//표준 예외 클래스     chapter 17 강의 자료 참고