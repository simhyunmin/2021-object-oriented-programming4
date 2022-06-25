//File Processing
//파일을 만들고 파일에 저장하거나 파일로부터 읽어오기 위한 방법
//ex) ofstream out{"파일경로", 모드}
//cin, cout에 대응하는 개체를 만들어야함 
//out<<
//istream, ostream, iostream 에서 상속을 받아 만들어지기 때문에 
//cin, cout 에서 쓰였던 멤버함수들을 대부분 사용할 수 있다.

//ifstream in{"파일경로", 모드}
//in>>

//두 가지 input, output을 파일 하나에서 동시에 사용하기 위해서 fstream을 사용하기도 한다.

//File Processing이 복잡해지는 경우
//다뤄야할 File이 2개이상이라면 복잡해진다.
//console과 다르게 커서 위치에 대해서도 파일 입출력이 가능하기 때문에 복잡하다.

//두 가지 방식이 있다.
//순차 (접근) 파일
//랜덤 접근 파일   //커서 위치에 따라 읽고 기록을 함.

//input output과 관련된 클래스의 상속 계층도 (chapter 14 pdf p3 확인)
//-sequential file
//oftream 개체
//파일을 output 모드로 오픈함
//ofstream out {"파일경로", 모드};
//파일경로 => 경로+이름 이라고 생각하면 된다.
//이름만 적게되면 현재 소스코드가 들어있는 파일 경로에 저장된다.
//ex) "d://test//test.txt"    or  "d://test.txt"
 
//mode 2가지가 있다.
//ios::out    //기본 모드
//파일을 Overwrites 한다. //기존에 test 파일이 있을 때 out모드로 test를 만들면 기존에 test를 지우고 새로 만든다.
//ios::app   

//개체를 만들고 파일을 열지 않고 나중에 열어도 상관없다.
//ofstream outclientFile;
//outclientFile.open("dlients.dat", ios::out); 이런식으로

//개체이름.close() 파일을 닫아준다. (★)
//파일에 저장되는 경우는 flush를 만나거나 크기가 다 차는 등 그런 경우에만 파일에 저장되는데
//flush를 만나지도 않았고 크기도 다 찬 상태가 아닌 채로 코드가 끝나면 파일에 기록이 안된다.
//따라서 코드 끝나기 전에 close를 반드시 해줘야함.


//#include<iostream>
//#include<string>
//#include<fstream>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//	ofstream outclientfile("clients.txt", ios::out);  //ios::out은 파일이 없으면 생성한다.
//
//	if (!outclientfile) {    //파일이 정상적으로 오픈되었는지 확인하는 구문
//		cerr << "file could not be opend" << endl;     //stream에 올라가지 않고 direct로 출력함.
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
//ifstream 개체
//파일을 input 모드로 연다.
//파일 생성을 안함.
//ios::in 모드를 사용한다.
//파일에서 내용을 읽어온다.
//파일이 존재하지 않는다면 오픈할 수 없다.
//개체를 먼저 만들어놓아도 상관없다. 
//ifstream in;
//in.open(" ", ios:in) 이렇게 가능

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

//모드 종류 chapter 14 pdf p13 참고

//endl을 붙이면 뒤에 2byte가 추가된다.


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
//		cout << "입력" << endl;
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