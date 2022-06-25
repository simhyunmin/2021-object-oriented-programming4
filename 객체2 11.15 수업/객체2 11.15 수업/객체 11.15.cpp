//file-position pointer
//Ŀ���� ��ġ
//�аų� �� ���� byte�� byte ��ȣ
//�б� ���� ����ϴ� ������: get ������
//���� ���� ����ϴ� ������: put ������

//         get        put
//seek    seekg      seekp             ������ �̵�
//tell    tellg      tellp             ������ ���� ��ġ
        
//�б�:ifstream Ÿ�� ��ü�� ��� ����
//����:ofstream Ÿ�� ��ü�� ��� ����
//fstream: ���� �ִ� 4���� ��� �Լ� �� ��� ����

//seekg, seekp
//seek(�󸶳� �̵����� ����, ������ �� ����Ʈ����(������ġ))
//ios::beg  ó�� 0���� 10ĭ�� �ű�ٰ� �ϸ� 10byte ��ŭ �����͸� ������.
//ios::cur  ���� Ŀ�� ��ġ���� 10byte �����͸� ������, ��ġ�� �κ��� ������ ������.
//ios::end  �� ���������� �� �������� 10btye ��ŭ �����͸� ������.(�ݴ� ����)

//ex)
//fileobject.seekg(n);  ���� ��ġ���� n��° ����Ʈ�� �̵���Ų��.
//fileobject.seekg(n, ios::cur)
//fileobject.seekg(n, ios::end)
//fileobject.seekg(0, ios::end)


//tellg, tellp   (istream, ostream)
//location = fileObject.tellg();
//location = fileObject.tellp();

//tellp()
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ofstream outfile{ "test2.txt", ios::out };
//
//	int account;
//	string name;
//	double balance;
//
//	cout << "?:";
//	while (cin >> account >> name >> balance) {
//		cout << "tellp(): " << outfile.tellp() << endl;
//		outfile << account << ' ' << name << ' ' << balance << endl;
//		cout << "?:";
//	}
//
//	return 0;
//}

//tellg() 
//tellg ��쿡�� ���� ���ڸ� �����Ѵ�. ��, 1 wook 100 CR LE�� ������ CR LE �����ϰ� 1 wook 100��ŭ�� �а�
//�������� �Ѿ��. ������ �������� �Ѿ �� tellg()�� ���๮�ڱ��� ������ ���� ��ġ�� ����Ѵ�.
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//void outputLine(int account, const string& name, double balance) {
//    cout << account<<' '<< name <<' '<<balance<<endl;
//    
//}
//
//int main() {
//
//    ifstream inFile("test2.txt", ios::in);
//
//    int account;
//    string name;
//    double balance;
//
//    while (inFile >> account >> name >> balance) {
//
//        outputLine(account, name, balance);
//
//        cout << "tellg(): " << inFile.tellg() << endl;
//    }
//
//
//
//    return 0;
//}

//tellp
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ofstream outFile{ "test2.txt", ios::out };
//
//	int account;
//	string name;
//	double balance;
//	int position{ 0 };
//
//
//	while (cin >> account >> name >> balance) {
//		outFile.seekp(position);
//		cout << "tellp(): " << outFile.tellp() << endl;
//		position += 3;
//		outFile << account << ' ' << name << ' ' << balance << endl;
//		cout << "\n? ";
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//void outLine(int account, const string& name, double balance);
//
//int main() {
//     
//    ifstream inFile{ "test2.txt", ios::in };
//
//    int account;
//    string name;
//    double balance;
//
//    while (inFile >> account >> name >> balance) {
//        outLine(account, name, balance);
//    }
//
//    return 0;
//}
//
//void outLine(int account, const string& name, double balance) {
//    cout << account<<"  "<< name <<"  "<< balance << endl;
//}

//#include<iostream>
//#include<string>
//#include<fstream>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//	ofstream outtest("test.txt", ios::out); 
//
//	int account;
//	string name;
//	double balance;
//	cout << "?:";
//	while (cin >> account >> name >> balance) {
//		outtest<< account << ' '<< name<<' ' << balance << endl;
//		cout << "?:";
//	}
//
//
//	return 0;
//}

//tellg(), seekg()
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ifstream inFile{ "test.txt", ios::in };
//
//	int account;
//	string name;
//	double balance;
//	int position{ 0 };
//
//
//	while (inFile >> account >> name >> balance) {
//		/*position += 3;
//		inFile.seekg(position, ios::cur);*/
//		cout << "tellg(): " << inFile.tellg() << endl;
//		
//		cout << account << ' ' << name << ' ' << balance << endl;
//		cout << endl;
//	}
//
//	return 0;
//}

//seekg()
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ifstream inFile{ "test.txt", ios::in };
//
//	int account;
//	string name;
//	double balance;
//	
//	inFile.seekg(16);   //Ŀ����ġ 12�� �ű��
//
//	while (inFile >> account >> name >> balance) {
//		cout << account << ' ' << name << ' ' << balance << endl;
//		inFile.seekg(0, ios::end); 
//		
//	}
//
//	return 0;
//}

//ios::app (test3.txt = test.txt)

