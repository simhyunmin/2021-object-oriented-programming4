//write()
//��ü ������ testfile�� ����
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
//	Tmp(string pa, int pb, double pc) :b{ pb }, c{ pc }{   //���޵� ���ڿ��� ����
//		pa.copy(a, pa.length());    //string �ȿ� �ִ� ������ ù ��° ���� ��ġ�� �� ��° ���� ũ�� ��ŭ ����ȴ�. 
//       //�ٸ� ��� strcpy(a, pa.c_str());  c_str() �ϰ� �Ǹ� string �ȿ� �ִ� ���ڿ��� char * ���·� �����ؼ� �������ش�.
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
//	ofstream out{ "testfile.bin", ios::out | ios::binary };            //�� 2�� ���·� �����ϳ�?
//	out.write(reinterpret_cast<const char*>(&t1), sizeof(Tmp));        //random access ���� ��쿡�� write �Լ��� ����ؼ� ��� 
//	out.write(reinterpret_cast<char*>(&t2), sizeof(Tmp));              //�޸� Ư�� ��ġ���� ©�� ����ϴµ� �������� ������. 
//	cout << sizeof(Tmp);                                               //���� 2�� ���·� ������ �� ���� Ȯ����� bin���� �ؾ���
//}                                                                      //������ ���� ��ġ�� t1 ����� ���Ŀ� sizeof(Tmp) ��ŭ �Ű������Ƿ�
//                                                                        //���� seekp �� �ʿ���� ���޾� write�ص� ���� �� �� ����.
//


//Tmp Ÿ�� ��ü�� 24 byte�� ���� 
//�޸𸮿� ��ü �ڵ尡 �ö󰡸� ��������� ũ�⸸ ������ �ȴ�.  
//������ �ڵ�� �ڵ尡 �ö󰡴� �κп� �ö󰡱� ������ 



//read()
//testfile ������ ��ü�� ����

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
//	cout << t.getChar()<<" " << t.getint()<<" " << t.getDouble() << endl;   //wl212.34 �� ©�� �� ������ �־���.
//	                                                              
//
//
//
//	return 0;
//}