#include "GameScore.h"

GameScore::GameScore() : score1(0), score2(0), score3(0) {};

void GameScore::incr_score1() 
{ 
	score1++; 
	Notify(); 
}

void GameScore::incr_score2()
{
	score2++;
	Notify();
}

void GameScore::incr_score3()
{
	score1++;
	Notify();
}