//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ofstream outFile{ "test.txt", ios::app };
//
//	int account;
//	string name;
//	double balance;
//	
//	cout << "? ";
//
//	cin >> account >> name >> balance;
//	outFile << account << ' ' << name << ' ' << balance << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//void outputline(int account, const string& name, double balance) {
//	cout << account << ' ' << name << ' ' << balance << endl;
//}
//
//int main() {
//	ifstream infile{ "test.txt", ios::in };
//
//	int account;
//	string name;
//	double balance;
//	
//
//	while (infile >> account >> name >> balance) {
//		outputline(account, name, balance);
//	}
//
//	return 0;
//}

//ios::ate(test3.txt = test.txt)
//���ϴ� ��ġ�� ���
//
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ofstream outfile{ "test.txt", ios::in | ios::ate};  //ios::in�� ���� ����ؾ���
//	                                                    //���� |�� ���� �� ���� ��� ���ÿ� ����Ѵٰ� ����
//	int account;
//	string name;
//	double balance;
//	
//	cout << "? ";
//	
//	cin >> account >> name >> balance;
//		outfile.seekp(8);
//	 
//		outfile << account << ' ' << name << ' ' << balance << endl;
//	
//		cout << account << ' ' << name << ' ' << balance << endl;
//
//	return 0;
//}

//fstream ��ü ��� ����


//ios::in | ios::out
//#include<iostream>
//#include<string>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	fstream inoutFile{ "test4.txt", ios::out};  //ios::in�� ���� ����ϱ� ���ؼ� | �ٿ��ֱ�
//	
//	string name;
//
//	cout << "? ";
//	while (cin >> name) {
//	   inoutFile << left << setw(8) << name << endl;
//		cout << "? ";
//	}
//	inoutFile.close();
//
//	inoutFile.open("test4.txt", ios::in | ios::out);     //�ݾҴٰ� �ٽ� ���� position pointer�� ��ġ�� �� ó������ �ٲ��.
//	inoutFile.seekg(10);
//	inoutFile >> name;
//	cout << endl << name << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	fstream inoutFile{ "test4.txt", ios::out | ios::in};  //ios::in�� ���� ����ϱ� ���ؼ� | �ٿ��ֱ�
//
//	string name;
//	
//
//	while (cin >> name) {
//		inoutFile << left << setw(8) << name << endl;
//		cout << "? ";                                	}
//
//	inoutFile.close();
//
//	inoutFile.open("test4.txt", ios::in | ios::out);
//	inoutFile.seekg(10);
//	inoutFile >> name;
//	cout << endl << name << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//
//
//int main() {
//
//    fstream inoutFile{ "test4.txt", ios::in | ios::out };
//
//    string name;
//
//    while (inoutFile >> name) {
//        cout << name << endl;
//    }
//
//    //cout << endl << inoutFile.tellp() << endl;
//    //inoutFile.clear(); //�� ���� �ذ�
//    //cout << inoutFile.tellp() << endl;
//
//
//    name = "IU";
//    inoutFile.seekp(10);
//    inoutFile << left << setw(8) << name << endl;
//    //cout<<inoutFile.tellp()<<endl;            //-1
//    //position pointer�� -1�� �� seek �Լ��� �۵����� �ʴ´�.
//    //inoutFile.clear()�� ���� �ذ�
//    return 0;
//}



//�����Ͱ� �Ѱ��� ���� �����ִ� �ڵ�
//get & put position pointer

//seekg    seekp
//tellg    tellp 
//�� ���� ������ �� ó�� �������� �ǻ��� �ϳ��� �����Ϳ� ���ؼ� �۵��Ѵ�

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//int main() {
//
//    fstream inout{ "test4.txt", ios::in | ios::out };
//
//    cout << "tellp: " << inout.tellp() << " tellg: " << inout.tellg() << endl;
//    inout.seekp(3);
//    cout << "tellp " << inout.tellp() << " tellg: " << inout.tellg() << endl;
//    inout.seekg(6);
//       cout << "tellp: " << inout.tellp() << " tellg:" << inout.tellg() << endl;
//}

//enum & enum class ������

//enum
//���������� ���� Ÿ�� 
//�ܺ������� ����

//#include<iostream>
//using namespace std;
//
//int main() {
//// ���������� 0  1   5   6    //���ڸ� ǥ���Ѵ�.
//    enum E1 {a, b, c = 5, d};
// //����� �̸����� �ߺ� ��� �� �� ����. 
// //���� �� ��쿡 int d{10};�� �� �� ���� �ȴ�.
//    enum class E2 {e, f, g, h};
//    //����� �̸���(e, f, g, h)�� ������ namespace�� �־� �ߺ� ���� 
//    //enum class E1 {a, b};
//    //enum class E2 {a, b}; ��� �����ϴ�. 
//    int h{ 10 };
//    
//    cout << a << endl;
//    cout << static_cast<int>(E2::e) << endl;
//    E2::e;
//    if (a == 0)
//        cout << "a" << endl;
//    if (static_cast<int>(E2::e) == 0)
//        cout << "e" << endl;
//
//    return 0;
//}


