//
// Created by Frederik Desmet on 22/10/2022.
//

#include "Pomodoro.h"

#include <thread>
#include <iostream>


void Pomodoro::AddPomodoro()
{
	std::cout << "Pomodoro ended" << std::endl;
	AddCounter();
	AddStreak();
}

void Pomodoro::Reset()
{
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
		ResetCounter();
		return;
	}

	StartShortBreak();
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

void Pomodoro::StartShortBreak()
{
	std::cout << "Starting short break" << std::endl;
	std::this_thread::sleep_for(std::chrono::minutes(shorRest));
}

void Pomodoro::StartLongBreak()
{
	std::cout << "Starting long break" << std::endl;
	std::this_thread::sleep_for(std::chrono::minutes(longRest));
}
