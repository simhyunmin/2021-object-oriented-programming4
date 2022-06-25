//Introduction to Custom Templates

//�Լ� �����ε�
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
//	//cout << add(2.1, 3) << endl;    ��� ���ϴ� �κ�
//
//	return 0;
//}

//function template
//�����ε��� �����

//#include<iostream>
//using namespace std;
//
//template<typename T1, typename T2>   //�Լ� ���Ǻ� ���� template�� �����ش�
//double add(T1 num1, T2 num2) {       //������ ������ Ÿ�ӿ� ���� T1�� int�� �Ǽ� int num1�� ����ų� 
//	                                 //double�� �Ǽ� double num1�� ����� 
//	                                 //�����ε��� �����Ѵ�.
//	return num1 + num2;				 //�����Ϸ� �ð��� ���ڰ� ������ �Լ��� ��� �����ؼ� �����ε��� �����ϰ� �ȴ�.
//}                                    //add(int, int), add(double, double), add(double, int)
//
//
////template <typename T>              //���ø��� �����ε��� �ȴ�.
////T add(T num1, T num2) {            //�������κ��� �޴� �� ���ڰ� ���� ������ Ÿ���� �� ����ȴ�.
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


//���ø�

//����: �����ϴ�, ��ȣ��x, ����ð� �̵�

//����: ������ �ð��� �þ��, �ڵ� ũ�Ⱑ Ŀ����(���� ������ Ŀ����),������� �����
//      �ڵ� ���� �����, ȿ���� ��������. 



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
//	Array<int> arr{ 5 };       //<> �ȿ� ������ template�� ���޵ȴ�.
//	cout << arr.getSize() << endl;
//
//
//
//
//	return 0;
//}

//template <typename T, int arraySize> �� ���� template �ȿ� ��� ������ ������ ���� �ִ�.
//class Array

//type inference (function template)
//Ÿ�� �߷�

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
	cout << add<double>(2.1, 3.1) << endl;    //������ Ÿ���� ��������������
	cout << add<double, int>(2.1, 3) << endl; //Ÿ���� ��þ��ϰ� add(2, 3) �̷������� ��� �ڿ� �ִ� ���ڵ��� �������� �߷��Ѵ�.




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