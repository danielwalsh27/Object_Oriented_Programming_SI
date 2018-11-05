//This was not a formal lesson that they used the whiteboard, I put this program on the TV so they can see the speed of computing.
//Create two int vars and a boolean trigger
//Prompt user for input
//8 nested for loops
//multiple each number by its respective power, see graph
//adding all these together gives us our new number that we need to compare to the password
//Use trigger to say we couldn't hack the password, if we couldn't hack it

#include <iostream>
using namespace std;

int main(){
	//Create two int vars and a boolean trigger
	int pass, temp; bool trigger = false;

	//Prompt user for input
	cout << "Enter an eight digit password: " << endl;
	cin >> pass;

	//8 nested for loops
	for(int i= 0;i < 10; i++){ 				//10^7 = 10,000,000
	for(int j= 0;j < 10; j++){ 				//10^6 = 1,000,000
		for(int k= 0;k < 10; k++){ 			//10^5 = 100,000
		for(int l= 0;l < 10; l++){ 			//10^4 = 10,000
			for(int m= 0;m < 10; m++){ 		//10^3 = 1,000
			for(int n= 0;n < 10; n++){ 		//10^2 = 100
				for(int o= 0;o < 10; o++){ 	//10^1 = 10
				for(int p= 0;p < 10; p++){ 	//10^0 = 1

				//we had to multiple each number by its respective power, use this graph ^^^
				int newI = i * 10000000; int newJ = j * 1000000;
				int newK = k * 100000; int newL = l * 10000;
				int newM = m * 1000; int newN = n * 100;
				int newO = o * 10; int newP = p * 1;

				//adding all these together gives us our new number that we need to compare to the password
				temp = newI + newJ + newK + newL +newM + newN + newO + newP;
				if(temp == pass){
					cout << "\nWe were able to hack your password, it took us " << temp + 1 << " attempts.\n" << endl;
					cout << "Also, we did 100,000,000 (one hundred million) iterations on this program." << endl;
					cout << "Each for loop looks as such:" << endl;
					cout << "\t Loop P completes its 10 iterations first (10^1 = 10)" << endl;
					cout << "\t Loop O then completes its 10 iterations, but that means that Loop P has completed a total of 100 iterations (10^2 = 100)"<< endl;
					cout << "\t Loop N does its 10 iterations (10^3 = 1,000 total iterations for Loop P now)" << endl;
					cout << "\t Loop M does its 10 iterations (10^4 = 10,000 total iterations for Loop P now)" << endl;
					cout << "\t Loop L does its 10 iterations (10^5 = 100,000 total iterations for Loop P now)" << endl;
					cout << "\t Loop K does its 10 iterations (10^6 = 1,000,000 total iterations for Loop P now)" << endl;
					cout << "\t Loop J does its 10 iterations (10^7 = 10,000,000 total iterations for Loop P now)" << endl;
					cout << "\t Loop I does its 10 iterations (10^8 = 100,000,000 total iterations for Loop P now)" << endl;
					trigger = true;
				}
//				else{
//					cout << "Couldn't hack password. You win! ";
//					}
				}
				}
			}
			}
		}
		}
	}
	}
	//Use trigger to say we couldn't hack the password, if we couldn't hack it
	if(trigger == false){
		cout << "Couldn't hack password. You win! ";
	}
	return 0;
}
//REQURIED LESSON- Students were very confused that we couldn't use an If/else statement. I taught them the use of a bool trigger.
//By explanation only about half the students were able to grasp the concept, once I uncommented it out, they saw that it'll display MANY times.
//This was not a formal lesson I had them write, this was to show the speed of the computing.
