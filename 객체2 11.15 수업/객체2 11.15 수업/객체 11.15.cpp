//file-position pointer
//커서의 위치
//읽거나 쓸 다음 byte의 byte 번호
//읽기 위해 사용하는 포인터: get 포인터
//쓰기 위해 사용하는 포인터: put 포인터

//         get        put
//seek    seekg      seekp             포인터 이동
//tell    tellg      tellp             포인터 현재 위치
        
//읽기:ifstream 타입 객체가 사용 가능
//쓰기:ofstream 타입 객체가 사용 가능
//fstream: 위에 있는 4개의 멤버 함수 다 사용 가능

//seekg, seekp
//seek(얼마나 이동할지 숫자, 어디부터 몇 바이트인지(시작위치))
//ios::beg  처음 0부터 10칸을 옮기다고 하면 10byte 만큼 포인터를 보낸다.
//ios::cur  현재 커서 위치부터 10byte 포인터를 보낸다, 겹치는 부분이 있으면 덮어씌운다.
//ios::end  맨 끝에서부터 뒷 방향으로 10btye 만큼 포인터를 보낸다.(반대 방향)

//ex)
//fileobject.seekg(n);  시작 위치부터 n번째 바이트로 이동시킨다.
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
//tellg 경우에는 개행 문자를 무시한다. 즉, 1 wook 100 CR LE가 있으면 CR LE 무시하고 1 wook 100만큼만 읽고
//다음으로 넘어간다. 하지만 다음으로 넘어갈 때 tellg()는 개행문자까지 세려서 현재 위치를 출력한다.
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
//	inFile.seekg(16);   //커서위치 12로 옮기기
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
//원하는 위치에 기록
//
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//int main() {
//	ofstream outfile{ "test.txt", ios::in | ios::ate};  //ios::in과 같이 사용해야함
//	                                                    //따라서 |를 통해 두 개의 모드 동시에 사용한다고 선언
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

//fstream 객체 사용 예시


//ios::in | ios::out
//#include<iostream>
//#include<string>
//#include<fstream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	fstream inoutFile{ "test4.txt", ios::out};  //ios::in과 같이 사용하기 위해서 | 붙여주기
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
//	inoutFile.open("test4.txt", ios::in | ios::out);     //닫았다가 다시 열면 position pointer의 위치는 맨 처음으로 바뀐다.
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
//	fstream inoutFile{ "test4.txt", ios::out | ios::in};  //ios::in과 같이 사용하기 위해서 | 붙여주기
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
//    //inoutFile.clear(); //를 통해 해결
//    //cout << inoutFile.tellp() << endl;
//
//
//    name = "IU";
//    inoutFile.seekp(10);
//    inoutFile << left << setw(8) << name << endl;
//    //cout<<inoutFile.tellp()<<endl;            //-1
//    //position pointer가 -1일 때 seek 함수가 작동하지 않는다.
//    //inoutFile.clear()를 통해 해결
//    return 0;
//}



//포인터가 한계라는 점을 보여주는 코드
//get & put position pointer

//seekg    seekp
//tellg    tellp 
//두 개로 나눠진 것 처럼 보이지만 실상은 하나의 포인터에 대해서 작동한다

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

//enum & enum class 열거형

//enum
//내부적으로 정수 타입 
//외부적으로 문자

//#include<iostream>
//using namespace std;
//
//int main() {
//// 내부적으로 0  1   5   6    //숫자를 표현한다.
//    enum E1 {a, b, c = 5, d};
// //선언된 이름들을 중복 사용 할 수 없다. 
// //따라서 위 경우에 int d{10};을 할 수 없게 된다.
//    enum class E2 {e, f, g, h};
//    //선언된 이름들(e, f, g, h)에 고유한 namespace를 주어 중복 방지 
//    //enum class E1 {a, b};
//    //enum class E2 {a, b}; 사용 가능하다. 
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


