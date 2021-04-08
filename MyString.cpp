
#include <iostream>
#include<cstring>
#include<string>
#include "MyString.h"
#pragma warning (disable:4996)
using namespace std;


void MyString::setString(const char* s)
{
	if (s)
	{
		int len = strlen(s) + 1;
		str = new char[len];
		strcpy(str, s);
	}
	else
		str = NULL;
}

MyString::MyString(char* s)
{
	setString(s);
}

MyString::MyString(int len)
{
	str = new char[len];
}


MyString::MyString(const MyString& my_s)
{
	setString(my_s.getString());
}

MyString::~MyString()
{
	if (str)
		delete[] str;
	str = NULL;

}

char* MyString::getString() const
{
	  return str; 

}

int MyString::length() const
{
	return strlen(str);
}

void MyString::print() const
{
	if (str) cout << str << endl;
}

bool MyString::operator<(const MyString& a) const
{
	MyString temp(strlen(str) + 1);
	strcpy(temp.getString(), str);

	MyString temp1(strlen(str) + 1);
	strcpy(temp1.getString(), str);

	for (int i = 0; i < this->length(); i++) {
		if (temp[i] <= 90 && temp[i] >= 65) {
			temp[i] += 32;
		}

	}
	for (int i = 0; i < this->length(); i++) {
		if (temp1[i] <= 90 && temp1[i] >= 65) {
			temp1[i] += 32;
		}
	}
	return (strcmp(temp.getString(), temp1.getString()) == -1);
}

bool MyString::operator>(const MyString& a) const
{
	MyString temp( strlen(str)+1);
	strcpy(temp.getString(), str);
	
	MyString temp1(strlen(str) + 1);
	strcpy(temp1.getString(), str);
	
	for (int i = 0; i < this->length(); i++) {
		if (temp[i] <= 90 && temp[i] >= 65) {
			temp[i] += 32;
		}

	}
	for (int i = 0; i < this->length(); i++) {
		if (temp1[i] <= 90 && temp1[i] >= 65) {
			temp1[i] += 32;
		}
	}
	return (strcmp(temp.getString(), temp1.getString()) == 1);
}

bool MyString::operator>=(const MyString& a) const
{
	MyString temp(strlen(str)+1);
	strcpy(temp.getString(), str);
	
	MyString temp1(strlen(str) + 1);
	strcpy(temp1.getString(), str);


	for (int i = 0; i < this->length(); i++) {
		if (temp[i] <= 90 && temp[i] >= 65) {
			temp[i] += 32;
		}

	}
	for (int i = 0; i < this->length(); i++) {
		if (temp1[i] <= 90 && temp1[i] >= 65) {
			temp1[i] += 32;
		}
	}
	return (strcmp(temp.getString(), temp1.getString()) == -1 || !strcmp(temp.getString(), temp1.getString()));
}

bool MyString::operator<=(const MyString& a) const
{
	MyString temp(strlen(str)+1);
	strcpy(temp.getString(), str);
	
	MyString temp1(strlen(str) + 1);
	strcpy(temp1.getString(), str);

	for (int i = 0; i < this->length(); i++) {
		if (temp[i] <= 90 && temp[i] >= 65) {
			temp[i] += 32;
		}

	}
	for (int i = 0; i < this->length(); i++) {
		if (temp1[i] <= 90 && temp1[i] >= 65) {
			temp1[i] += 32;
		}
	}
	return (strcmp(temp.getString(), temp1.getString()) == 1 || !strcmp(temp.getString(), temp1.getString()));
}

bool MyString::operator!=(const MyString& a) const
{
	MyString temp(strlen(str)+1);
	strcpy(temp.getString(), str);
	
	MyString temp1(strlen(str) + 1);
	strcpy(temp1.getString(), str);

	for (int i = 0; i < this->length(); i++) {
		if (temp[i] <= 90 && temp[i] >= 65) {
			temp[i] += 32;
		}
	}
	for (int i = 0; i < this->length(); i++) {
		if (temp1[i] <= 90 && temp1[i] >= 65) {
			temp1[i] += 32;
		}
	}

	return (strcmp(temp.getString(), temp1.getString()));
}

MyString MyString::insert(int index, const char* str1)
{
	if (index < 0 || index > this->length()) {
		cout << "ERROR\n";
		MyString a;
		return a;
	}
	MyString temp(strlen(str1) + strlen(str) + 1);
	strcpy(temp.getString(), str);
	if (index)
		strcpy(temp.getString() + index, str1 );
	else
		strcpy(temp.getString() + index, str1);
	strcat(temp.getString(), str + index);
	return temp;
}

char& MyString::operator[](int index)
{
	if (index < 0 || index >= this->length()) {
		cout << "ERROR\n";
		this->str = nullptr;
		return *(this->str);
	}
	else {
		return *(this->str + index);
	}
}







