//
// Created by Frederik Desmet on 22/10/2022.
//

#include "Pomodoro.h"

#include <thread>
#include <iostream>

void Pomodoro::Start()
{
	std::cout << "Pomodoro started" << std::endl;
	SetStartTime();
}

void Pomodoro::Stop()
{
	std::cout << "Pomodoro ended" << std::endl;
	SetStopTime();
}

void Pomodoro::Pause()
{

}

void Pomodoro::Resume()
{

}

void Pomodoro::Reset()
{
	startTime = {};
	stopTime = {};
	ResetCounter();
	ResetStreak();
}

void Pomodoro::ResetCounter()
{
	counter = 0;
}

void Pomodoro::ResetStreak()
{
	streak = 0;
}

void Pomodoro::StartBreak()
{
	if (GetCounter() == GetMaxCounter())
	{
		StartLongBreak();
		return;
	}

	StartShortBreak();
}

void Pomodoro::EndBreak()
{
	Start();
}

void Pomodoro::AddStreak()
{
	++streak;
}

unsigned short int Pomodoro::GetStreak() const
{
	return streak;
}

void Pomodoro::AddCounter()
{
	++counter;
}

unsigned short int Pomodoro::GetCounter() const
{
	return counter;
}

unsigned short int Pomodoro::GetMaxCounter() const
{
	return maxCounter;
}

void Pomodoro::SetStartTime()
{
	startTime = std::chrono::steady_clock::now();
}

void Pomodoro::SetStopTime()
{
	stopTime = std::chrono::steady_clock::now();
}

void Pomodoro::StartShortBreak()
{
	Stop();
	std::cout << "Starting short break" << std::endl;
	std::this_thread::sleep_for(std::chrono::minutes(shorRest));
}

void Pomodoro::StartLongBreak()
{
	Stop();
	std::cout << "Starting long break" << std::endl;
	std::this_thread::sleep_for(std::chrono::minutes(longRest));
}


