#pragma once
#include <string>
#include <iostream>

class QuestionFactory
{
private:
	std::string question1;
	std::string question2;
	std::string question3;
	std::string question4;
	std::string question5;
	std::string question6;

public:
	void GetQuestion1();
	void GetQuestion2();
	void GetQuestion3();
	void GetQuestion4();
	void GetQuestion5();
	void GetQuestion6();
};