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
//	cout << "? ";
//	while (cin>>account>>name>>balance) {
//
//		outclientfile << account << ' ' << name << ' ' << balance << endl;
//		cout << "? ";
//	}
//
//
//	return 0;
//}



//#include<iostream>
//#include<fstream>
//#include<iomanip>
//#include<string>
//#include<cstdlib>
//using namespace std;
//
//
//
//int main() {
//	int account = 0;
//	string name = "";
//	double balance =0.00;
//
//	/*ifstream inclientfile; */                                        //밖에서 선언만 하고 안에서 open close하면  clear, seekg(0)할 필요가 없다. 
//	ifstream inclientfile("clients.txt", ios::in);
//
//	int a;
//	while (true) {
//		cout << "enter request" << endl;
//		cout << " 1 - list accounts with zero balances" << endl;
//		cout << " 2 - list accounts with credit balances" << endl;
//		cout << " 3 - end of run" <<fixed<<showpoint<<endl;
//		cout << " ? ";
//		cin >> a;
//
//		/*inclientfile.open("clients.txt", ios::in);*/
//		if (a == 1) {
//			while (inclientfile >> account >> name >> balance) {
//				if (balance == 0.00) {
//					cout << account << "   " << name << "   " << balance << endl << endl;
//				}
//			}
//		}
//		
//		if (a == 2) {
//			while (inclientfile >> account >> name >> balance) {
//				if (balance < 0) {
//					cout << account << "   " << name << "   " << balance << endl << endl;
//				}
//			}
//		}
//		if (a == 3) {
//			break;
//		}
//		//inclientfile.close();               
// 
//                                            //첫 번째 파일을 맨 끝까지 읽고
//		inclientfile.clear();                 //파일을 다시 한번 처음부터 읽어야할 때 
//		inclientfile.seekg(0);                //position pointer가 -1로 설정되어있고 맨 끝에 위치해있기 때문에
//		                                      //clear와 seekg(0)을 해줘야한다.
//	}
//
//	
//
//	return 0;
//}


//type-safe I/O (형식이 안전한 I/O)
//허용된 데이터 타입으로 만들어놓아야 <<, >> 이런 operators를 사용할 수 있다.
// << 과 같은 것들이 오버로드 되어있지 않다면 에러가 발생한다. 

//unformatted I/O (형식이 지정되지 않은 I/O)
//read, wrtie가 속해있음
//지정된 위치에 지정된 byte크기만큼 읽고 쓴다.
//type 검사를 하지 않아 불안정하지만 속도가 빠르다

//read  (    *,        size)
//   포인터가 가리키는 위치 
//콘솔이나 파일에서 지정된 size만큼 내용을 읽어서 포인터가 가리키고 있는 위치에서부터 기록을 한다.  
//read 함수의 첫 번째 인자는 char* 형을 가진다.(★)
//write (    *,        size)
//    포인터가 가리키는 위치 
//포인터가 가리키는 위치에서부터 지정된 크기만큼의 메모리 안에 내용을 콘솔 또는 파일의 현재 위치에다가 출력을 해준다.
//wrtie 함수의 첫 번째 인자는 const char* 형을 가진다.(★)

//두번 째 인자로는 size_t (number of bytes)를 가진다.

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	const int size{ 80 };
//    char buffer[size];
//	
//	cout << "Enter a sentence:\n";
//    cin.read(buffer, 20);
//
//	cout << "\nThe sentence entered was:\n";
//	cout.write(buffer, cin.gcount());          //cout.write 이므로 콘솔창에 출력한다.
//	cout << endl;                              //만약 파일이름.write로 하면 파일에 출력함.
//	                                           //cin.gcount()는 읽어들인 문자의 개수를 알아낼 수 있다.
//	                                           //read에서 20을 읽었기 때문에 cin.gcount() 는 20이다.
//	return 0;
//}

//random-access file
//워드 문서에 글을 작성할 때 중간에 새로운 내용을 삽입하고 싶은 경우 
//귀찮은 작업들을 안하도록 내용이 추가되면 
// 나머지 부분들은 뒤로 밀어주는 기능이다. 
//즉 
//1. 내가 원하는 위치에 즉시 접근하게 해주고
//2. 수정 작업을 편리하게 해준다.
//구현하는 방법
//내용 하나를 기록할 때 전체 문서를 구역을 나눠놓은 것 처럼 해놓고 하나의 내용을 구역 안에다가 기록한다.

//파일 output을 활용
//wrtie 경우 
//outFile.write(reinterpret_cast<const char*>(&number), sizeof(number));

//reinterpret_cast<>() 
// *    ->     *   
//포인터 또는 메모리 주소를 강제로 다른 데이터 타입에 대한 포인터로 변환한다. 

//read 경우
//inFile.read(reinterpret_cast<char *>(&number), sizeof(number));
//read의 경우 const char* 올 수 없음:
//현재 위치에서 읽어와서 포인터가 가리키는 위치에 기록해야하기 때문에 