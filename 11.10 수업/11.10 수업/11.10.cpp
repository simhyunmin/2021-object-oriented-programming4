//File Processing
//������ ����� ���Ͽ� �����ϰų� ���Ϸκ��� �о���� ���� ���
//ex) ofstream out{"���ϰ��", ���}
//cin, cout�� �����ϴ� ��ü�� �������� 
//out<<
//istream, ostream, iostream ���� ����� �޾� ��������� ������ 
//cin, cout ���� ������ ����Լ����� ��κ� ����� �� �ִ�.

//ifstream in{"���ϰ��", ���}
//in>>

//�� ���� input, output�� ���� �ϳ����� ���ÿ� ����ϱ� ���ؼ� fstream�� ����ϱ⵵ �Ѵ�.

//File Processing�� ���������� ���
//�ٷ���� File�� 2���̻��̶�� ����������.
//console�� �ٸ��� Ŀ�� ��ġ�� ���ؼ��� ���� ������� �����ϱ� ������ �����ϴ�.

//�� ���� ����� �ִ�.
//���� (����) ����
//���� ���� ����   //Ŀ�� ��ġ�� ���� �а� ����� ��.

//input output�� ���õ� Ŭ������ ��� ������ (chapter 14 pdf p3 Ȯ��)
//-sequential file
//oftream ��ü
//������ output ���� ������
//ofstream out {"���ϰ��", ���};
//���ϰ�� => ���+�̸� �̶�� �����ϸ� �ȴ�.
//�̸��� ���ԵǸ� ���� �ҽ��ڵ尡 ����ִ� ���� ��ο� ����ȴ�.
//ex) "d://test//test.txt"    or  "d://test.txt"
 
//mode 2������ �ִ�.
//ios::out    //�⺻ ���
//������ Overwrites �Ѵ�. //������ test ������ ���� �� out���� test�� ����� ������ test�� ����� ���� �����.
//ios::app   

//��ü�� ����� ������ ���� �ʰ� ���߿� ��� �������.
//ofstream outclientFile;
//outclientFile.open("dlients.dat", ios::out); �̷�������

//��ü�̸�.close() ������ �ݾ��ش�. (��)
//���Ͽ� ����Ǵ� ���� flush�� �����ų� ũ�Ⱑ �� ���� �� �׷� ��쿡�� ���Ͽ� ����Ǵµ�
//flush�� �������� �ʾҰ� ũ�⵵ �� �� ���°� �ƴ� ä�� �ڵ尡 ������ ���Ͽ� ����� �ȵȴ�.
//���� �ڵ� ������ ���� close�� �ݵ�� �������.


//#include<iostream>
//#include<string>
//#include<fstream>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//	ofstream outclientfile("clients.txt", ios::out);  //ios::out�� ������ ������ �����Ѵ�.
//
//	if (!outclientfile) {    //������ ���������� ���µǾ����� Ȯ���ϴ� ����
//		cerr << "file could not be opend" << endl;     //stream�� �ö��� �ʰ� direct�� �����.
//		exit(EXIT_FAILURE);     
//	}
//
//	int account;
//	string name;
//	double balance;
//
//	while (cin >> account >> name >> balance) {
//		outclientfile << account << ' '<< name<<' ' << balance << endl;
//		cout << "? ";
//	}
//
//
//	return 0;
//}

//-sequential file
//ifstream ��ü
//������ input ���� ����.
//���� ������ ����.
//ios::in ��带 ����Ѵ�.
//���Ͽ��� ������ �о�´�.
//������ �������� �ʴ´ٸ� ������ �� ����.
//��ü�� ���� �������Ƶ� �������. 
//ifstream in;
//in.open(" ", ios:in) �̷��� ����

//#include<iostream>
//#include<fstream>
//#include<iomanip>
//#include<string>
//#include<cstdlib>
//using namespace std;
//
//void outputLine(int, const string&, double);
//
//int main() {
//
//	ifstream inClientFile("clients.txt", ios::in);
//
//	if (!inClientFile) {
//		cerr << "File could not be opend" << endl;
//		exit(EXIT_FAILURE);
//	}
//	cout << left << setw(10) << "Account" << setw(13)
//		<< "Name" << "Balance\n" << fixed << showpoint;
//
//	int account;
//	string name;
//	double balance;
//
//	while (inClientFile >> account >> name >> balance) {
//		outputLine(account, name, balance);
//	}
//
//	
//
//	return 0;
//}
//
//void outputLine(int account, const string& name, double balance) {
//	cout << left << setw(10) << account << setw(13) << name
//		<< setw(7) << setprecision(2) << right << balance << endl;
//} 

//��� ���� chapter 14 pdf p13 ����

//endl�� ���̸� �ڿ� 2byte�� �߰��ȴ�.


//#include<iostream>
//#include<fstream>
//#include<string>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//
//	ofstream outstudent("student.txt", ios::out);
//
//		if (!outstudent) {   
//		cerr << "file could not be opend" << endl;    
//		exit(EXIT_FAILURE);     
//	}
//
//	
//	int number;
//	string name;
//	double score;
//
//	while (true) {
//		cin >> number;
//		if (number == 0) {
//			break;
//		}
//		outstudent << number << ' ';
//		cin.ignore(10, '\n');
//		getline(cin, name);
//		outstudent << name << ' ';
//		cin >> score;
//		outstudent << score << endl;
//
//		
//		cout << "�Է�" << endl;
//		
//	}
//
//	outstudent.close();
//
//	return 0;
//}

//#include<iostream>
//#include<cstdlib>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//
//void outputLine(int number, const string& name, double score);
//
//int main() {
//
//	ifstream instudent("student.txt", ios::in);
//
//	int number;
//	string name;
//	double score;
//
//	cout << left << setw(10) << "number" << setw(13)
//			<< "Name" << "score\n" << fixed << showpoint;
//
//	while (instudent>> number >> name >> score) {
//				outputLine(number, name, score);
//			}
//		
//
//	return 0;
//}
//
//void outputLine(int number, const string& name, double score) {
//	cout << left << setw(10) << number << setw(13) << name
//		<< setw(7) << setprecision(2) << right << score << endl;
//}




//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//
//	int number;
//	string name;
//	double score;
//	cin >> number;
//	cin.ignore(10, '\n');
//	getline(cin, name);
//	cin >> score;
//
//	cout << number << " " << name << " " << score << endl;
//
//	return 0;
//}