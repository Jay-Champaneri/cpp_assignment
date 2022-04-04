#include<iostream>
#include<string>
using namespace std;

class charInput{
	public:
	string str="";
	void charadd(char c){
		str = str + c;
	}
};
class numInput : public charInput{
	public:
	string str1 ="";
	void numadd(char d){
		str1 = str1 + d;
	}
	void getValue(){
		cout<<str1;
	}
};
int main(){
	numInput i1,i2;
	i1.numadd('0');
	i1.numadd('0');
	i1.charadd('a');
	i1.getValue();
	i2.charInput::charadd('a');
	i2.getValue();
	return 0;
}
