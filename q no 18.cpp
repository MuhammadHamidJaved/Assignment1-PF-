//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	float walls, door, windows, bookshelf, d_l, d_w, wall_l, wall_w, wall_h, w1_l, w2_l, w1_w, w2_w, b_l, b_w, total;
//	const float GALLON = 120;
//	cout << "\nenter length of wall=";
//	cin >> wall_l;
//	cout << "\nenter width of wall=";
//	cin >> wall_w;
//	cout << "\nenter height of wall=";
//	cin >> wall_h;
//	cout << "\nenter length of door=";
//	cin >> d_l;
//	cout << "\nenter width of door=";
//	cin >> d_w;
//	cout << "\nenter length of window1=";
//	cin >> w1_l;
//	cout << "\nenter width of window1=";
//	cin >> w1_w;
//	cout << "\nenter length of window2=";
//	cin >> w2_l;
//	cout << "\nenter width of window2=";
//	cin >> w2_w;
//	cout << "\nenter length of bookshelf=";
//	cin >> b_l;
//	cout << "\nenter width of bookshelf=";
//	cin >> b_w;
//	walls = 2 * ((wall_l * wall_h) + (wall_w * wall_h));
//	door = d_l * d_w;
//	bookshelf = b_l * b_w;
//	windows = (w1_l * w1_w) + (w2_l * w2_w);
//	total = walls - (door + walls + bookshelf);
//
//	cout << "\narea to be painted=" << fixed << setprecision(3) << total;
//	cout << "\npaint require to paint this area=" << fixed << setprecision(3) << total / GALLON;
//
//
//	system("pause");
//	return 0;
//}