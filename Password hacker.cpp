#include <iostream>
using namespace std;

int main(){
	int pass; bool trigger = false;
	string stringy1;
	cout << "Enter an eight digit password: " << endl;
	cin >> pass;

	cout << "How do you like your eggs cooked " << endl;
	getline(cin,stringy1);

	//ADD AN EXAMPLE OF GETLINE!!!

	for(int i= 0;i < 10; i++){
	for(int j= 0;j < 10; j++){
		for(int k= 0;k < 10; k++){
		for(int l= 0;l < 10; l++){
			for(int m= 0;m < 10; m++){
			for(int n= 0;n < 10; n++){
				for(int o= 0;o < 10; o++){
				for(int p= 0;p < 10; p++){
					int newI = i * 10000000; int newJ = j * 1000000;
					int newK = k * 100000; int newL = l * 10000;
					int newM = m * 1000; int newN = n * 100;
					int newO = o * 10; int newP = p * 1;
					if(newI + newJ + newK + newL +newM + newN + newO + newP == pass){
						cout << "Correct password "; trigger = true;
						cout << "i = " << i << "  j = " << j << " k = " << k << "  l = " << l << endl;
					}
				}
				}
			}
			}
		}
		}
	}
	}
	if(trigger == false){
		cout << "Couldn't hack password. You win! ";
	}

}
