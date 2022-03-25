#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> lst;
	int i;
	for(i=0;i<10;i++){
		lst.push_back(i);
	}
	cout<<"size="<<lst.size()<<endl;
	cout<<"contents";
	list<int>::iterator p = lst.begin();
	while(p!=lst.end())
	{
		cout<<&p<<" ";
		p++;	
	}
	cout<<"\n\n";
	p = lst.begin();
	while(p!=lst.end()){
		*p = *p+100;
		p++;
	}
	cout<<"contents modified";
	p = lst.begin();
	while(p!=lst.end()){
		cout<<*p<<" ";
		p++;
	}
	return 0;
}
