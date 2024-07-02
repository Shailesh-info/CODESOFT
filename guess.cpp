#include <iostream>
#include <cstdlib>
#include <ctime>
//#include<conio.h>
using namespace std;
int main()
{
int no, guess;
int tries=0;
cout << "--Guess game started-- \n\n";
srand(time(0));
no = rand() % 100 + 1;
cout << "some info about game>>>>\n";
cout << "->You have unlimited attemps for the correct number\n";
cout << "-->low the Guess number to be champion\n";
   do{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

	 	if (guess > no)
		 	cout << "Too high!\n\n";
	 	else if (guess < no)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	 } while (guess != no);

	return 0;
}