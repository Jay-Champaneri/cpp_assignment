#include<iostream>
using namespace std;

int main(){
	int attendance,total;
	float tests;
	cin>>attendance;
	cin>>tests;
	cin>>total;
	if(attendance>50 && tests>0.7 && total>5600){
		printf("10");
	}
	else if(attendance>50 && tests>0.7 && total<5600){
		printf("9");
	}
	else if(attendance<50 && tests>0.7 && total>5600){
		printf("8");
	}
	else if(attendance>50 && tests<0.7 && total>5600){
		printf("7");
	}
	if(attendance>50 && tests<0.7 && total<5600 || attendance<50 && tests>0.7 && total<5600 || attendance<50 && tests<0.7 && total>5600){
		printf("6");
	}
	if(attendance<50 && tests<0.7 && total<5600){
		printf("5");
	}
	return 0;
}
