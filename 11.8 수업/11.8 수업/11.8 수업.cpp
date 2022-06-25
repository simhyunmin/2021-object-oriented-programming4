//문자열 복사 strcpy 함수 
//#define _CRT_SECURE_NO_WARNINGS
////visual studio에서 strcpy를 에러로 취급하기 떄문에 에러로 취급 안한다고 정의해야함.
//#include<iostream>
//using namespace std;
//
//int main() {
//
//	char source[10] = "gusal s";
//	char dest[10];
//	strcpy(dest, source);   
//	//널 문자까지 포함해서 복사함
//	//오른쪽이 복사되는 대상 왼쪽이 복사 값이 들어가는 곳
//	
//	cout << dest << endl;
//
//
//	return 0;
//
//}

//strcpy 에러 상황
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//int main() {
//	char source[10] = "simh yunm";
//	char dest[5];
//	strcpy(dest, source);    //복사 가능하지만, 크기 검사를 안함 =>보안 취약
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
//n 글자만큼 크기 복사
//strcpy를 대체해준다.
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main() {
//
//	char source[10] = "dlwlrma";
//	/*char dest[10];*/
//	char dest[10]{};  //널 문자 넣기 싫으면 만들 때 이렇게 초기화 해주면 자동으로 배열 안에 널 문자가 채워진다.
//	strncpy(dest, source, 5);
//	/*dest[7] = '\0'; */       //에러 뜨기 때문에 마지막에 널 문자 넣어줘야함.(★), 
//	cout << dest << endl;     //단 strcpy 처럼 문자열 전체를 복사하는 경우에는 문자열 전체를 복사하기 때문에 마지막에 널 문자까지 들어간다.
//	                          //일부만 가져오기 위해 strncpy를 사용하는 경우에는 마지막에 널 문자를 꼭 넣어줘야함.
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
//	strncpy(dest, "wook.", 5);     //한번 더 재사용할 경우에는 널 문자를 끝에 넣어주거나 해야함
//	/*dest[5] = '\0';*/
//	cout << dest << endl;
//
//	return 0;
//}

//strcpy_s
//c++ 에서는 표준이 아니다.

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
//	strcpy_s( dest, sizeof(dest), source );    //크기 검사를 하게 된다.
//	                                 //중간에 10은 dest 저장 공간의 크기이다.
//	cout << dest << endl;
//	return 0;
//}

//stream manipulators
// 
//-floating-point (precision, setprecision)
//부동 소수점 표시법
// //두 가지 방법이 있다.
//cout << setprecision(5)
//cout.precision(5)
//설정한 범위보다 더 큰 숫자를 입력받았을 때 반올림해준다.
//한번 선언하면 이후 코드에도 적용된다(sticky)

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
//고정 소수점 표현 방식
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
//		cout.precision(places);                    //멤버함수 형식
//		cout << root2 << endl;
//	}
//	cout << endl;
//
//	for (int places{ 0 }; places <= 9; ++places) {            //manipulators 형식
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
//	cout << fixed << x << " " << y << endl;             //기본 precision 값이 6이기 때문에
//	                                                    //소수점 아래 6까지만 표현
//
//	return 0;
//}

//fixed 해제방법
//cout.unsetf(ios::fixed); 
//scientific도 똑같이 선언해서 해제

//floating-point 정밀도 
//15~18까지의 정밀도를 보여준다
//visual studio는 16
//실수 타입은 부정확할 수 있다.
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
//width는 stream 객체의 멤버 함수로 작동하고
//setw는 manipulator로서 작동한다. 
//이후에 나오는 코드에 영향을 끼치지 않고 
//바로 다음에 나오는 코드에만 영향을 끼친다.(sticky하지 않다.)
//출력부
//공간을 잡아놓고 문자를 출력
//나머지 공간은 padding으로 채워진다.

//입력부
//최대로 입력받을 수 있는 공간을 잡는다.
//char array 경우에는 한글자 적은 공간까지 입력 가능(null문자 때문에)

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
//			cout << "시작" << endl;
//			cout.width(widthValue++);
//			cout << sentence << endl;
//			cin.width(5);
//		}
//
//	return 0;
//}

//설정한 범위보다 더 큰 문자열을 출력할 때 
//범위를 무시하고 문자열을 출력함.
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	cout.width(5);
//	cout << "lee" << setw(7) << "wook" << endl;
//	cout.width(5);
//	cout << "dlwlrma" << setw(7) << "wook" << endl << endl;  //범위를 무시하고 문자열을 출력함.
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
//부호나 진법을 왼쪽에 표시
//가운데는 padding으로 채운다.

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//
//	cout << internal <<showpos<< setw(10) << 123 << endl; //양수 부호 출력하기 위해 showpos 
//	
//
//
//	return 0;
//}


//integral base (dec, oct, hex, setbase)
//이후에 나오는 코드에도 적용된다(sticky)
//setbase를 통해 구현가능 

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
//몇 진수 숫자인지 알려준다.
//8진수는 앞에 0
//16진수는 앞에 0X를 붙인다
//해제할려면 noshowbase 

//padding (fill, setfill)
//멤버 함수 형태로 cout.fill('*')
//manipulator 형태로 cout << setfill('*')

//showpoint, noshowpoint 
//맨 마지막에 오는 0을 보여준다.
//ex) 79.0을 출력하면 0은 의미가 없기 때문에 출력 안하지만 showpoint를 지정하면
//79.0으로 나온다. 
//소수점 

//#include<iostream>
//using namespace std;
//
//int main() {
//	double a = 7.000000;             //precision 기본 설정이 6이기 때문에 널 문자 제외하고 5까지만 출력한다. 
//	cout << a << endl;
//	cout << showpoint << a << endl;
//
//	return 0;
//}

//uppercase
//숫자 관련 문자를 대문자로 출력하는 조정자
//진수 표시할 때 알파벳은 소문자이기 때문에 이를 대문자로 바꿔주는 경우에 쓰인다.

//boolalpha, noboolalpha
//bool 값을 true, false로 입력할 수 있게 해주는 조정자 
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

//사용자 정의 manipulators
//리턴 타입 ostream& 으로 해야한다.


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