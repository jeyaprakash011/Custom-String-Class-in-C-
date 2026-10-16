
#include"header.h"
// menber func 

String::String(){
	//cout << "default constructor" << endl;
	s=new char[1];
	*s='\0';
}
String::String(const char *p){
	//cout << "par constructor" << endl;
	int i=0;
	while(p[i]){
		i++;
	}
	s=new char[i+1];
	i=0;
	while(p[i]){
		s[i]=p[i];
		i++;
	}
	s[i]='\0';
}
String::String(const String &t){
	//cout << "copy constructor" << endl;
	int i=0;
	while(t.s[i])
		i++;
	s=new char[i+1];
	i=0;
	while(t.s[i]){
		s[i]=t.s[i];
		i++;
	}
	s[i]='\0';
}

String::~String(){
//cout << "destructor" << endl;
	delete []s;
}

// string func...

char* strstr(String &m,String &s){
		char* p=m.s;
		char* q=s.s;
		int count=0;
	
		while(*p){
			q=s.s;
			while(*p==*q && *q!='\0'){
				count++;
				p++;q++;
			}
			if(*q=='\0'){
				return p-count;
			}
		
			p=p-count;
			count=0;
			p++;
		}
		return nullptr;
}
char* strchr(String &a,char ch){
	char *p=a.s;
	while(*p!=0){
		if(*p==ch)
			return p;
		p++;
	}
	return nullptr;
}
char* strrchr(String &a,char ch){
	char *p=a.s;
	while(*(p+1))
		p++;
	while(p>=a.s){
		if(*p==ch)
			return p;
		p--;
	}
	return nullptr;
}
int strlen(String &a){
	int i=0;
	while(a.s[i])
		i++;
	return i;
}
void strrev(String &a){
	int i=0,j=0;
	while(a.s[j+1])
		j++;
	char ch;
	for(i,j;i<j;i++,j--){
		ch=a.s[i];
		a.s[i]=a.s[j];
		a.s[j]=ch;
	}	
}
void strupr(String &a){
	int i=0;
	while(a.s[i]){
		if(a.s[i]>=97 && a.s[i]<=122)
			a.s[i]=a.s[i]-32;
		i++;
	}
}
void strlwr(String &a){
	int i=0;
	while(a.s[i]){
		if(a.s[i]>=65 && a.s[i]<=90)
			a.s[i]=a.s[i]+32;
		i++;
	}
}
void strcat(String &b,String &a){
	int i=0,j=0,k=0;
	while(a.s[i])
		i++;
	while(b.s[j])
		j++;
	char *temp=new char[j+1];
	while(b.s[k]){
		temp[k]=b.s[k];
		k++;
	}
	temp[k]='\0';
	delete []b.s;
	b.s=new char[i+j+1];
	k=0;i=0;j=0;
	while(temp[k]){
		b.s[k]=temp[k];
		k++;
	}
	while(a.s[i]){
		b.s[k]=a.s[i];
		k++;i++;
	}
	b.s[k]='\0';
	delete []temp;
}
void strncat(String &b,String &a,int n){
	int i=0,j=0,k=0;
	while(a.s[i])
		i++;
	while(b.s[j])
		j++;
	char *temp=new char[j+1+n];
	while(b.s[k]){
		temp[k]=b.s[k];
		k++;
	}
	temp[k]='\0';
	delete []b.s;
	b.s=new char[j+n+1];
	k=0;i=0;j=0;
	while(temp[k]){
		b.s[k]=temp[k];
		k++;
	}
	while(i<n){
		if(a.s[i]=='\0')
			break;
		b.s[k]=a.s[i];
		k++;i++;
	}
	b.s[k]='\0';
	delete []temp;
}
int strcmp(String &a,String &b){
	int i=0,j=0;
	while(a.s[i])
		i++;
	while(b.s[j])
		j++;
	if(i!=j)
		return 0;
	else{
		i=0;
		while(i<j){
			if(a.s[i]!=b.s[i])
				return 0;
		i++;
		}
		return 1;
	}	
}
int strncmp(String &a,String &b,int n){
	int i=0,j=0;
	while(a.s[i])
		i++;
	while(b.s[j])
		j++;
	if(i>=n && j>=n){
		i=0;
		while(i<n){
			if(a.s[i]!=b.s[i])
				return 0;
		i++;
		}
		return 1;
	}		
	else
		return 0;	
}
void strncpy(String &a,String &b,int n){
	int i=0;
	delete []a.s;
	while(b.s[i])
		i++;
	a.s=new char[n+1];
	i=0;
	while(i<n){
		a.s[i]=b.s[i];
		i++;
	}
	a.s[i]='\0';
}
void strcpy(String &a,String &b){
	int i=0;
	delete []a.s;
	while(b.s[i])
		i++;
	a.s=new char[i+1];
	i=0;
	while(b.s[i]){
		a.s[i]=b.s[i];
		i++;
	}
	a.s[i]='\0';
}

