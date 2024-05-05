#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float speedofa, speedofb, elapsedtime,shortestdistance,A,B;
	cout << "\nenter speed of car A=";
	cin >> speedofa;
	cout << "\nenter speed of car B=";
	cin >> speedofb;
	cout << "\nenter elapsed time=";
	cin >> elapsedtime;
	 
	A = speedofa * (elapsedtime / 3600);
    B = speedofb * (elapsedtime / 3600);

	shortestdistance = sqrt((A * A) + (B * B));

	cout << "\ndistance travelled by car A="<<A;
	cout << "\ndistance travelled by car B="<<B;
	cout << "\nshortest distance="<<shortestdistance;

	system("pause");
	return 0;
}