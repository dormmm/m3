#pragma once
#include <iostream>
#include<cstring>
#include<string>
#pragma warning (disable:4996)

using namespace std;

class MyString {
	char* str;
	void setString(const char* s);

public:
	MyString(char* s = NULL);
	MyString(int);
	MyString(const MyString& s);
	~MyString();
	char* getString() const;

	int length() const;
	void print() const;
	bool operator<(const MyString&) const;
	bool operator>(const MyString&) const;
	bool operator>=(const MyString&) const;
	bool operator<=(const MyString&) const;
	bool operator!=(const MyString&) const;
	MyString insert(int index, const char* str1);
	char& operator[](int index);
	
};