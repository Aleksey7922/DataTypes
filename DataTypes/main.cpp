#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	//cout << true << endl;
	//cout << false << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;//  signet(знаковый) INT-минимальное и максимальное значени€.
	cout << 0 << " ... " << UINT_MAX << endl << endl;//unsignet(беззнаковый) INT-максимальное значение.
	cout << sizeof(short) << endl;
	cout << 0 << " ... " << USHRT_MAX << endl;//unsignet(беззнаковый) short- максимальное значение.
	cout << SHRT_MIN << " ... " << USHRT_MAX << endl << endl;//signet(знаковый) short- от минимального до максимального значени€ 
	// ¬ќѕ–ќ— : почему USHRT в начале строки выдает ошибку "Ќ≈ќЅ№я¬Ћ≈ЌЌџ… »ƒ≈Ќ“»‘» ј“ќ–" ?
	cout << sizeof(long) << endl;
	cout << 0 << " ... " << ULONG_MAX << endl;//unsignet(беззнаковый) long - максимальное значение.
	cout << LONG_MIN << " ... " << ULONG_MAX << endl << endl;//signet(знаковый) от минимального до максимального значени€.
	cout << sizeof(long long) << endl;
	cout << 0 << " ... " << ULLONG_MAX << endl;//unsignet(беззнаковый) long long - максимальное значение 
	cout << LLONG_MIN << " ... " << LLONG_MAX << endl << endl << endl << endl;  //signet(знаковый) long long -от минимального до максимального значени€ 
	// float






}

