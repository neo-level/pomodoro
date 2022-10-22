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

	void Start();
	void Stop();
	void Pause();
	void Resume();
	void Reset();
	void ResetCounter();

	void StartBreak();
	void EndBreak();

	void AddStreak();
	[[nodiscard]] unsigned short int GetStreak() const;
	void AddCounter();
	[[nodiscard]] unsigned short int GetCounter() const;
private:
	unsigned short int streak{};
	unsigned short int counter{};
	unsigned short int shorRest{ 5 };
	unsigned short int longRest{ 15 };
	std::chrono::minutes duration{ 25 };
};
