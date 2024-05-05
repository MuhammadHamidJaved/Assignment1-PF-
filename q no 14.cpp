//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double R, L, N, P,back,paid,r;
//	cout << "\nenter lon amount=";
//	cin >> L;
//	cout << "\nenter interest rate=";
//	cin >> R;
//	cout << "\nenter number of payments=";
//	cin >> N;
//	r = R / 100;
//	P = (r * pow((1 + r), N)) / (pow((1 + r), N) - 1) ;
//	P = P * L;
//	back = P * 36;
//	paid = back - L;
//
//	cout << "\nloan amount=" << fixed << setprecision(2) << L;
//	cout << "\ninterest rate=" << R;
//	cout << "\nnumber of payments=" << N;
//	cout << "\nmonthly payment" << fixed << setprecision(2) << P;
//	cout << "\namount paid back=" << fixed << setprecision(2) << back;
//	cout << "\ninterest paid" << fixed << setprecision(2) << paid;
//
//	system("pause");
//	return 0;
//}