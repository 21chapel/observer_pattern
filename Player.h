#pragma once
#include "Observer.h"
#include "GameScore.h"
#include <string>

class Player : public Observer {
public:
	Player(GameScore* g, string name);
	void Update();
	void disp_score1();
	void disp_score2();
	void disp_score3();
private:
	GameScore* observerable;
	string player_name;

	int score_p1;
	int score_p2;
	int score_p3;
};