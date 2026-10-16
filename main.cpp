#include"header.h"

int main(){
	String s1,s2(""),s3("1234"),s4(s1);
	
	cout <<"s1="<< s1<< endl;
	cout <<"s2="<< s2<< endl;
	cout <<"s3="<< s3<< endl;
	cout <<"s4="<< s4<< endl;
	
	cout << endl << "**************************************" << endl;
	
	cout << "assign jeyaprakash to s1" << endl;
	s1="jeyaprakash";
	cout <<"s1="<< s1 << endl;
	
	cout << endl << "**************************************" << endl;
	cout <<"s1="<< s1<< endl;
	cout <<"s3="<< s3<< endl;
	cout << "s2=s1+s3" << endl;
	s2=s1+s3;
	cout <<"s2= "<< s2 << endl;
	
	cout << endl << "**************************************" << endl;
	cout << "print s2[2]"<< endl;
	cout << "s2= "<< s2 << endl;
	cout <<"s2[2]= "<< s2[2] << endl;
	
	cout << endl << "**************************************" << endl;
	cout << "enter name for obj s4 : " << endl; 
	cin >> s4;
	cout <<"s4= "<< s4 << endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout << "strlen(s1): " << strlen(s1) << endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout <<"s2=" << s2 << endl;
	cout << "strcpy(s2,s1)" << endl;
	strcpy(s2,s1);
	cout <<"s2= "<< s2 << endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout <<"s3=" << s2 << endl;
	cout << "strncpy(s3,s1,5)" << endl;
	strncpy(s3,s1,5);
	cout <<"s3= "<< s3 << endl;
	
	cout << endl << "**************************************" << endl;
	cout <<"s1="<< s1<< endl;
	cout <<"s2="<< s2<< endl;
	cout <<"s3="<< s3<< endl;
	cout <<"s4="<< s4<< endl;
	cout <<endl << "checking comp operators " << endl;
	
	cout <<endl << "s1==s2	" << "result: " << (s1==s2) << endl;
	cout << "s1==s3	" << "result: " << (s1==s3) << endl;
	cout << "s1!=s3	" << "result: " << (s1!=s3) << endl;
	cout << "s1!=s2	" << "result: " << (s1!=s2) << endl;
	cout << "s3>s1	" << "result: " << (s3>s1) << endl;
	cout << "s1>s3	" << "result: " << (s1>s3) << endl;
	cout << "s3>=s1	" << "result: " << (s3>=s1) << endl;
	cout << "s1>=s3	" << "result: " << (s1>=s3) << endl;
	cout << "s1<s3	" << "result: " << (s1<s3) << endl;
	cout << "s3<s1	" << "result: " << (s3<s1) << endl;
	cout << "s1<=s2	" << "result: " << (s1<=s2) << endl;
	cout << "s3<=s1	" << "result: " << (s3<=s1) << endl<< endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout <<"s2=" << s2 << endl;
	cout<< "strcmp(s2,s1)	"<< "res: "<< strcmp(s2,s1)<< endl<<endl;
	
	cout << "s1=" << s1 << endl;
	cout <<"s4=" << s4 << endl;
	cout<< "strcmp(s4,s1)	"<< "res: "<< strcmp(s4,s1)<< endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout <<"s3=" << s3 << endl;
	cout<< "strncmp(s3,s1,4)	"<< "res: "<< strncmp(s3,s1,4)<< endl<<endl;
	cout << "s1=" << s1 << endl;
	cout <<"s4=" << s4 << endl;
	cout<< "strncmp(s4,s1,4)	"<< "res: "<< strncmp(s4,s1,4)<< endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout <<"s4=" << s4 << endl;
	cout<< "strcat(s4,s1,)	"<< "s4= ";
	strcat(s4,s1);
	cout << s4 << endl<<endl;
	
	cout << "s1=" << s1 << endl;
	cout <<"s3=" << s3 << endl;
	cout<< "strncat(s3,s1,5)	"<< "s3= ";
	strncat(s3,s1,5);
	cout<<s3 << endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s1=" << s1 << endl;
	cout << "strrev(s1): ";
	strrev(s1);
	cout << "s1="<<s1<<endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s2=" << s2 << endl;
	cout << "strupr(s2): ";
	strupr(s2);
	cout << "s2="<<s2<<endl;
	
	cout << endl << "**************************************" << endl;
	cout << "s2=" << s2 << endl;
	cout << "strlwr(s2): ";
	strlwr(s2);
	cout << "s2="<<s2<<endl;
	
	cout << endl << "**************************************" << endl;
	cout <<"s2= "<< s2 << endl;
	cout <<"strchr(s2,'a')	" <<"result: "<< strchr(s2,'a') <<endl;
	
	cout << endl << "**************************************" << endl;
	cout <<"s2= "<< s2 << endl;
	cout <<"strrchr(s2,'a')	" <<"result: "<< strrchr(s2,'a') <<endl;
	
	cout << endl << "**************************************" << endl;
	cout <<"s4= "<< s4 << endl;
	cout <<"s2= "<< s2 << endl;
	cout <<"strstr(s4,s2)	" <<"result: "<< strstr(s4,s2) <<endl;
	
	
	
}
