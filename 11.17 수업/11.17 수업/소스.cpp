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
//	/*ifstream inclientfile; */                                        //�ۿ��� ���� �ϰ� �ȿ��� open close�ϸ�  clear, seekg(0)�� �ʿ䰡 ����. 
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
//                                            //ù ��° ������ �� ������ �а�
//		inclientfile.clear();                 //������ �ٽ� �ѹ� ó������ �о���� �� 
//		inclientfile.seekg(0);                //position pointer�� -1�� �����Ǿ��ְ� �� ���� ��ġ���ֱ� ������
//		                                      //clear�� seekg(0)�� ������Ѵ�.
//	}
//
//	
//
//	return 0;
//}


//type-safe I/O (������ ������ I/O)
//���� ������ Ÿ������ �������ƾ� <<, >> �̷� operators�� ����� �� �ִ�.
// << �� ���� �͵��� �����ε� �Ǿ����� �ʴٸ� ������ �߻��Ѵ�. 

//unformatted I/O (������ �������� ���� I/O)
//read, wrtie�� ��������
//������ ��ġ�� ������ byteũ�⸸ŭ �а� ����.
//type �˻縦 ���� �ʾ� �Ҿ��������� �ӵ��� ������

//read  (    *,        size)
//   �����Ͱ� ����Ű�� ��ġ 
//�ܼ��̳� ���Ͽ��� ������ size��ŭ ������ �о �����Ͱ� ����Ű�� �ִ� ��ġ�������� ����� �Ѵ�.  
//read �Լ��� ù ��° ���ڴ� char* ���� ������.(��)
//write (    *,        size)
//    �����Ͱ� ����Ű�� ��ġ 
//�����Ͱ� ����Ű�� ��ġ�������� ������ ũ�⸸ŭ�� �޸� �ȿ� ������ �ܼ� �Ǵ� ������ ���� ��ġ���ٰ� ����� ���ش�.
//wrtie �Լ��� ù ��° ���ڴ� const char* ���� ������.(��)

//�ι� ° ���ڷδ� size_t (number of bytes)�� ������.

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
//	cout.write(buffer, cin.gcount());          //cout.write �̹Ƿ� �ܼ�â�� ����Ѵ�.
//	cout << endl;                              //���� �����̸�.write�� �ϸ� ���Ͽ� �����.
//	                                           //cin.gcount()�� �о���� ������ ������ �˾Ƴ� �� �ִ�.
//	                                           //read���� 20�� �о��� ������ cin.gcount() �� 20�̴�.
//	return 0;
//}

//random-access file
//���� ������ ���� �ۼ��� �� �߰��� ���ο� ������ �����ϰ� ���� ��� 
//������ �۾����� ���ϵ��� ������ �߰��Ǹ� 
// ������ �κе��� �ڷ� �о��ִ� ����̴�. 
//�� 
//1. ���� ���ϴ� ��ġ�� ��� �����ϰ� ���ְ�
//2. ���� �۾��� ���ϰ� ���ش�.
//�����ϴ� ���
//���� �ϳ��� ����� �� ��ü ������ ������ �������� �� ó�� �س��� �ϳ��� ������ ���� �ȿ��ٰ� ����Ѵ�.

//���� output�� Ȱ��
//wrtie ��� 
//outFile.write(reinterpret_cast<const char*>(&number), sizeof(number));

//reinterpret_cast<>() 
// *    ->     *   
//������ �Ǵ� �޸� �ּҸ� ������ �ٸ� ������ Ÿ�Կ� ���� �����ͷ� ��ȯ�Ѵ�. 

//read ���
//inFile.read(reinterpret_cast<char *>(&number), sizeof(number));
//read�� ��� const char* �� �� ����:
//���� ��ġ���� �о�ͼ� �����Ͱ� ����Ű�� ��ġ�� ����ؾ��ϱ� ������ 