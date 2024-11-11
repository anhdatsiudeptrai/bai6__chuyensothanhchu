#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << " nhap so:";
	cin >> so;
	if (so == 0)
	{
		cout << "khong\n";
	}
	else if (so == 1) {
		cout << "mot";
	}
	else if (so == 2) {
		cout << "hai";
	}
	else if (so == 3) {
		cout << "ba";
	}
	else if (so == 4) {
		cout << "bon";
	}
	else if (so == 5)
	{
		cout << "nam";
	}
	else if (so == 6)
	{
		cout << "sau";
	}
	else if (so == 7) {
		cout << "bay";
	}
	else if (so == 8) {
		cout << "tam";
	}
	else if (so == 9) {
		cout << "chin";
	}
	else { cout << "so nay khong nam trong tu 0 den 9"; }
//////////////////
  

	switch (so)
	{
	case 0:
		cout << "khong\n";
		break;
	case 1:
		cout << "mot\n";
		break;
	case 2:
		cout << "hai\n";
		break;
	case 3:
		cout << "ba\n";
		break;
	case 4:
		cout << "bon\n";
		break;
	case 5:
		cout << "nam\n";
		break;
	case 6:
		cout << "sau\n";
		break;
	case 7:
		cout << "bay\n";
		break;
	case 8:
		cout << "tam\n";
		break;
	default:
		cout << " khong phai ";
		break;
	}

		   return 0;
	}


	

