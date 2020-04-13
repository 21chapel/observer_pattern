#pragma once
#include "Observable.h"

class GameScore : public Observable {
private:
	int score1;
	int score2;
	int score3;
public:
	GameScore();
	int get_score1() { return score1; }
	int get_score2() { return score2; }
	int get_score3() { return score3; }

	void incr_score1();
	void incr_score2();
	void incr_score3();

};