#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>
#include<string>
using namespace std;

void wait(int seconds)
{
	clock_t endwait;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

void compiler()
{
	ofstream writeFile;
	ifstream readFile;
	char code[1000];
	char menu[800];
	system("cls");
	readFile.open("c_m2.txt");
	readFile.getline(menu, 799, EOF);
	cout << menu;
	readFile.close();

	cout << endl << endl;


	writeFile.open("file.cpp", ios::trunc);
	cin.getline(code, 999, '^');
	writeFile << code;
	writeFile.close();

	system("g++ file.cpp -o output");

	cout << "\n\n-------------------------------------------------------------------------------" << endl;
	cout << "\nOUTPUT: " << endl << endl;
	system("output.exe");
	remove("output.exe");

	cout << "\n\nPress any key to move on....";
	_getch();

	cout << "\n\nPlease wait";
	for (int n = 10; n > 0; n--)
	{
		cout << ".";
		wait(1);
	}
	
}

void compiler2(int ch7)
{
	ofstream writeFile;
	ifstream readFile;
	char code[1000];
	char menu[800];
	system("cls");
	readFile.open("intro.txt");
	readFile.getline(menu, 799, EOF);
	cout << menu;
	readFile.close();

	writeFile.open("file.cpp", ios::trunc);
	cin.getline(code, 999, '^');
	writeFile << code;
	writeFile.close();

	system("g++ file.cpp -o output");

	cout << "\n\n-------------------------------------------------------------------------------" << endl;
	cout << "\nOUTPUT: " << endl << endl;
	system("output.exe");
	remove("output.exe");

	cout << "\n\nPress enter to compare output !!" << endl;
	_getch();
	
	if (ch7 == 1)
		system("1.png");

	else if (ch7 == 2)
		system("2.png");

	else if (ch7 == 3)
		system("3.png");

	else if (ch7 == 4)
		system("4.png");

	else if (ch7==5)
		system("5.png");

	else if (ch7 == 6)
		system("6.png");

	cout << "\n\nPress any key to move on....";
	_getch();

	cout << "\n\nPlease wait";
	for (int n = 10; n > 0; n--)
	{
		cout << ".";
		wait(1);
	}

}

int main()
{
	ifstream readFile;
	ofstream writeFile;

	char data[3000];
	int ch1;
	char mm[1000];

	while (1)
	{
		system("cls");

		//MAIN MENU
		readFile.open("main_menu.txt");
		readFile.getline(mm, 999, EOF);
		cout << mm;
		readFile.close();

		cin >> ch1;

		if (ch1 == 1)
		{
			while (1)
			{
				system("cls");
				int ch2;

				readFile.open("learning_menu.txt");
				readFile.getline(mm, 999, EOF);
				cout << mm;
				readFile.close();

				cin >> ch2;

				if (ch2 == 1)
				{
					system("cls");

					readFile.open("output_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("output_p1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl << endl;
					readFile.open("output_p2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					// QUIZ STARTS HERE BI$$$

					int correct = 0;
					char ansOUT[5];

					system("cls");


					readFile.open("output_q1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[0];
					if (ansOUT[0] == 'c')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;

					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("output_q2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[1];
					if (ansOUT[1] == 'a')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("output_q3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[2];
					if (ansOUT[2] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("output_q4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[3];
					if (ansOUT[3] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("output_q5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[4];
					if (ansOUT[4] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					if (correct >= 3)
						cout << "\n\nWell Done!... YOU HAVE PASSED THE QUIZ"
						<< " & LEARNT THE BASIC OUTPUT of C++..!"
						<< endl << endl << "YOU MAY NOW PROCEED TO THE NEXT SECTION!" << endl;

					else
						cout << "\n\nAlas!.. YOU HAVE FAILED THE QUIZ"
						<< ", PLEASE REVISE THIS SECTION AGAIN..!" << endl;
					cout << "\n\nPress any key to move on........";
					_getch();

					system("cls");

				}

				if (ch2 == 2)
				{
					system("cls");

					readFile.open("variable_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("variable_p1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl << endl;
					readFile.open("variable_p2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					// QUIZ STARTS HERE BI$$$

					int correct = 0;
					char ansOUT[5];

					system("cls");


					readFile.open("variable_q1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[0];
					if (ansOUT[0] == 'c')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;

					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("variable_q2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[1];
					if (ansOUT[1] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("variable_q3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[2];
					if (ansOUT[2] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("variable_q4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[3];
					if (ansOUT[3] == 'a')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("variable_q5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[4];
					if (ansOUT[4] == 'c')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					if (correct >= 3)
						cout << "\n\nWELL DONE... YOU HAVE PASSED THE QUIZ"
						<< " & LEARNT THE VARIABLE and INPUT HANDLING."
						<< endl << endl << "YOU MAY NOW PROCEED TO THE NEXT SECTION!" << endl;

					else
						cout << "\n\nAlas!.. YOU HAVE FAILED THE QUIZ"
						<< ", PLEASE REVISE THIS SECTION AGAIN..!" << endl;

					cout << "\n\nPress any key to move on........";
					_getch();

					system("cls");

				}

				if (ch2 == 3)
				{
					system("cls");

					readFile.open("ifelse_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("ifNelse_p1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl << endl;
					readFile.open("ifNelse_p2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					// QUIZ STARTS HERE BI$$$

					int correct = 0;
					char ansOUT[5];

					system("cls");


					readFile.open("ifNelse_q1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[0];
					if (ansOUT[0] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;

					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("ifNelse_q2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[1];
					if (ansOUT[1] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("ifNelse_q3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[2];
					if (ansOUT[2] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("ifNelse_q4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[3];
					if (ansOUT[3] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("ifNelse_q5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[4];
					if (ansOUT[4] == 'c')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					if (correct >= 3)
						cout << "\n\nWELL DONE... YOU HAVE PASSED THE QUIZ"
						<< " & LEARNT THE if...else statements."
						<< endl << endl << "YOU MAY NOW PROCEED TO THE NEXT SECTION!" << endl;

					else
						cout << "\n\nAlas!.. YOU HAVE FAILED THE QUIZ"
						<< ", PLEASE REVISE THIS SECTION AGAIN..!" << endl;

					cout << "\n\nPress any key to move on........";
					_getch();

					system("cls");

				}

				if (ch2 == 4)
				{
					system("cls");

					readFile.open("loops_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();


					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("loops_p1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();

					_getch();

					system("cls");

					cout << endl;
					readFile.open("loops_p2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("loops_p3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("loops_p4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("loops_p5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("loops_p6.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					// QUIZ STARTS HERE BI$$$

					int correct = 0;
					char ansOUT[5];

					system("cls");


					readFile.open("loops_q1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[0];
					if (ansOUT[0] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;

					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("loops_q2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[1];
					if (ansOUT[1] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("loops_q3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[2];
					if (ansOUT[2] == 'a')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("loops_q4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[3];
					if (ansOUT[3] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("loops_q5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[4];
					if (ansOUT[4] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					if (correct >= 3)
						cout << "\n\nWELL DONE... YOU HAVE PASSED THE QUIZ"
						<< " & LEARNT THE LOOPS in C++."
						<< endl << endl << "YOU MAY NOW PROCEED TO THE NEXT SECTION!" << endl;

					else
						cout << "\n\nAlas!.. YOU HAVE FAILED THE QUIZ"
						<< ", PLEASE REVISE THIS SECTION AGAIN..!" << endl;

					cout << "\n\nPress any key to move on........";
					_getch();

					system("cls");

				}

				if (ch2 == 5)
				{
					system("cls");

					readFile.open("arrays_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();


					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("arrays_p1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();

					_getch();

					system("cls");

					cout << endl;
					readFile.open("arrays_p2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("arrays_p3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					// QUIZ STARTS HERE BOIII :D

					int correct = 0;
					char ansOUT[5];

					system("cls");


					readFile.open("arrays_q1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[0];
					if (ansOUT[0] == 'a')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;

					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("2arrays_q2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[1];
					if (ansOUT[1] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("arrays_q3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[2];
					if (ansOUT[2] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("arrays_q4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[3];
					if (ansOUT[3] == 'a')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("arrays_q5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[4];
					if (ansOUT[4] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					if (correct >= 3)
						cout << "\n\nWELL DONE... YOU HAVE PASSED THE QUIZ"
						<< " & LEARNT THE 1-D Arrays."
						<< endl << endl << "YOU MAY NOW PROCEED TO THE NEXT SECTION!" << endl;

					else
						cout << "\n\nAlas!.. YOU HAVE FAILED THE QUIZ"
						<< ", PLEASE REVISE THIS SECTION AGAIN..!" << endl;

					cout << "\n\nPress any key to move on........";
					_getch();

					system("cls");
				}

				if (ch2 == 6)
				{
					system("cls");

					readFile.open("2arrays_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();

					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("2arrays_p1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();

					_getch();

					system("cls");

					cout << endl;
					readFile.open("2arrays_p2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					system("cls");

					cout << endl << endl;
					readFile.open("2arrays_p3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data;
					readFile.close();
					_getch();

					// QUIZ STARTS HERE BOII :D

					int correct = 0;
					char ansOUT[5];

					system("cls");


					readFile.open("2arrays_q1.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[0];
					if (ansOUT[0] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;

					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("2arrays_q2.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[1];
					if (ansOUT[1] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("2arrays_q3.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[2];
					if (ansOUT[2] == 'b')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("2arrays_q4.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[3];
					if (ansOUT[3] == 'd')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					readFile.open("2arrays_q5.txt");
					readFile.getline(data, 49999, EOF);
					cout << data << endl;
					cin >> ansOUT[4];
					if (ansOUT[4] == 'a')
					{
						cout << "\n\nCORRECT! " << endl;
						correct++;
					}
					else
						cout << "\n\nWRONG! " << endl;
					cout << "\nPress any key to move on........";
					_getch();
					readFile.close();

					system("cls");

					if (correct >= 3)
						cout << "\n\nWELL DONE... YOU HAVE PASSED THE QUIZ"
						<< " & LEARNT THE 2-D Arrays."
						<< endl << endl << "YOU MAY NOW PROCEED TO THE NEXT SECTION!" << endl;

					else
						cout << "\n\nAlas!.. YOU HAVE FAILED THE QUIZ"
						<< ", PLEASE REVISE THIS SECTION AGAIN..!" << endl;

					cout << "\n\nPress any key to move on........";
					_getch();

					system("cls");
				}

				if (ch2 == 7)
					break;
			}



		}

		else if (ch1 == 2)
		{
			system("cls");
			int ch2, ch3;
			char name[30];

			//cin.ignore();
		//	cout << "\nPlease enter you name?" << endl;
			//cin.getline(name, 29);

			system("cls");

			while (1)
			{
				system("cls");
				int Mch;

				readFile.open("quizzez_Mmenu.txt");
				readFile.getline(mm, 999, EOF);
				cout << mm;
				readFile.close();
				cin >> Mch;

				if (Mch == 2)
				{
					system("cls");
					readFile.open("quizzez_menu2.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();

					cin >> ch2;

					if (ch2 == 1)
					{

						system("cls");
						int score = 0;

						readFile.open("categories_menu2.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[500];

						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'a', 'a', 'a', 'c', 'a', 'c', 'a', 'c', 'a' };
							readFile.open("output_easy.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'D', 'A', 'C', 'C', 'A', 'D', 'C', 'D', 'D', 'D' };
							readFile.open("output_med.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'B', 'B', 'D', 'D', 'C', 'A', 'D', 'D', 'A', 'D' };
							readFile.open("output_hard.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 2)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'c', 'b', 'b', 'c', 'b', 'a', 'c', 'b', 'b' };
							readFile.open("input_easy.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'c', 'c', 'a', 'a', 'd', 'a', 'd', 'a', 'b', 'c' };
							readFile.open("input_medium.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'd', 'c', 'c', 'b', 'c', 'b', 'a', 'b', 'c', 'c' };
							readFile.open("input_hard.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 3)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'c', 'b', 'd', 'd', 'b', 'c', 'c', 'd', 'a', 'd' };
							readFile.open("if_Q1.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'c', 'c', 'd', 'b', 'a', 'a', 'b', 'c', 'c', 'a' };
							readFile.open("if_Q2.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'd', 'c', 'd', 'a', 'c', 'a', 'b', 'b', 'b', 'a' };
							readFile.open("if_Q3.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 4)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'c', 'd', 'b', 'b', 'a', 'd', 'c', 'b', 'b' };
							readFile.open("easy_loops.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'd', 'a', 'c', 'a', 'c', 'a', 'd', 'd', 'd', 'b' };
							readFile.open("medium_loop.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Answer :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'a', 'c', 'd', 'a', 'a', 'b', 'd', 'c', 'd', 'a' };
							readFile.open("hard_loops.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 5)
					{
						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'a', 'c', 'c', 'b', 'a', 'a', 'c', 'd', 'b' };
							readFile.open("easy_1d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl << endl << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								else
									cout << "\n\nWrong :( ";

								cout << endl << "\nPress any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'a', 'd', 'd', 'a', 'b', 'd', 'c', 'b', 'c', 'a' };
							readFile.open("med_1d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Answer :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'd', 'd', 'd', 'a', 'd', 'd', 'd', 'b', 'a', 'c' };
							readFile.open("hard_1d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 6)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'd', 'd', 'a', 'd', 'a', 'd', 'c', 'b', 'b' };
							readFile.open("easy_2d.txt", ios::app);

							for (int i = 0; i < 5; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl << endl << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'B', 'A', 'B', 'B', 'D', 'B', 'D', 'C', 'A', 'A' };
							readFile.open("med_2d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Answer :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'D', 'B', 'D', 'C', 'C', 'D', 'C', 'A', 'C', 'C' };
							readFile.open("hard_2d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}
					else if (ch2 == 7)
					{
						break;
					}

					

				}

				else if (Mch == 1)
				{
					system("cls");
					readFile.open("quizzez_menu.txt");
					readFile.getline(mm, 999, EOF);
					cout << mm;
					readFile.close();

					cin >> ch2;

					if (ch2 == 1)
					{

						system("cls");
						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[500];

						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'a', 'a', 'a', 'c', 'a', 'c', 'a', 'c', 'a' };
							readFile.open("output_easy.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'D', 'A', 'C', 'C', 'A', 'D', 'C', 'D', 'D', 'D' };
							readFile.open("output_med.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'B', 'B', 'D', 'D', 'C', 'A', 'D', 'D', 'A', 'D' };
							readFile.open("output_hard.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 2)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'c', 'b', 'b', 'c', 'b', 'a', 'c', 'b', 'b' };
							readFile.open("input_easy.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'c', 'c', 'a', 'a', 'd', 'a', 'd', 'a', 'b', 'c' };
							readFile.open("input_medium.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'd', 'c', 'c', 'b', 'c', 'b', 'a', 'b', 'c', 'c' };
							readFile.open("input_hard.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 3)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'c', 'b', 'd', 'd', 'b', 'c', 'c', 'd', 'a', 'd' };
							readFile.open("if_Q1.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '!');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'c', 'c', 'd', 'b', 'a', 'a', 'b', 'c', 'c', 'a' };
							readFile.open("if_Q2.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'd', 'c', 'd', 'a', 'c', 'a', 'b', 'b', 'b', 'a' };
							readFile.open("if_Q3.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 4)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'c', 'd', 'b', 'b', 'a', 'd', 'c', 'b', 'b' };
							readFile.open("easy_loops.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'd', 'a', 'c', 'a', 'c', 'a', 'd', 'd', 'd', 'b' };
							readFile.open("medium_loop.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Answer :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'a', 'c', 'd', 'a', 'a', 'b', 'd', 'c', 'd', 'a' };
							readFile.open("hard_loops.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 5)
					{
						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'a', 'c', 'c', 'b', 'a', 'a', 'c', 'd', 'b' };
							readFile.open("easy_1d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl << endl << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								else
									cout << "\n\nWrong :( ";

								cout << endl << "\nPress any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'a', 'd', 'd', 'a', 'b', 'd', 'c', 'b', 'c', 'a' };
							readFile.open("med_1d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Answer :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'd', 'd', 'd', 'a', 'd', 'd', 'd', 'b', 'a', 'c' };
							readFile.open("hard_1d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}

					else if (ch2 == 6)
					{

						system("cls");

						int score = 0;

						readFile.open("categories_menu.txt");
						readFile.getline(mm, 999, EOF);
						cout << mm;
						readFile.close();

						char qd[1000];


						cin >> ch3;
						char ans;
						//					char ans2;

						if (ch3 == 1)
						{
							char ansOutput[10] = { 'b', 'd', 'd', 'a', 'd', 'a', 'd', 'c', 'b', 'b' };
							readFile.open("easy_2d.txt", ios::app);

							for (int i = 0; i < 5; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl << endl << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";
								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();


						}

						if (ch3 == 2)
						{
							char ansOutput[10] = { 'B', 'A', 'B', 'B', 'D', 'B', 'D', 'C', 'A', 'A' };
							readFile.open("med_2d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Answer :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}

						if (ch3 == 3)
						{
							char ansOutput[10] = { 'D', 'B', 'D', 'C', 'C', 'D', 'C', 'A', 'C', 'C' };
							readFile.open("hard_2d.txt", ios::app);

							for (int i = 0; i < 10; i++)
							{
								system("cls");
								cout << endl << endl;
								readFile.getline(qd, 999, '@');
								cout << qd;

								cout << endl;

								cin >> ans;

								if (ans == ansOutput[i])
								{
									cout << "\n\nCorrect Boy :)";

								}

								cout << endl << "Press any key to move on...";
								_getch();

							}

							readFile.close();

						}
					}
					else if (ch2 == 7)
					{
						break;
					}
				}

				else if (Mch == 2)
				{	
					cout << "MCH ";

				}

				else if (Mch==3)
					break;


			}

		}

		else if (ch1 == 3)
		{
			while (1)
			{

				int ch5;
				char menu[800];
				system("cls");
				readFile.open("compiler_menu.txt");
				readFile.getline(mm, 999, EOF);
				cout << mm;
				readFile.close();

				cin >> ch5;

				if (ch5 == 1)
				{
					system("cls");
					int ch7;
					char d3[1500];
					readFile.open("practice_ques.txt");
					readFile.getline(d3, 1499, EOF);
					cout << d3;
					readFile.close();

					cin >> ch7;

					if (ch7 == 7)
						break;

					int ch;

					while (1)
					{
						system("cls");
						readFile.open("intro.txt");
						readFile.getline(d3, 1499, EOF);
						cout << d3;
						readFile.close();

						cout << endl << endl;
						cout << "Press 1 to continue...." << endl;
						cout << "Press 0 to go back to Main Menu..." << endl;
						cin >> ch;

						if (ch == 1)
							compiler2(ch7);

						else
							break;

					}

				}

				else if (ch5 == 2)
				{
					system("cls");
					readFile.open("c_m2.txt");
					readFile.getline(menu, 799, EOF);
					cout << menu;
					readFile.close();

					cout << endl << endl;

					int ch;

					while (1)
					{
						system("cls");
						cout << menu;

						cout << endl << endl;
						cout << "Press 1 to continue...." << endl;
						cout << "Press 0 to go back to Main Menu..." << endl;
						cin >> ch;

						if (ch == 1)
						{
							compiler();

						}

						else
							break;
					}

				}

				else if (ch5 == 3)
					break;
			}
		}

		else if (ch1 == 4)
		{
			system("cls");
			char cre[2500];
			readFile.open("credits.txt");
			readFile.getline(cre, 2499, EOF);
			readFile.close();
			cout << cre;

			_getch();

		}

		else if (ch1 == 5)
			break;


	}


	cout << endl << endl;
	system("pause");

}

