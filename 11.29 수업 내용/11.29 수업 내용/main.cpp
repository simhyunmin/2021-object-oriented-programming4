//Introduction to Custom Templates

//함수 오버로딩
//#include<iostream>
//using namespace std;
//
//int add(int num1, int num2) {
//	return num1 + num2;
//}
//
//double add(double num1, double num2) {
//	return num1 + num2;
//}
//
//int main() {
//	cout << add(2, 3) << endl;
//	cout << add(2.1, 3.1) << endl;
//	//cout << add(2.1, 3) << endl;    사용 못하는 부분
//
//	return 0;
//}

//function template
//오버로딩과 비슷함

//#include<iostream>
//using namespace std;
//
//template<typename T1, typename T2>   //함수 정의부 위에 template을 적어준다
//double add(T1 num1, T2 num2) {       //들어오는 인자의 타임에 따라 T1이 int가 되서 int num1을 만들거나 
//	                                 //double이 되서 double num1을 만들어 
//	                                 //오버로딩을 구현한다.
//	return num1 + num2;				 //컴파일러 시간에 인자가 적절한 함수를 모두 구현해서 오버로딩을 구현하게 된다.
//}                                    //add(int, int), add(double, double), add(double, int)
//
//
////template <typename T>              //템플릿도 오버로딩이 된다.
////T add(T num1, T num2) {            //메인으로부터 받는 두 인자가 같은 데이터 타입일 때 실행된다.
////	return num1 + num2;
////}
//
//
//int main() {
//	cout << add(2, 3) << endl;
//	cout << add(2.1, 3.1) << endl;
//	cout << add(2.1, 3) << endl;
//
//
//
//	return 0;
//}


//템플릿

//장점: 간결하다, 모호성x, 실행시간 이득

//단점: 컴파일 시간이 늘어난다, 코드 크기가 커진다(실행 파일이 커진다),디버깅이 어려움
//      코드 이해 어려움, 효율이 떨어진다. 



//class template

//#include<iostream>
//using namespace std;
//
//template <typename T>
//class Array {
//private:
//	T* ptr = nullptr
//		int arraySize = 0;
//public:
//	explicit Array(int size) : arraySize{ size } {
//		ptr = new T[arraySize];
//	}
//	int getSize() const {
//		return arraySize;
//	}
//	~Array() {
//		delete[] ptr;
//	}
//};
//
//int main() {
//
//	Array<int> arr{ 5 };       //<> 안에 내용이 template에 전달된다.
//	cout << arr.getSize() << endl;
//
//
//
//
//	return 0;
//}

//template <typename T, int arraySize> 와 같이 template 안에 멤버 변수를 선언할 수도 있다.
//class Array

//type inference (function template)
//타입 추론

#include<iostream>
using namespace std;

template<typename T1, typename T2>
double add(T1 num1, T2 num2) {
	return num1 + num2;
}

template <typename T>
T add(T num1, T num2) {
	return num1 + num2;
}


int main() {

	cout << add(2, 3) << endl;
	cout << add<double>(2.1, 3.1) << endl;    //원래는 타입을 명시해줘야하지만
	cout << add<double, int>(2.1, 3) << endl; //타입을 명시안하고 add(2, 3) 이런식으로 적어도 뒤에 있는 인자들을 바탕으로 추론한다.




	return 0;
}


//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//
//
//	return 0;
//}