#include "Player.h"
#include "GameScore.h"

#include <iostream>
using namespace std;


Player::Player(GameScore* gs, string name) : score_p1(0), score_p2(0), score_p3(0), player_name(name) {
	observerable = gs;
	observerable->Attach(this);
};

void Player::Update() {
	score_p1 = observerable->get_score1();
	score_p2 = observerable->get_score2();
	score_p3 = observerable->get_score3();
}

void Player::disp_score1(){
	cout << player_name  << ": score_p1 => " << score_p1 << endl;
}

void Player::disp_score2() {
	cout << player_name << ": score_p2 => " << score_p2 << endl;
}

void Player::disp_score3() {
	cout << player_name << ": score_p3 => " << score_p3 << endl;
}