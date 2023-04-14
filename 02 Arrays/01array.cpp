
#include<iostream>
using namespace std;


int main(){

	int marks[10] = {-1};

	int n;
	cout<<"Enter the no of students ";
	cin>>n;


	//Input
	for(int i=1; i<=n; i++){
		cin>> marks[i];

		marks[i] = marks[i]*2;
	}

	//Update 

	//Output
	for(int i=1;i<10;i++){
		cout<< marks[i] <<" ,";
	}

	cout <<endl;


	return 0;
}