#include <iostream>
#include <string>
#include "MyString.h"
using namespace std;
int main(){
	char s,d;
	int ind1,ind2;
	char* a = new char[21];
	char* b = new char[21];
	/*cin.getline(a, 20);
	cin.getline(b, 20);*/
	cin >> a;
	cin >> b;
	MyString strA(a), strB(b);
	cin >> ind1;
	if (!(strA != strB))
		cout << "a=b" << endl;
	else if (strA > strB)
		cout << "a>b" << endl;
	else
		cout << "a<b " << endl;
	MyString temp = strB.insert(ind1, strA.getString());
	temp.print();
	cin >> d;
	cin >> ind2;
	if (ind2 < temp.length() && ind2 >= 0) {
		temp[ind2] = d;
		temp.print();
	}
	else
		cout << "ERROR";
	return 0;
	}