﻿#include<iostream>
#include<conio.h>
#include<ctime>
#include<string>
#include"windows.h"

using namespace std;
int main() {
	srand(time(NULL));
	int currentX = 1;
	int currentY = 1;
	int cointX = 0;
	int cointY = 0;
	string code;
	const int sizeMap = 30;
	bool isGameOver = false;
	bool isWin = false;
	int coint = 0;
	int keys = 0;
	int keyX = 0;
	int keyY = 0;
	char maze[sizeMap][sizeMap]{
'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
'#','0',' ','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','#',
'#','0','0','0','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','0','0','#','0','#',
'#','0','#','#','#','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','#','0','#',
'#','0','0','0','0','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','0','#',
'#','0','#','0','0','#','0','0','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','#','0','#',
'#','0','#','0','0','#','0','/','0','#','0','0','#','0','0','#','#','#','#','#','/','#','#','#','#','#','#','#','0','#',
'#','0','#','0','0','#','0','#','0','#','0','0','#','#','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','#',
'#','0','#','0','0','#','0','#','0','#','0','#','0','0','#','0','0','#','0','0','#','0','#','#','#','#','#','#','#','#',
'#','0','#','0','0','0','0','/','0','0','0','0','#','0','#','#','0','#','0','0','0','0','0','0','0','0','0','0','0','#',
'#','0','#','#','#','#','#','#','#','#','#','#','#','#','#','#','0','0','#','0','#','0','#','#','#','#','#','0','0','#',
'#','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','#','0','0','0','0','0','0','#',
'#','0','#','0','#','0','#','#','#','#','#','#','#','#','#','#','#','0','0','#','#','#','#','0','#','#','#','#','#','#',
'#','0','/','0','#','0','#','0','0','0','0','#','0','0','0','0','0','0','0','0','0','0','0','0','#','0','0','0','0','#',
'#','0','0','0','#','0','#','0','0','0','0','#','0','0','0','0','#','0','#','#','#','/','#','0','#','0','0','#','#','#',
'#','0','0','#','#','0','#','0','#','0','#','.','0','#','0','#','#','0','#','0','/','0','#','0','#','0','0','0','0','#',
'#','0','0','0','#','#','/','#','#','#','#','#','#','#','#','#','#','#','#','#','#','0','#','0','#','#','#','0','0','#',
'#','0','#','0','0','#','0','0','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','#','0','#',
'#','0','#','0','0','#','0','#','0','#','0','0','#','0','0','#','#','#','#','#','#','#','#','#','#','#','#','#','0','#',
'#','0','#','0','0','#','0','#','0','#','0','0','#','#','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','#',
'#','0','#','0','0','#','0','#','0','#','0','#','0','0','#','0','0','#','0','.','#','0','#','#','#','#','/','#','#','#',
'#','0','#','0','0','.','0','#','0','0','0','0','#','0','#','#','0','#','0','0','0','0','0','0','0','0','0','0','0','#',
'#','0','#','#','#','#','#','#','#','#','#','#','#','#','#','#','0','0','#','0','#','0','#','#','#','#','#','0','0','#',
'#','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','#','0','0','0','0','0','0','#',
'#','0','#','0','#','0','#','#','#','#','#','#','#','#','#','#','#','0','0','#','#','#','#','0','0','0','#','0','#','#',
'#','0','0','0','#','0','#','0','0','0','0','#','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','F','#',
'#','0','#','.','#','0','#','0','0','0','0','#','0','0','0','0','#','0','#','#','#','#','#','0','#','0','0','#','#','#',
'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',
	};
	for (int i = 0; i < 1000; i++) {
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		system("color 4");	cout << "                          #######################################################################" << endl;
		system("color 4");	cout << "                          ##                                                                   ##" << endl;
		system("color 4");	cout << "                          ##                                                                   ##" << endl;
		system("color 4");	cout << "                          ##                                                                   ##" << endl;
		system("color 4");	cout << "                          ##              ######    ###        ####  ###    ###                ##" << endl;
		system("color 4");	cout << "                          ##              ########  ###       #####   ###  ####                ## " << endl;
		system("color 4");	cout << "                          ##              ###  ###  ###       ## ###   #######                 ## " << endl;
		system("color 4");	cout << "                          ##              ########  ###      ### ####   #####                  ## " << endl;
		system("color 4");  cout << "                          ##              ######    ###     #########   ####                   ## " << endl;
		system("color 4");	cout << "                          ##              ###       ###### ####   ####  ####                   ##  " << endl;
		system("color 4");	cout << "                          ##                                                                   ##  " << endl;
		system("color 4");	cout << "                          ##                          PRESS ENTER                              ##  " << endl;
		system("color 4");	cout << "                          ##                                                                   ##  " << endl;
		system("color 4");	cout << "                          ##                                                                   ## " << endl;
		system("color 4");	cout << "                          #######################################################################  " << endl;

		int key = _getch();
		if (key == 13) {
			i = 999;
			system("cls");
		}
		else {
			cin >> code;
			if (code == "BY021") {
				system("cls");
				system("color 3");

				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '$';
						i++;
						cointX = g;
						cointY = t;
					}

				}
				for (int i = 0; i < 1;) {
					int g = rand() % 29;
					int t = rand() % 29;
					if (maze[g][t] == '0' && maze[g][t] != '$')
					{
						maze[g][t] = '*';
						i++;
						keyX = g;
						keyY = t;
					}
					else if (maze[g][t] == '$') {
						g = rand() % 28;
						t = rand() % 28;
					}

				}

				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}

					cout << endl;
				}
				cout << "coint-> " << coint << endl;
				cout << "key-> " << keys;

				do {


					int key = _getch();

					switch (key)
					{
					case 119: {

						if (maze[currentX - 1][currentY] == '.') {
							system("cls");
							system("color 4");
							cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
								<< endl;
							return 0;
						}
						else if (maze[currentX - 1][currentY] == 'F') {
							if (coint >= 4) {
								system("cls");
								system("color 2");
								cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
									<< endl;
								return 0;
							}
							else {
								currentX - 1;
								for (int i = 0; i < sizeMap; i++)
								{
									for (int j = 0; j < sizeMap; j++)
									{
										if (maze[i][j] == '0') {
											cout << "  ";
										}
										else {
											cout << " " << maze[i][j];
										}
									}

									cout << endl;
								}
								cout << "coint-> " << coint;
								cout << "key-> " << keys;

							}
						}

						else if (maze[currentX][currentY] == maze[keyX][keyY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '*';
									i++;
									keyX = g;
									keyY = t;
								}

							}
							keys++;
						}
						else if (maze[currentX - 1][currentY] == '/' && keys == 0)
						{
							maze[currentX][currentY] = ' ';
							currentX--;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
						}
						else if (maze[currentX][currentY + 1] == '/' && keys > 0)
						{
							maze[currentX][currentY] = ' ';

							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
							keys--;
						}
						else if (maze[currentX - 1][currentY] == '#')
						{
						

						system("cls");
						maze[currentX][currentY] = '#';
						currentX--;
						maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
						maze[currentX+1][currentY] = '#';
						for (int i = 0; i < sizeMap; i++)
						{
							for (int j = 0; j < sizeMap; j++)
							{
								if (maze[i][j] == '0') {
									cout << "  ";
								}
								else {
									cout << " " << maze[i][j];
								}
							}
							cout << endl;
						}
						cout << "coint-> " << coint;
						cout << "key-> " << keys;



						}
						else if (maze[currentX - 1][currentY] != '#')
						{
							system("cls");
							maze[currentX][currentY] = ' ';
							currentX--;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
							cout << "coint-> " << coint;
							cout << "key-> " << keys;



						}break;



					case 100: {
						system("cls");
						if (maze[currentX][currentY + 1] == '.') {
							system("cls");
							system("color 4");
							cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
								<< endl;
							return 0;
						}
						else if (maze[currentX][currentY + 1] == 'F') {
							if (coint >= 4) {
								system("cls");
								system("color 2");
								cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
									<< endl;
								return 0;
							}
							else {
								currentY + 1;
								for (int i = 0; i < sizeMap; i++)
								{
									for (int j = 0; j < sizeMap; j++)
									{
										if (maze[i][j] == '0') {
											cout << "  ";
										}
										else {
											cout << " " << maze[i][j];
										}
									}

									cout << endl;
								}
								cout << "coint-> " << coint;
								cout << "key-> " << keys;

							}
						}
						else if (maze[currentX][currentY] == maze[cointX][cointY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '$';
									i++;
									cointX = g;
									cointY = t;
								}

							}
							coint++;
						}
						else if (maze[currentX][currentY] == maze[keyX][keyY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '*';
									i++;
									keyX = g;
									keyY = t;
								}

							}
							keys++;
						}
						else if (maze[currentX][currentY + 1] == '/' && keys == 0)
						{
							maze[currentX][currentY] = ' ';
							currentY + 1;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
						}
						else if (maze[currentX][currentY + 1] == '#')
						{
						maze[currentX][currentY] = '#';
						currentY++;
						maze[currentX][currentY] = 'P';
						maze[currentX][currentY - 1 ] = '#';//Вставляє нашого героя на потрібно позицію!
						for (int i = 0; i < sizeMap; i++)
						{
							for (int j = 0; j < sizeMap; j++)
							{
								if (maze[i][j] == '0') {
									cout << "  ";
								}
								else {
									cout << " " << maze[i][j];
								}
							}


							cout << endl;
						}
						cout << "coint-> " << coint;
						cout << "key-> " << keys;
						}


						else if (maze[currentX][currentY + 1] != '#')
						{
							maze[currentX][currentY] = ' ';
							currentY++;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}


								cout << endl;
							}
							cout << "coint-> " << coint;
							cout << "key-> " << keys;
						}
					}break;



					case 115: {
						system("cls");
						if (maze[currentX + 1][currentY] == '.') {
							system("cls");
							system("color 4");
							cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
								<< endl;
							return 0;
						}
						else if (maze[currentX + 1][currentY] == 'F') {
							if (coint >= 4) {
								system("cls");
								system("color 2");
								cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
									<< endl;
								return 0;
							}
							else {
								currentX + 1;
								for (int i = 0; i < sizeMap; i++)
								{
									for (int j = 0; j < sizeMap; j++)
									{
										if (maze[i][j] == '0') {
											cout << "  ";
										}
										else {
											cout << " " << maze[i][j];
										}
									}

									cout << endl;
								}
								cout << "coint-> " << coint << endl;;
								cout << "key-> " << keys;

							}
						}
						else if (maze[currentX][currentY] == maze[cointX][cointY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '$';
									i++;
									cointX = g;
									cointY = t;
								}

							}
							coint++;
						}
						else if (maze[currentX][currentY] == maze[keyX][keyY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '*';
									i++;
									keyX = g;
									keyY = t;
								}

							}
							keys++;
						}
						else if (maze[currentX + 1][currentY] == '/' && keys == 0)
						{
							maze[currentX][currentY] = ' ';
							currentX + 1;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
						}
						else if (maze[currentX + 1][currentY] == '#')
						{
						maze[currentX][currentY] = '#';
						currentX++;
						maze[currentX][currentY] = 'P';
						maze[currentX-1][currentY] = '#';//Вставляє нашого героя на потрібно позицію!
						for (int i = 0; i < sizeMap; i++)
						{
							for (int j = 0; j < sizeMap; j++)
							{
								if (maze[i][j] == '0') {
									cout << "  ";
								}
								else {
									cout << " " << maze[i][j];
								}
							}
							cout << endl;
						}
						cout << "coint-> " << coint << endl;
						cout << "key-> " << keys;
							}

						else if (maze[currentX + 1][currentY] != '#')
						{
							maze[currentX][currentY] = ' ';
							currentX++;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
							cout << "coint-> " << coint << endl;
							cout << "key-> " << keys;
							}
			              break;



					case 97: {
						system("cls");
						if (maze[currentX][currentY - 1] == '.') {
							system("cls");
							system("color 4");
							cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
								<< endl;
							return 0;
						}
						else if (maze[currentX][currentY - 1] == 'F') {
							if (coint >= 4) {
								system("cls");
								system("color 2");
								cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
									<< endl;
								return 0;
							}
							else {
								currentY - 1;
								for (int i = 0; i < sizeMap; i++)
								{
									for (int j = 0; j < sizeMap; j++)
									{
										if (maze[i][j] == '0') {
											cout << "  ";
										}
										else {
											cout << " " << maze[i][j];
										}
									}

									cout << endl;
								}
								cout << "coint-> " << coint << endl;
								cout << "key-> " << keys;

							}
						}
						else if (maze[currentX][currentY] == maze[cointX][cointY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '$';
									i++;
									cointX = g;
									cointY = t;
								}

							}
							coint++;
						}

						else if (maze[currentX][currentY - 1] == '/' && keys == 0)
						{
							maze[currentX][currentY] = ' ';
							currentY--;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
						}

						else if (maze[currentX][currentY] == maze[keyX][keyY]) {
							for (int i = 0; i < 1;) {
								int g = rand() % 30;
								int t = rand() % 30;
								if (maze[g][t] == '0')
								{
									maze[g][t] = '*';
									i++;
									keyX = g;
									keyY = t;
								}

							}
							keys++;
						}
						else if (maze[currentX][currentY - 1] == '#')
						{
						maze[currentX][currentY] = '#';
						currentY--;
						maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
						maze[currentX][currentY + 1] = '#';
						for (int i = 0; i < sizeMap; i++)
						{
							for (int j = 0; j < sizeMap; j++)
							{
								if (maze[i][j] == '0') {
									cout << "  ";
								}
								else {
									cout << " " << maze[i][j];
								}
							}
							cout << endl;
						}
						}
						else if (maze[currentX][currentY - 1] != '#')
						{
							maze[currentX][currentY] = ' ';
							currentY--;
							maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
							for (int i = 0; i < sizeMap; i++)
							{
								for (int j = 0; j < sizeMap; j++)
								{
									if (maze[i][j] == '0') {
										cout << "  ";
									}
									else {
										cout << " " << maze[i][j];
									}
								}
								cout << endl;
							}
						}
						cout << "coint-> " << coint << endl;
						cout << "key-> " << keys;
					}break;
					}





					}while (isGameOver != true || isWin != true);
					}
				} while (isGameOver != true || isWin != true);
			}
			else {
				system("cls");
				continue;
				system("cls");
			}
		}
	}
	system("color 3");
	
	for (int i = 0; i < 1;) {
		int g = rand() % 30;
		int t = rand() % 30;
		if (maze[g][t] == '0')
		{
			maze[g][t] = '$';
			i++;
			cointX = g;
			cointY = t;
		}

	}
	for (int i = 0; i < 1;) {
		int g = rand() % 29;
		int t = rand() % 29;
		if (maze[g][t] == '0' && maze[g][t] != '$')
		{
			maze[g][t] = '*';
			i++;
			keyX = g;
			keyY = t;
		}
		else if (maze[g][t] == '$') {
			g = rand() % 28;
			t = rand() % 28;
		}

	}

	maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
	for (int i = 0; i < sizeMap; i++)
	{
		for (int j = 0; j < sizeMap; j++)
		{
			if (maze[i][j] == '0') {
				cout << "  ";
			}
			else {
				cout << " " << maze[i][j];
			}
		}

		cout << endl;
	}
	cout << "coint-> " << coint << endl;
	cout << "key-> " << keys;

	do {


		int key = _getch();

		switch (key)
		{
		case 119: {

			if (maze[currentX - 1][currentY] == '.') {
				system("cls");
				system("color 4");
				cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
					<< endl;
				return 0;
			}
			else if (maze[currentX - 1][currentY] == 'F') {
				if (coint >= 4) {
					system("cls");
					system("color 2");
					cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
						<< endl;
					return 0;
				}
				else {
					currentX - 1;
					for (int i = 0; i < sizeMap; i++)
					{
						for (int j = 0; j < sizeMap; j++)
						{
							if (maze[i][j] == '0') {
								cout << "  ";
							}
							else {
								cout << " " << maze[i][j];
							}
						}

						cout << endl;
					}
					cout << "coint-> " << coint;
					cout << "key-> " << keys;

				}
			}

			else if (maze[currentX][currentY] == maze[keyX][keyY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '*';
						i++;
						keyX = g;
						keyY = t;
					}

				}
				keys++;
			}
			else if (maze[currentX - 1][currentY] == '/' && keys == 0)
			{
				maze[currentX][currentY] = ' ';
				currentX--;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
			}
			else if (maze[currentX][currentY + 1] == '/' && keys > 0)
			{
				maze[currentX][currentY] = ' ';

				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
				keys--;
			}
			else if (maze[currentX - 1][currentY] != '#')
			{
				system("cls");
				maze[currentX][currentY] = ' ';
				currentX--;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
				cout << "coint-> " << coint;
				cout << "key-> " << keys;



			}break;



		case 100: {
			system("cls");
			if (maze[currentX][currentY + 1] == '.') {
				system("cls");
				system("color 4");
				cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
					<< endl;
				return 0;
			}
			else if (maze[currentX][currentY + 1] == 'F') {
				if (coint >= 4) {
					system("cls");
					system("color 2");
					cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
						<< endl;
					return 0;
				}
				else {
					currentY + 1;
					for (int i = 0; i < sizeMap; i++)
					{
						for (int j = 0; j < sizeMap; j++)
						{
							if (maze[i][j] == '0') {
								cout << "  ";
							}
							else {
								cout << " " << maze[i][j];
							}
						}

						cout << endl;
					}
					cout << "coint-> " << coint;
					cout << "key-> " << keys;

				}
			}
			else if (maze[currentX][currentY] == maze[cointX][cointY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '$';
						i++;
						cointX = g;
						cointY = t;
					}

				}
				coint++;
			}
			else if (maze[currentX][currentY] == maze[keyX][keyY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '*';
						i++;
						keyX = g;
						keyY = t;
					}

				}
				keys++;
			}
			else if (maze[currentX][currentY + 1] == '/' && keys == 0)
			{
				maze[currentX][currentY] = ' ';
				currentY + 1;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
			}



			else if (maze[currentX][currentY + 1] != '#')
			{
				maze[currentX][currentY] = ' ';
				currentY++;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}


					cout << endl;
				}
				cout << "coint-> " << coint;
				cout << "key-> " << keys;
			}
		}break;



		case 115: {
			system("cls");
			if (maze[currentX + 1][currentY] == '.') {
				system("cls");
				system("color 4");
				cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
					<< endl;
				return 0;
			}
			else if (maze[currentX + 1][currentY] == 'F') {
				if (coint >= 4) {
					system("cls");
					system("color 2");
					cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
						<< endl;
					return 0;
				}
				else {
					currentX + 1;
					for (int i = 0; i < sizeMap; i++)
					{
						for (int j = 0; j < sizeMap; j++)
						{
							if (maze[i][j] == '0') {
								cout << "  ";
							}
							else {
								cout << " " << maze[i][j];
							}
						}

						cout << endl;
					}
					cout << "coint-> " << coint << endl;;
					cout << "key-> " << keys;

				}
			}
			else if (maze[currentX][currentY] == maze[cointX][cointY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '$';
						i++;
						cointX = g;
						cointY = t;
					}

				}
				coint++;
			}
			else if (maze[currentX][currentY] == maze[keyX][keyY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '*';
						i++;
						keyX = g;
						keyY = t;
					}

				}
				keys++;
			}
			else if (maze[currentX + 1][currentY] == '/' && keys == 0)
			{
				maze[currentX][currentY] = ' ';
				currentX + 1;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
			}

			else if (maze[currentX + 1][currentY] != '#')
			{
				maze[currentX][currentY] = ' ';
				currentX++;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
				cout << "coint-> " << coint << endl;
				cout << "key-> " << keys;
			}break;



		case 97: {
			system("cls");
			if (maze[currentX][currentY - 1] == '.') {
				system("cls");
				system("color 4");
				cout << R"(
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                              ++                                   ++            
                  ++               +++            ++  +++    ++    ++   ++             ++            
                  ++        ++ +++++ +++++  ++    +++++ +++++++++ +++++++ ++           ++            
                  ++        ++++ ++   ++++  ++    ++++   ++++  ++ ++++++++++           ++            
                  ++         +++  +++++ ++++++    ++ +++++ ++++++ ++++ +++++           ++            
                  ++       ++++                                                        ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  ++                                                                   ++            
                  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  )"
					<< endl;
				return 0;
			}
			else if (maze[currentX][currentY - 1] == 'F') {
				if (coint >= 4) {
					system("cls");
					system("color 2");
					cout << R"(
                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                          #                        #@            
                  #@           @       @@@  @   @    @      @ @  @@#@                  #@            
                  #@            #  # #    # #   #    @@ ## @@ #  #  @@                 #@            
                  #@             @#  @@  @@ #   #     #@  @#  #  #  @@                 #@            
                  #@             #                                                     #@            
                  #@           @#                                                      #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  #@                                                                   #@            
                  ######################################################################@   )"
						<< endl;
					return 0;
				}
				else {
					currentY - 1;
					for (int i = 0; i < sizeMap; i++)
					{
						for (int j = 0; j < sizeMap; j++)
						{
							if (maze[i][j] == '0') {
								cout << "  ";
							}
							else {
								cout << " " << maze[i][j];
							}
						}

						cout << endl;
					}
					cout << "coint-> " << coint << endl;
					cout << "key-> " << keys;

				}
			}
			else if (maze[currentX][currentY] == maze[cointX][cointY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '$';
						i++;
						cointX = g;
						cointY = t;
					}

				}
				coint++;
			}

			else if (maze[currentX][currentY - 1] == '/' && keys == 0)
			{
				maze[currentX][currentY] = ' ';
				currentY--;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
			}

			else if (maze[currentX][currentY] == maze[keyX][keyY]) {
				for (int i = 0; i < 1;) {
					int g = rand() % 30;
					int t = rand() % 30;
					if (maze[g][t] == '0')
					{
						maze[g][t] = '*';
						i++;
						keyX = g;
						keyY = t;
					}

				}
				keys++;
			}
			else if (maze[currentX][currentY - 1] != '#')
			{
				maze[currentX][currentY] = ' ';
				currentY--;
				maze[currentX][currentY] = 'P'; //Вставляє нашого героя на потрібно позицію!
				for (int i = 0; i < sizeMap; i++)
				{
					for (int j = 0; j < sizeMap; j++)
					{
						if (maze[i][j] == '0') {
							cout << "  ";
						}
						else {
							cout << " " << maze[i][j];
						}
					}
					cout << endl;
				}
			}
			cout << "coint-> " << coint << endl;
			cout << "key-> " << keys;
		}break;
		}





		}while (isGameOver != true || isWin != true);
		}
	} while (isGameOver != true || isWin != true);
}


