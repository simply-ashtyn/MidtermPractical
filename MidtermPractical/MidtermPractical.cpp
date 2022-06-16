// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "QuestionFactory.h"


int main()
{
	QuestionFactory factory;
	bool playing = true;
	int play;
	int answer;
	while (playing == true)
	{
		system("CLS");
		std::cout << "1. New Question\n2. Exit\n\n";
		std::cin >> play;
		if (play == 1)
		{
			int randQuestion = rand() % 6;
			switch (randQuestion)
			{
			case 1:
			{
				factory.GetQuestion1();
				std::cin >> answer;
				if (answer == 1)
				{
					std::cout << "CORRECT!\n";
				}
				else
				{
					std::cout << "WRONG!\n";
				}
				system("pause");
				break;
			}
			case 2:
			{
				factory.GetQuestion2();
				std::cin >> answer;
				if (answer == 2)
				{
					std::cout << "CORRECT!\n";
				}
				else
				{
					std::cout << "WRONG!\n";
				}
				system("pause");
				break;
			}
			case 3:
			{
				factory.GetQuestion3();
				std::cin >> answer;
				if (answer == 4)
				{
					std::cout << "CORRECT!\n";
				}
				else
				{
					std::cout << "WRONG!\n";
				}
				system("pause");
				break;
			}
			case 4:
			{
				factory.GetQuestion4();
				std::cin >> answer;
				if (answer == 2)
				{
					std::cout << "CORRECT!\n";
				}
				else
				{
					std::cout << "WRONG!\n";
				}
				system("pause");
				break;
			}
			case 5:
			{
				factory.GetQuestion5();
				std::cin >> answer;
				if (answer == 3)
				{
					std::cout << "CORRECT!\n";
				}
				else
				{
					std::cout << "WRONG!\n";
				}
				system("pause");
				break;
			}
			case 6:
			{
				factory.GetQuestion6();
				std::cin >> answer;
				if (answer == 1)
				{
					std::cout << "CORRECT!\n";
				}
				else
				{
					std::cout << "WRONG!\n";
				}
				system("pause");
				break;
			}
			}
		}
		else
		{
			playing = false;
		}
	}
}