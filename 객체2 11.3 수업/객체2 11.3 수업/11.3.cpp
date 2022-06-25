//c 언어 스타일의 문자열 처리 방법
//char[], char* 로 처리된다.

//#include<iostream>
//using namespace std;
//
//int main() {
//	int a[5];           //배열 내부 값에 쓰레기 값이 들어간다.
//	int b[5]{};         //배열 내부 값이 0으로 초기화
//	int c[5]{ 1, 2 };   //채워준 부분에만 값이 들어가고 이외에는 0이 들어간다.
//
//	char str1[5];            //배열 내부 값에 쓰레기 값이 들어간다.
//	cout << str1 << endl;   
//	char str2[5]{};          //배열 내부 값이 \0(널 문자)로 초기화된다.
//	cout << str2 <<endl;
//	char str3[5]{ 'p','b', 'y' };  //채워준 부분에만 값이 들어가고 이외에는 \0이 들어간다.
//	cout << str3 << endl;
//
//	char str4[5] = "pbyd";   //'p', 'b', 'y', 'd' 가 정상적으로 인자에 전달된다. 마지막 인자에는 '\n'이 들어간다.
//	cout << str4 << endl;
//	const char* str5 = "dwada";  
//	//리터럴은 상수 취급하기 때문에 문자열 리터럴은 const를 붙여야함.
//	cout << str5 << endl;
//
//	return 0;
//}

//char* 주소 보는 방법
//char* 출력했을 때 주소가 아니라 문자가 출력된다.
//따라서 char*를 void*로 형변환해야 주소를 볼 수 있다.

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	const char* word{ "again" };
//
//	cout << static_cast<const void*>(word) << endl;
//	cout << word << endl;
//	return 0;
//}

//getline() 
//띄어쓰기 등 화이트 스페이스를 포함한 문장을 입력받는다.

//get()
//화이트 스페이스 포함한 문장과 한 문자(방법 2가지)만 입력받는 3가지 방식 존재
//한 문자만 입력받는 방법 
//1. cin.get()
//아스키 값을 리턴해준다.

//2. char c; 이후에 cin.get(c);
// 
//둘 다 구분자가 stream에 남아있는다(★)


//#include<iostream>
//using namespace std;
//
//int main() {
//	/*cout << "ASCII: " << cin.get() << endl;*/
//	//97을 입력하면 cin.get()에는 97이 입력되고
//	//inputstream에는 \n이 남아있게 된다.
//	
//	/*cin.ignore(10, '\n');*/
//	//input stream에 남아있는 내용 삭제
//
//	char a;
//	cin.get(a);
//	cout << "char: " << a << endl;
//
//	char c;
//	cin.get(c);
//	//inputstream에 남아있는 내용을 자동으로 읽어오려고 하기 때문에 \n을 가져온다.
//	//따라서 \n을 c에 저장하게 된다.
//	cout << "char: " << c;
//
//
//	return 0;
//}

//get()-문자열
//구분자를 stream에 남겨놓는다.(★)
//화이트 스페이스를 포함한다.
//제일 끝에 널 문자가 오기 때문에 지정한 크기보다 1개 적은 범위만큼만 입력받을 수 있다.
// 
//istream& get(char* s, stream사이즈 n, char 구분자);
//     ( 어디에 저장할 지,   stream  사이즈,   구분자 )
// 
//istream& get(char* s, streamsize n);
//인자 2개일시 자동으로 Enter를 구분자로 사용

//#include<iostream>
//using namespace std;
//
//int main() {
//	char str1;
//	char str2[50];   //문자열 저장할 배열 생성
//	char str3[50];
//	char str4[50];
//
//
//	cin.get(str1);
//	cout << "1: " << str1 << endl;
//
//	cin.ignore(100, '\n');      //입력 stream을 비워서 다음 cin에 끼치는 영향을 없애줌 
//                                //ignore 없으면 구분자가 stream에 남아있어 다음 함수에 영향을 끼칠 수 있음.
//								//cin은 자동으로 stream에 남아있는 값을 읽어오려하기 때문에 
//
//	cin.get(str2, 50, 'm');
//	cout << "2: " << str2 << endl;
//	//simhyunmin 입력하면 mhyunmin이 str3에 입력된다.
//	cin >> str3;
//	cout << str3;
//	cin >> str4;
//	cout << str4;
//
//
//
//	return 0;
//}

//getline() -문자열을 입력받기 위한 함수
//구분자를 stream에서 제거한다(★)

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char str1[50];
//	char str2[50];
//	char str3[50];
//
//	cin.getline(str1, 50);
//	cout << "1: " << str1 << endl;
//
//	cin.getline(str2, 50, '\n');
//	cout << "2: " << str2 << endl;
//
//	cin >> str3;
//	cout <<"3: "<< str3 << endl;;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char str1[50];
//	char str2[50];
//	char str3[50];
//
//	cout << "input1: ";
//	cin >> str1;
//	cout << "1: " << str1 << endl;
//
//	cin.ignore(10, '\n');
//
//	cout << "input2: ";
//	cin.getline(str2, 50);
//	cout << "2: " << str2 << endl;
//
//	int num;
//	cout << "num: ";        //만약 이 부분에서 1입력하면 stream에 null문자가 남아있게 된다.
//	cin >> num;
//
//	/*cin.ignore(10, '\n');  *///ignore을 통해 버퍼를 비워줘야함
//
//	
//	cin.getline(str3, 50);         //getline에 null이 입력되고 str3 출력 부분에서 아무것도 출력하지 않게 된다.
//	cout << "3: " << str3 << endl;
//
//	return 0;
//}

//getline() -string 타입
//istream& getline(istream& is, string& str);
//istream& getline(istream& is, string& str, char delim);
//                (cin 객체 입력, 저장할 string 변수 이름, 구분자)
//cin.getline() 말고 getline()으로 사용한다.

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//
//	string str1;
//	string str2;
//
//	getline(cin, str1);
//	cout << "1: " << str1 << endl;
//
//	getline(cin, str2);
//	cout << "2: " << str2 << endl;
//
//
//	return 0;
//}