//���ڿ� ���� strcpy �Լ� 
//#define _CRT_SECURE_NO_WARNINGS
////visual studio���� strcpy�� ������ ����ϱ� ������ ������ ��� ���Ѵٰ� �����ؾ���.
//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char source[10] = "gusal s";
//	char dest[10];
//	strcpy(dest, source);   
//	//�� ���ڱ��� �����ؼ� ������
//	//�������� ����Ǵ� ��� ������ ���� ���� ���� ��
//	
//	cout << dest << endl;
//
//
//	return 0;
//
//}

//strcpy ���� ��Ȳ
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//int main() {
//	char source[10] = "simh yunm";
//	char dest[5];
//	strcpy(dest, source);    //���� ����������, ũ�� �˻縦 ���� =>���� ���
//	cout << dest << endl;
//
//
//	
//
//
//	return 0;
//
//}

//strncpy 
//n ���ڸ�ŭ ũ�� ����
//strcpy�� ��ü���ش�.
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main() {
//
//	char source[10] = "dlwlrma";
//	/*char dest[10];*/
//	char dest[10]{};  //�� ���� �ֱ� ������ ���� �� �̷��� �ʱ�ȭ ���ָ� �ڵ����� �迭 �ȿ� �� ���ڰ� ä������.
//	strncpy(dest, source, 5);
//	/*dest[7] = '\0'; */       //���� �߱� ������ �������� �� ���� �־������.(��), 
//	cout << dest << endl;     //�� strcpy ó�� ���ڿ� ��ü�� �����ϴ� ��쿡�� ���ڿ� ��ü�� �����ϱ� ������ �������� �� ���ڱ��� ����.
//	                          //�Ϻθ� �������� ���� strncpy�� ����ϴ� ��쿡�� �������� �� ���ڸ� �� �־������.
//	return 0;
//}
 
 
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main() {
//	char source[10] = "dlwlrma";
//	char dest[10]{};
//	strncpy(dest, source, 7);
//	cout << dest << endl;
//	strncpy(dest, "wook.", 5);     //�ѹ� �� ������ ��쿡�� �� ���ڸ� ���� �־��ְų� �ؾ���
//	/*dest[5] = '\0';*/
//	cout << dest << endl;
//
//	return 0;
//}

//strcpy_s
//c++ ������ ǥ���� �ƴϴ�.

//
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main() {
//
//	char source[10] = "dlwlrma";
//	char dest[10];
//
//	strcpy_s( dest, sizeof(dest), source );    //ũ�� �˻縦 �ϰ� �ȴ�.
//	                                 //�߰��� 10�� dest ���� ������ ũ���̴�.
//	cout << dest << endl;
//	return 0;
//}

//stream manipulators
// 
//-floating-point (precision, setprecision)
//�ε� �Ҽ��� ǥ�ù�
// //�� ���� ����� �ִ�.
//cout << setprecision(5)
//cout.precision(5)
//������ �������� �� ū ���ڸ� �Է¹޾��� �� �ݿø����ش�.
//�ѹ� �����ϸ� ���� �ڵ忡�� ����ȴ�(sticky)

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	double a = 34.5678;
//
//	cout<< setprecision(4) << a << endl;
//
//	return 0;
//}

//-floating-point (scientific, fixed)
//���� �Ҽ��� ǥ�� ���
//1.234x10^6 -> 1.234e6
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//
//int main() {
//	double pow2{ pow(10, 2) };
//	double root2{ sqrt(2.0) };
//
//	cout << fixed;
//
//	for(int places{ 0 }; places <= 9; ++places) {
//		cout.precision(places);                    //����Լ� ����
//		cout << root2 << endl;
//	}
//	cout << endl;
//
//	for (int places{ 0 }; places <= 9; ++places) {            //manipulators ����
//		cout << setprecision(places) << root2 << endl;
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	double x{ 0.001234567 };  
//	double y{ 1.946e9 };
//
//	cout << x << " " << y << endl;
//	cout << scientific << x << " " << y << endl;
//	cout << fixed << x << " " << y << endl;             //�⺻ precision ���� 6�̱� ������
//	                                                    //�Ҽ��� �Ʒ� 6������ ǥ��
//
//	return 0;
//}

//fixed �������
//cout.unsetf(ios::fixed); 
//scientific�� �Ȱ��� �����ؼ� ����

//floating-point ���е� 
//15~18������ ���е��� �����ش�
//visual studio�� 16
//�Ǽ� Ÿ���� ����Ȯ�� �� �ִ�.
//#include<iostream>
//using namespace std;
//
//int main() {
//	cout << 0.1 << endl;
//	cout.precision(17);
//	cout << 0.1 << endl;
//	cout << 0.1 * 0.1 << endl;
//
//	return 0;
//}

//field width (width, setw)
//width�� stream ��ü�� ��� �Լ��� �۵��ϰ�
//setw�� manipulator�μ� �۵��Ѵ�. 
//���Ŀ� ������ �ڵ忡 ������ ��ġ�� �ʰ� 
//�ٷ� ������ ������ �ڵ忡�� ������ ��ģ��.(sticky���� �ʴ�.)
//��º�
//������ ��Ƴ��� ���ڸ� ���
//������ ������ padding���� ä������.

//�Էº�
//�ִ�� �Է¹��� �� �ִ� ������ ��´�.
//char array ��쿡�� �ѱ��� ���� �������� �Է� ����(null���� ������)

//#include<iostream>
//using namespace std;
//
//int main() {
//	int widthValue{ 4 };
//	char sentence[10];
//
//	cin.width(5);
//
//		while (cin >> sentence) {
//			cout << "����" << endl;
//			cout.width(widthValue++);
//			cout << sentence << endl;
//			cin.width(5);
//		}
//
//	return 0;
//}

//������ �������� �� ū ���ڿ��� ����� �� 
//������ �����ϰ� ���ڿ��� �����.
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	cout.width(5);
//	cout << "lee" << setw(7) << "wook" << endl;
//	cout.width(5);
//	cout << "dlwlrma" << setw(7) << "wook" << endl << endl;  //������ �����ϰ� ���ڿ��� �����.
//
//	char str[10];
//	cin >> setw(5) >> str;
//	cout << str << endl;
//	cin >> setw(5) >> str;
//	cout << str << endl;
//	cin >> setw(5) >> str;
//	cout << str << endl;
//
//	return 0;
//}

//justification (left, right, internal)

//internal
//��ȣ�� ������ ���ʿ� ǥ��
//����� padding���� ä���.

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//
//	cout << internal <<showpos<< setw(10) << 123 << endl; //��� ��ȣ ����ϱ� ���� showpos 
//	
//
//
//	return 0;
//}


//integral base (dec, oct, hex, setbase)
//���Ŀ� ������ �ڵ忡�� ����ȴ�(sticky)
//setbase�� ���� �������� 

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	int number;
//	cin >> number;
//
//	cout << number << " " << hex << number << endl;
//	cout << number << " " << oct << number << endl;
//	cout << showbase << number << endl;
//	cout << noshowbase;
//	cout << setbase(10) << number << " " << number << endl;
//	
//	return 0;
//}

//showbase
//�� ���� �������� �˷��ش�.
//8������ �տ� 0
//16������ �տ� 0X�� ���δ�
//�����ҷ��� noshowbase 

//padding (fill, setfill)
//��� �Լ� ���·� cout.fill('*')
//manipulator ���·� cout << setfill('*')

//showpoint, noshowpoint 
//�� �������� ���� 0�� �����ش�.
//ex) 79.0�� ����ϸ� 0�� �ǹ̰� ���� ������ ��� �������� showpoint�� �����ϸ�
//79.0���� ���´�. 
//�Ҽ��� 

//#include<iostream>
//using namespace std;
//
//int main() {
//	double a = 7.000000;             //precision �⺻ ������ 6�̱� ������ �� ���� �����ϰ� 5������ ����Ѵ�. 
//	cout << a << endl;
//	cout << showpoint << a << endl;
//
//	return 0;
//}

//uppercase
//���� ���� ���ڸ� �빮�ڷ� ����ϴ� ������
//���� ǥ���� �� ���ĺ��� �ҹ����̱� ������ �̸� �빮�ڷ� �ٲ��ִ� ��쿡 ���δ�.

//boolalpha, noboolalpha
//bool ���� true, false�� �Է��� �� �ְ� ���ִ� ������ 
//#include<iostream>
//using namespace std;
//
//int main() {
//	bool a;
//	cin>>boolalpha >> a;
//
//	if (a) {
//		cout << "true" << endl;
//	}
//	else {
//		cout << "false" << endl;
//	}
//
//	return 0;
//}

//����� ���� manipulators
//���� Ÿ�� ostream& ���� �ؾ��Ѵ�.


//#include<iostream>
//using namespace std;
//
//ostream& bell(ostream& output) {
//	return output << '\a';
//}
//
//ostream& carriageReturn(ostream& output) {
//	return output << '\r';
//}
//ostream& tab(ostream& output) {
//	return output << '\t';
//}
//ostream& endLine(ostream& output) {
//	return output << '\n' << flush;
//}
//
//
//int main() {
//	cout << "Testing the tab manipulator:" << endLine
//		<< 'a' << tab << 'b' << tab << 'c' << endLine;
//	cout << "Testing the carriageReturn and bell manipulators:"
//		<< endLine << ".........";
//
//	cout << bell;
//
//	cout << carriageReturn << "-----" << endLine;
//
//}