
// header.h

#include<iostream>
using namespace std;
class String{
	char *s;
	public:
			String();
			String(const char *p);
			String(const String &t);
			~String();
	
	String& operator=(const String& t);
	String operator+(const String& t);
	char& operator[](int x);
	
	friend ostream& operator<<(ostream& out,const String&t);
	friend istream& operator>>(istream& in,String&t);
	
	int operator==(const String &t);
	int operator!=(const String &t);
	int operator>(const String &t);
	int operator>=(const String &t);
	int operator<(const String &t);
	int operator<=(const String &t);
	
	friend void strcpy(String &a,String &b);
	friend void strncpy(String &a,String &b,int n);
	friend int strcmp(String &a,String &b);
	friend int strncmp(String &a,String &b,int n);
	friend void strcat(String &a,String &b);
	friend void strncat(String &a,String &b,int n);
	friend void strrev(String &a);
	friend void strupr(String &a);
	friend void strlwr(String &a);
	friend int strlen(String &a);
	friend char* strchr(String &a,char ch);
	friend char* strrchr(String &a,char ch);
	friend char* strstr(String &a,String &b);

} ;
