//c ��� ��Ÿ���� ���ڿ� ó�� ���
//char[], char* �� ó���ȴ�.

//#include<iostream>
//using namespace std;
//
//int main() {
//	int a[5];           //�迭 ���� ���� ������ ���� ����.
//	int b[5]{};         //�迭 ���� ���� 0���� �ʱ�ȭ
//	int c[5]{ 1, 2 };   //ä���� �κп��� ���� ���� �̿ܿ��� 0�� ����.
//
//	char str1[5];            //�迭 ���� ���� ������ ���� ����.
//	cout << str1 << endl;   
//	char str2[5]{};          //�迭 ���� ���� \0(�� ����)�� �ʱ�ȭ�ȴ�.
//	cout << str2 <<endl;
//	char str3[5]{ 'p','b', 'y' };  //ä���� �κп��� ���� ���� �̿ܿ��� \0�� ����.
//	cout << str3 << endl;
//
//	char str4[5] = "pbyd";   //'p', 'b', 'y', 'd' �� ���������� ���ڿ� ���޵ȴ�. ������ ���ڿ��� '\n'�� ����.
//	cout << str4 << endl;
//	const char* str5 = "dwada";  
//	//���ͷ��� ��� ����ϱ� ������ ���ڿ� ���ͷ��� const�� �ٿ�����.
//	cout << str5 << endl;
//
//	return 0;
//}

//char* �ּ� ���� ���
//char* ������� �� �ּҰ� �ƴ϶� ���ڰ� ��µȴ�.
//���� char*�� void*�� ����ȯ�ؾ� �ּҸ� �� �� �ִ�.

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
//���� �� ȭ��Ʈ �����̽��� ������ ������ �Է¹޴´�.

//get()
//ȭ��Ʈ �����̽� ������ ����� �� ����(��� 2����)�� �Է¹޴� 3���� ��� ����
//�� ���ڸ� �Է¹޴� ��� 
//1. cin.get()
//�ƽ�Ű ���� �������ش�.

//2. char c; ���Ŀ� cin.get(c);
// 
//�� �� �����ڰ� stream�� �����ִ´�(��)


//#include<iostream>
//using namespace std;
//
//int main() {
//	/*cout << "ASCII: " << cin.get() << endl;*/
//	//97�� �Է��ϸ� cin.get()���� 97�� �Էµǰ�
//	//inputstream���� \n�� �����ְ� �ȴ�.
//	
//	/*cin.ignore(10, '\n');*/
//	//input stream�� �����ִ� ���� ����
//
//	char a;
//	cin.get(a);
//	cout << "char: " << a << endl;
//
//	char c;
//	cin.get(c);
//	//inputstream�� �����ִ� ������ �ڵ����� �о������ �ϱ� ������ \n�� �����´�.
//	//���� \n�� c�� �����ϰ� �ȴ�.
//	cout << "char: " << c;
//
//
//	return 0;
//}

//get()-���ڿ�
//�����ڸ� stream�� ���ܳ��´�.(��)
//ȭ��Ʈ �����̽��� �����Ѵ�.
//���� ���� �� ���ڰ� ���� ������ ������ ũ�⺸�� 1�� ���� ������ŭ�� �Է¹��� �� �ִ�.
// 
//istream& get(char* s, stream������ n, char ������);
//     ( ��� ������ ��,   stream  ������,   ������ )
// 
//istream& get(char* s, streamsize n);
//���� 2���Ͻ� �ڵ����� Enter�� �����ڷ� ���

//#include<iostream>
//using namespace std;
//
//int main() {
//	char str1;
//	char str2[50];   //���ڿ� ������ �迭 ����
//	char str3[50];
//	char str4[50];
//
//
//	cin.get(str1);
//	cout << "1: " << str1 << endl;
//
//	cin.ignore(100, '\n');      //�Է� stream�� ����� ���� cin�� ��ġ�� ������ ������ 
//                                //ignore ������ �����ڰ� stream�� �����־� ���� �Լ��� ������ ��ĥ �� ����.
//								//cin�� �ڵ����� stream�� �����ִ� ���� �о�����ϱ� ������ 
//
//	cin.get(str2, 50, 'm');
//	cout << "2: " << str2 << endl;
//	//simhyunmin �Է��ϸ� mhyunmin�� str3�� �Էµȴ�.
//	cin >> str3;
//	cout << str3;
//	cin >> str4;
//	cout << str4;
//
//
//
//	return 0;
//}

//getline() -���ڿ��� �Է¹ޱ� ���� �Լ�
//�����ڸ� stream���� �����Ѵ�(��)

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
//	cout << "num: ";        //���� �� �κп��� 1�Է��ϸ� stream�� null���ڰ� �����ְ� �ȴ�.
//	cin >> num;
//
//	/*cin.ignore(10, '\n');  *///ignore�� ���� ���۸� ��������
//
//	
//	cin.getline(str3, 50);         //getline�� null�� �Էµǰ� str3 ��� �κп��� �ƹ��͵� ������� �ʰ� �ȴ�.
//	cout << "3: " << str3 << endl;
//
//	return 0;
//}

//getline() -string Ÿ��
//istream& getline(istream& is, string& str);
//istream& getline(istream& is, string& str, char delim);
//                (cin ��ü �Է�, ������ string ���� �̸�, ������)
//cin.getline() ���� getline()���� ����Ѵ�.

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