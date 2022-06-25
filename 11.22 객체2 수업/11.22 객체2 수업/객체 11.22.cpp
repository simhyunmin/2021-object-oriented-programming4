//write()
//객체 내용을 testfile에 저장
//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//class Tmp {
//private:
//	char a[5];
//	int b;
//	double c;
//public:
//	Tmp(string pa, int pb, double pc) :b{ pb }, c{ pc }{   //전달된 문자열을 저장
//		pa.copy(a, pa.length());    //string 안에 있는 내용이 첫 번째 인자 위치에 두 번째 인자 크기 만큼 복사된다. 
//       //다른 방법 strcpy(a, pa.c_str());  c_str() 하게 되면 string 안에 있는 문자열을 char * 형태로 변경해서 리턴해준다.
//		a[pa.length()] = '\0';
//	}
//	string getChar() { return a; }
//	int getint() { return b; }
//	double getDouble() { return c; }
//};
//
//int main() {
//
//	Tmp t1{ "pby", 17, 10.1 };
//	Tmp t2{ "wl", 2, 12.2 };
//	ofstream out{ "testfile.bin", ios::out | ios::binary };            //왜 2진 형태로 저장하냐?
//	out.write(reinterpret_cast<const char*>(&t1), sizeof(Tmp));        //random access 파일 경우에는 write 함수를 사용해서 기록 
//	out.write(reinterpret_cast<char*>(&t2), sizeof(Tmp));              //메모리 특정 위치에서 짤라서 기록하는데 이진수로 저장함. 
//	cout << sizeof(Tmp);                                               //또한 2진 형태로 저장할 때 파일 확장명을 bin으로 해야함
//}                                                                      //파일의 현재 위치가 t1 기록한 이후에 sizeof(Tmp) 만큼 옮겨졌으므로
//                                                                        //따로 seekp 할 필요없이 연달아 write해도 문제 될 게 없다.
//


//Tmp 타입 객체가 24 byte인 이유 
//메모리에 객체 코드가 올라가면 멤버변수의 크기만 측정이 된다.  
//나머지 코드는 코드가 올라가는 부분에 올라가기 때문에 



//read()
//testfile 내용을 객체에 저장

//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//class Tmp {
//private:
//	char a[5];
//	int b;
//	double c;
//public:
//	Tmp(string pa, int pb, double pc) :b{ pb }, c{ pc }{
//		pa.copy(a, pa.length());    
//		a[pa.length()] = '\0';
//	}
//	string getChar() { return a; }
//	int getint() { return b; }
//	double getDouble() { return c; }
//};
//
//int main() {
//
//	Tmp t("", 0, 0);
//	ifstream in("testfile.bin", ios::in | ios::binary);
//	in.seekg(sizeof(Tmp));
//	in.read(reinterpret_cast<char*>(&t), sizeof(Tmp));
//	cout << t.getChar()<<" " << t.getint()<<" " << t.getDouble() << endl;   //wl212.34 를 짤라서 각 변수에 넣었다.
//	                                                              
//
//
//
//	return 0;
//}