//################################################## 
// File: timer.h
// Author: Rodrick Sutton
// Description:  This file contains code for the timer class
// Date: 7/24/22
//################################################# 
#pragma once
#include <windows.h>

class Timer
{
private:
	LARGE_INTEGER start;
	LARGE_INTEGER stop;
	LARGE_INTEGER freq;
	double PCFreq;
	__int64 CounterStart;

public:
	Timer();
	void startTimer();
	void stopTimer();
	double getMilli();
	double getSeconds();
	double getMicro();

};
