#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	//cout << true << endl;
	//cout << false << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;//  signet(��������) INT-����������� � ������������ ��������.
	cout << 0 << " ... " << UINT_MAX << endl << endl;//unsignet(�����������) INT-������������ ��������.
	cout << sizeof(short) << endl;
	cout << 0 << " ... " << USHRT_MAX << endl;//unsignet(�����������) short- ������������ ��������.
	cout << SHRT_MIN << " ... " << USHRT_MAX << endl << endl;//signet(��������) short- �� ������������ �� ������������� �������� 
	// ������ : ������ USHRT � ������ ������ ������ ������ "������������� �������������" ?
	cout << sizeof(long) << endl;
	cout << 0 << " ... " << ULONG_MAX << endl;//unsignet(�����������) long - ������������ ��������.
	cout << LONG_MIN << " ... " << ULONG_MAX << endl << endl;//signet(��������) �� ������������ �� ������������� ��������.
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;//unsignet(�����������) long long - ������������ �������� 
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl << endl << endl << endl;  //signet(��������) long long -�� ������������ �� ������������� �������� 
	// float






}

