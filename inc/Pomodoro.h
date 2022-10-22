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
	[[nodiscard]] std::chrono::steady_clock::time_point GetStartTime() const;

	void SetStopTime();
	[[nodiscard]] std::chrono::steady_clock::time_point GetStopTime() const;

	void SetPauseTime();
	[[nodiscard]] std::chrono::minutes GetPauseTime() const;

	void SetDuration();
	[[nodiscard]] std::chrono::minutes GetDuration() const;
private:
	unsigned short int streak{};
	unsigned short int counter{};
	unsigned short int maxCounter{ 4 };

	std::chrono::minutes shorRest{ 5 };
	std::chrono::minutes longRest{ 15 };
	std::chrono::minutes duration{};
	std::chrono::minutes pauseTime{};
	std::chrono::minutes pomodoro{ 25 };

	std::chrono::steady_clock::time_point startTime{};
	std::chrono::steady_clock::time_point stopTime{};
};
