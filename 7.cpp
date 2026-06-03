#include<iostream>
#include<locale>
#include<cstdlib>

using namespace std;
void por(int *p){
	cout<<"\nnada";
	cout<<*p;
}
int main(){
	setlocale(LC_ALL, "spanish");
	int x=10 ;
	int* p=&x;
	cout<<"|"<<x<<"|"<<"|"<<*p<<"|"<<"|"<<&x<<"|"<<p<<"|";
	por(&x);
}
