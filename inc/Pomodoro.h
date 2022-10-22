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
	void StartBreak();
	void EndBreak();

	void StartShortBreak();
	void StartLongBreak();

	void AddStreak();
	void ResetStreak();
	[[nodiscard]] unsigned short int GetStreak() const;

	void AddCounter();
	void ResetCounter();
	[[nodiscard]] unsigned short int GetCounter() const;
	[[nodiscard]] unsigned short int GetMaxCounter() const;

	void SetStartTime();
	void SetStopTime();
private:
	unsigned short int streak{};
	unsigned short int counter{};
	unsigned short int maxCounter{ 4 };

	std::chrono::minutes shorRest{ 5 };
	std::chrono::minutes longRest{ 15 };
	std::chrono::minutes duration{ 25 };

	std::chrono::steady_clock::time_point startTime{};
	std::chrono::steady_clock::time_point stopTime{};
};
