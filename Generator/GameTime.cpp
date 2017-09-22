#include "GameTime.h"
#include <iostream>
#include <string>
using namespace std;
	GameTime::GameTime(int Day, int Hour, int Min, bool Night) { 
		setDay(Day);
		setHour(Hour);
		setMin(Min);
		setNight(Night);
	}
	void GameTime::setDay(int a) {
		this->Day = a;
	}
	void GameTime::setHour(int a) {
		this->Hour = a;
	}
	void GameTime::setMin(int a) {
		this->Min = a;
	}
	void GameTime::setNight(bool a) {
		this->Night = a;
	}
	int GameTime::getDay() {
		return this->Day;
	}
	int GameTime::getHour() {
		return this->Hour;
	}
	int GameTime::getMin() {
		return this->Min;
	}
	bool GameTime::getNight() {
		return this->Night;
	}
