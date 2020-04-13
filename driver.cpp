
#include "GameScore.h"
#include "Player.h"
#include <iostream>
using namespace std;

int main(void) {
	
	GameScore* gameScore = new GameScore;
	
	Player* p1 = new Player(gameScore, "tom");
	Player* p2 = new Player(gameScore, "billy");
	Player* p3 = new Player(gameScore, "joel");

	gameScore->incr_score1();
	gameScore->incr_score2();
	gameScore->incr_score1();
	gameScore->incr_score1();

	p1->disp_score2();
	p3->disp_score1();
	p2->disp_score3();

	system("pause");
}