#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	//cout << true << endl;
	//cout << false << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;//  signet(знаковый) INT-минимальное и максимальное значения.
	cout << 0 << " ... " << UINT_MAX << endl << endl;//unsignet(беззнаковый) INT-максимальное значение.
	cout << sizeof(short) << endl;
	cout << 0 << " ... " << USHRT_MAX << endl;//unsignet(беззнаковый) short- максимальное значение.
	cout << SHRT_MIN << " ... " << USHRT_MAX << endl << endl;//signet(знаковый) short- от минимального до максимального значения 
	// ВОПРОС : почему USHRT в начале строки выдает ошибку "НЕОБЬЯВЛЕННЫЙ ИДЕНТИФИКАТОР" ?
	cout << sizeof(long) << endl;
	cout << 0 << " ... " << ULONG_MAX << endl;//unsignet(беззнаковый) long - максимальное значение.
	cout << LONG_MIN << " ... " << ULONG_MAX << endl << endl;//signet(знаковый) от минимального до максимального значения.
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;//unsignet(беззнаковый) long long - максимальное значение 
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl << endl << endl << endl;  //signet(знаковый) long long -от минимального до максимального значения 
	// float






}