// operator overloading func...

char& String::operator[](int x){
	return s[x];
}
String& String::operator=(const String&t){
	if(this==&t)
		return *this;
		int i=0;
		while(t.s[i])
			i++;
		delete []s;
		s=new char[i+1];
		i=0;
		while(t.s[i]){
			s[i]=t.s[i];
			i++;
		}
		s[i]='\0';
		return *this;
	}
String String::operator+(const String&t){
	String str;
		int i=0,j=0;
		while(s[i])
			i++;
		while(t.s[j])
			j++;
	delete []str.s;
	str.s=new char[i+j+1];
		i=0,j=0;
		while(s[i]){
			str.s[i]=s[i];
			i++;
		}
		while(t.s[j]){
			str.s[i]=t.s[j];
			i++;j++;
		}
		str.s[i]='\0';
		return str;		
	}
ostream& operator<<(ostream& out,const String&t){
	out << t.s;
	return out;
}
/*istream& operator>>(istream& in,String&t){
	char temp[100];
	in>>temp;
	int i=0;
	while(temp[i])
		i++;
	delete []t.s;
	t.s=new char[i+1];
	i=0;
	while(temp[i]){
		t.s[i]=temp[i];
		i++;
	}
	t.s[i]='\0';
	return in;
}*/
istream& operator>>(istream& in,String&t){
	char* p=new char[4];
	int l=0,d=4,i;
	char ch,*q=nullptr;
	while(1){
		in.get(ch);
		if(ch!='\n' && ch!=32){
		if(l+1<d)
			p[l++]=ch;	
		else{
			d*=2;
			q=new char[d];
			i=0;
			while(i<l){
				q[i]=p[i];
				i++;
			}
			delete []p;
			p=q;
			q=nullptr;
			p[l++]=ch;
		}
		}
		else
			break;
	}	
	p[l]='\0';
	i=0;
	while(p[i])
		i++;
	delete []t.s;
	t.s=new char[i+1];
	i=0;
	while(p[i]){
		t.s[i]=p[i];
		i++;
	}
	t.s[i]='\0';
	return in;
}
int String::operator==(const String &t){
	int i=0,j=0;
	while(t.s[i])
		i++;
	while(s[j])
		j++;
	if(i==j){
		i=0;
		while(i<j ){
			if(t.s[i]!=s[i])
				return 0;	
			i++;
		}
		return 1;
	}
	else
		return 0;
}
int String:: operator!=(const String &t){
	int i=0,j=0;
	while(t.s[i])
		i++;
	while(s[j])
		j++;
	if(i==j){
		i=0;
		while(i<j ){
			if(t.s[i]!=s[i])
				return 1;
			i++;
		}
		return 0;
	}
	else
		return 1;
}
int String::operator>(const String &t){
	int i=0,j=0;
	while(t.s[i])
		i++;
	while(s[j])
		j++;
	if(j>i){
		return 1;
	}
	else if(i==j){
		i=0;
		while(i<j ){
			if(t.s[i]<s[i])
				return 1;
			else if(t.s[i]>s[i])
				return 0;
			i++;
		}
		return 0;
	}
	else
		return 0;
}
int String::operator>=(const String &t){
	int i=0,j=0;
	while(t.s[i])
		i++;
	while(s[j])
		j++;
	if(j>i){
		return 1;
	}
	else if(i==j){
		i=0;
		while(i<j ){
			
			if(t.s[i]<s[i])
				return 1;
			else if(t.s[i]>s[i])
				return 0;
			i++;
		}
		return 1;
	}
	else
		return 0;
}
int String::operator<(const String &t){
	int i=0,j=0;
	while(t.s[i])
		i++;
	while(s[j])
		j++;
	if(j<i){
		return 1;
	}
	else if(i==j){
		i=0;
		while(i<j ){
			if(s[i]<t.s[i])
				return 1;
			if(s[i]>t.s[i])
				return 0;
			i++;
		}
		return 0;
	}
	else
		return 0;
}
int String::operator<=(const String &t){
	int i=0,j=0;
	while(t.s[i])
		i++;
	while(s[j])
		j++;
	if(j<i){
		return 1;
	}
	else if(i==j){
		i=0;
		while(i<j ){
			
			if(s[i]<t.s[i])
				return 1;
			else if(s[i]>t.s[i])
				return 0;
			i++;
		}
		return 1;
	}
	else
		return 0;
}
