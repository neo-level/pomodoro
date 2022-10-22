//
// Created by Frederik Desmet on 22/10/2022.
//
#pragma once

#include <chrono>

class Pomodoro
{
public:
	Pomodoro() = default;
	~Pomodoro() = default;

	void AddPomodoro();
	void Reset();

	void StartBreak();
	void StartShortBreak();
	void StartLongBreak();

	void AddStreak();
	void ResetStreak();
	[[nodiscard]] unsigned short int GetStreak() const;

	void AddCounter();
	void ResetCounter();
	[[nodiscard]] unsigned short int GetCounter() const;
	[[nodiscard]] unsigned short int GetMaxCounter() const;

private:
	unsigned short int streak{};
	unsigned short int counter{};
	unsigned short int maxCounter{ 4 };

	std::chrono::minutes shorRest{ 5 };
	std::chrono::minutes longRest{ 15 };
	std::chrono::minutes pomodoro{ 25 };

};
