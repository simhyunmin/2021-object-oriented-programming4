//����ó����

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
//	catch (int) {                 //throw ������ ������ ����� ����ϰ� ������ 
//		                          //������ Ÿ�� ���� � ������� �������� ������ �ȴ�.
//                                //throw���� ���� ����� ������ Ÿ�԰� catch������ �޴� ������ Ÿ���� �ٸ��� ���� �߻�
//                                //main �Լ� �ȿ��� catch ���� ã�� ���ϰ� �Ǹ� scope�� ���� �ܰ�� �÷��� ã�Եȴ�.
//                                //���� �������� ������ �Ǹ� ���������� terminate()��� �Լ��� ����ȴ�.
//                                //terminate() �Լ��� abort()��� �Լ��� �����ؼ� ���α׷��� �����Ų��.
// 
// 
//		cout << "error: int" << endl;
//	}
//
//	return 0;
//}

//���ϴ� ������� terminate �Լ� ����ϱ� 
//#include<iostream>
//using namespace std;
//
//void MyHandier() {
//	cout << "ó������ ���� ����." << endl;         
//	exit(EXIT_FAILURE);
//}
//
//int main() {
//
//	set_terminate( MyHandier );           //ó������ ����� �Լ��� ������ �ȴ�.
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
//	catch (int) {                                    //thorw�� ������ ���������� ������� �´� catch�� �ִ��� ã�´�. 
//		cout << "error : int" << endl;
//		
//	}
//	catch (char) {
//		cout << "error : char" << endl;
//		
//	}
//
//	catch (...) {                     //� Ÿ���� throw�̵� �� ���� �� �ִ�. 
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
//		catch (int a) {                        //double Ÿ���̶� ���� catch�� ������ �ʴ´�.
//			cout << "inner: " << a << endl;
//		}
//		catch (...) {                           //�������� ���ͼ� rethrow �ȴ�.
//			                                    //rethrow�̱� ������ ���� �ܰ迡�� ���̻� catch���� ã�� �ʴ´�.
//			                                    //�ٱ��� scope���� catch���� �ִ��� ã�� �ȴ�.
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


//stack unwinding (���� Ǯ��)
//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//public:
//	Test() {
//		cout << "����" << endl;
//	}
//	~Test() {
//		cout << "�Ҹ�" << endl;
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
//	try {                                 //���� �� ���¿��� stack����      f3   throw          �̷� ���·� �׿��ִµ�
//		function1();                      //                                f2                  f3 �κп��� throw�� ������ catch���� f3 �������� �� ã���� ��� 
//	}                                     //                                f1                  ���� �������� �ø��� f3�� ���õ� ��� stack �κ��� �����ϰ� �ȴ�.
//	catch (int) {                         //                               main                 �� �������� ��ü�� �Ҹ�� ��� �Ҹ��ڰ� ����ȴ�.
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
//	catch (MyError e) {                      //���� ������ �ι��̳� ����Ǽ� ������ ���ſ� �ڵ��̴�.
//		cout << e.what() << endl;            //���� ������ catch������ ���ܸ� ���� �� pass by value ����� ������� ����
//	}                                        //const MyError& e �̷��� ������ �������� �ϴ� ���� ����.
//	return 0;
//}


//ǥ�� ���� Ŭ����     chapter 17 ���� �ڷ� ����