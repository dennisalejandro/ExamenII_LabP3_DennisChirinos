#pragma once
#include <iostream>
#include <string>
using namespace std;
class GameTime {
	private: 
		int Day;
		int Hour;
		int Min;
		bool Night;
	public: 
		GameTime(int, int, int, bool);
		void  setDay(int);
		void  setHour(int);
		void  setMin(int);
		void  setNight(bool);
		int getDay();
		int getHour();
		int getMin();
		bool getNight();
};
