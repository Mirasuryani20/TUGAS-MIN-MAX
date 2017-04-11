#include <iostream>
using namespace std;

//variabel global
int a, b;

//Program Utama
	int main(){
		cout<<"Masukan nilai A:";
		cin>>a;
		cout<<"Masukan nilai B:";
		cin>>b;
		
		cout<<"---------------------------"<<endl;
		
		if(a < b){
			cout<<"Nilai Maksimum:"<<b<<endl;
			cout<<"Nilai Minimum:"<<a<<endl;
		}
			else {
				cout<<"Nilai Maksimum:"<<a<<endl;
				cout<<"Nilai Minimum:"<<b<<endl;
			}
	return 0;
	}