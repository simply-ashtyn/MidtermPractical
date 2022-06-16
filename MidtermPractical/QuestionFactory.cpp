#include "QuestionFactory.h"

void QuestionFactory::GetQuestion1()
{
	question1 = "What planet was the first vault opened?\n";
	std::cout<<question1;
	std::cout << "1 Pandora\n2 Andromeda\n3 Earth\n4 Promethea\n";
}
void QuestionFactory::GetQuestion2()
{
	question2 = "What is the name of Commander Shepherds ship?\n";
	std::cout << question2;
	std::cout << "1 Black Pearl\n2 Normandy\n3 Citadel\n4 Enterprise\n";
}
void QuestionFactory::GetQuestion3()
{
	question3 = "Who is Mario always trying to save?\n";
	std::cout << question3;
	std::cout << "1 Daisy\n2 Toad\n3 Bowser\n4 Peach\n";
}
void QuestionFactory::GetQuestion4()
{
	question4 = "What is the best spell in Skyrim?\n";
	std::cout << question4;
	std::cout << "1 Ice Spike\n2 Summon Arvak\n3 Bound Bow\n4 Magelight\n";
}
void QuestionFactory::GetQuestion5()
{
	question5 = "What are the zombies called in Fallout?\n";
	std::cout << question5;
	std::cout << "1 Zombies\n2 Reevers\n3 Gouls\n4 Undead\n";
}
void QuestionFactory::GetQuestion6()
{
	question6 = "Who is the worst follower in Skyrim?\n";
	std::cout << question6;
	std::cout << "1 Lydia\n2 Serana\n3 Marcurio\n4 Stenvar\n";
}