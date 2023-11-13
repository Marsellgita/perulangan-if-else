#include<iostream>

using namespace std;

int main(){
	int baris_07687_marsela;
	char  huruf_07687_marsela='a';
	cout<<"masukkan angka: ";
	cin>> baris_07687_marsela;
	
	for(int i_07687_marsela=1; i_07687_marsela<=baris_07687_marsela; i_07687_marsela++){
	
		for(int j_07687_marsela=1; j_07687_marsela<=baris_07687_marsela; j_07687_marsela++){
			
			if (j_07687_marsela==1){
				cout<<"*";
			}
			else if(j_07687_marsela==5){
				cout<<"*";
			}
			else if(i_07687_marsela==1){
				cout<<"*";
			}
			else if(i_07687_marsela==5){
				cout<<"*";
			}
			else {
				cout<<huruf_07687_marsela++;
			}
			
		}
		cout<<endl;
	}
}

